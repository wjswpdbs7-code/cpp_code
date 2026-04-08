//성 이름 입력받고 fs_name으로 합치는 함수 생성
//이름의 길이에 상관없이 가능하도록
//성 입력받고 fs_name에 넣기 성입력 받을땐 널문자 나오면 넘어감
//이름 입력받고 fs_name에 넣기 이름 입력받을땐 널문자 포함


#include<iostream>
using namespace std;

int main(){
    char f_name[10];
    char s_name[10];
    char fs_name[20];

    cout << "성 입력하세용\n";
    cin >> f_name;//cin으로 받는경우 널문자

    cout << "이름 입력하세용\n";
    cin >> s_name;
// //f_name===============================================
//     int i;
//     for (i = 0; i < 10; i++){
//         if(f_name[i] != '\0')
//             fs_name[i] = f_name[i];
//             else{
//                 fs_name[i] = '\0';
//                 break;
//             }
            
//     }
// //s_name===============================================
//     int j;
//     for (j = 0; j < 10; j++){
//         if(s_name[j] != '\0')
//             fs_name[i+j] = s_name[j];
//             else{
//                 fs_name[i+j] = '\0';
//                 break;
//             }
//     }

//while문으로 바꿔보기
    int i = 0;
    while(f_name[i] != '\0'){
        fs_name[i] = f_name[i];
        i++;
    }
    fs_name[i] = '\0';  

    int j = 0;
    while(s_name[j] != '\0'){
        fs_name[i+j] = s_name[j];
        j++;
    }
    fs_name[i+j] = '\0';

    cout << "성함: " << fs_name <<endl; 
}


