#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char passward[11];
    cout << "암호 입력하세용\n";

    while(true){
        cout << "암호>>";
        cin >> passward;
        if(strcmp(passward, "c++") == 0){//strcmp는 문자열을 비교하는 함수로, 예를들어 strcmp(passward, "c++") == 0은 passward와 "c++"이 동일한 문자열인지 비교하는 것이다. strcmp 함수는 두 문자열이 동일하면 0을 반환하므로, 이 조건문은 passward가 "c++"과 일치하는 경우에 참이 된다.
            cout << "암호가 일치합니다.\n";
            break;
        }
        
        else
            cout << "암호가 일치하지 않습니다." << endl;
    }

}
//return 0없어도 괜찮은 이유: C++에서는 main 함수가 int형을 반환하도록 정의되어 있지만, 
//main 함수에서 return 0;을 명시적으로 작성하지 않아도 컴파일러가 자동으로 return 0;을 추가해주기 때문에
//main 함수에서 return 0;을 생략해도 프로그램이 정상적으로 종료되고, 운영체제에 0을 반환하게 된다.