//구입할 물품의 개수입력받고 가격을 저장할 정수 배열을 동적으로 생성
//물품 가격을 입력받아 동적 배열에 저장한 후 제일 비싼 가격과 제일 싼 가격을 구하여 출력하고 할당받은 배열을 반환

//출력값
//구입할 물품의 개수>>6
//물품 6개의 가격 입력>>990 250 1200 100 699
//제일 싼 가격은 100
//제일 비싼가격은 1200

#include<iostream>
using namespace std;

int main(){
    int num = 0;
    int cheap = 0;
    int expan = 0;

    cout << "구입할 물품의 개수>>"  << "\n";
    cin >> num;
    int *count = new int[num];//미배정 동적할당 
    

    cout << "물품 6개의 가격 입력\n";
    for(int i = 0; i < num; i++){
        cin >> count[i];
    }
     
    cheap = count[0];
    for(int j = 1; j < num; j++){
        if(cheap > count[j])
            cheap = count[j];
    }
    cout << "제일 싼 가격은 " << cheap << endl;

    expan = count[0];
    for(int j = 1; j < num; j++){
        if(expan < count[j])
            expan = count[j];
    }

    cout << "제일 비싼 가격은 " << expan << endl;

    delete count;

    return 0;
}