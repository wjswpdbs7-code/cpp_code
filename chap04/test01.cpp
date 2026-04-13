//온도 5개를 저장할 배열을 동적 할당받고 온도 5개를 입력받아 배열에 저장, 배열의 평균을 구하고 출력후 동적할당된 배열 반환
//출력:온도 5개 입력>>36.5 36.6 36.9 36.1 36.6
//    평균은 36.54
#include<iostream>
using namespace std;

int main(){

    double *temp = new double[5];
    double sum = 0.0;
    double temp_all = 0.0;
    cout << "5인의 온도를 입력하세요\n";
    //====================== 온도 입력받은거 배열에 저장 ==============================
    int i;
    for(int i = 0; i < 5; i++){
        cin >> temp[i];
    } 
    //====================== 온도 5개 출력하기 ==============================
    for(int j = 0; j < 5; j++){
        cout << temp[j] << ", ";// 5번째 쓰래기값나옴;;
    }
    //====================== 평균 구하기 ==============================
    for(int k = 0; k < 5; k++){
        sum = temp[k] + sum;
    }
    temp_all = sum / 5;
    cout << "\n평균은 " << temp_all << endl;
    
    delete temp;

    return 0;

}

