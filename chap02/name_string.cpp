#include<iostream>
#include<string>
using namespace std;
    
string my_strcat(const string str1, const string str2, string str3);

int main(){
    string f_name;
    string s_name;
    string fs_name;

    cout << "성 입력하세용\n";
    cin >> f_name;

    cout << "이름 입력하세용\n";
    cin >> s_name;

    fs_name = my_strcat(f_name, s_name, fs_name); 

    cout << "성함 : " << fs_name <<endl;
}

//함수 만들어서..

 
string my_strcat(const string str1, const string str2, string str3){
       str3 = str1 + str2;  
       return str3;
}
// string 반환값이란 함수에서 string 타입의 값을 반환한다는 의미입니다. 함수가 실행된 후에 결과로 string 값을 돌려주는 것을 말합니다. 예를 들어, my_strcat 함수는 세 개의 string 인자를 받아서 str1과 str2를 합쳐서 str3에 저장한 후, str3을 반환합니다. 따라서 이 함수는 string 타입의 값을 반환하는 함수입니다.
//string은 문자열을 말하는가?
//string은 문자열을 나타내는 C++의 표준 라이브러리 클래스입니다. string 클래스는 문자열을 다루기 위한 다양한 기능과 연산자를 제공하여, 문자열을 쉽게 생성, 수정, 조작할 수 있도록 도와줍니다. string 클래스는 C 스타일의 문자열(char 배열)보다 더 편리하고 안전하게 문자열을 처리할 수 있게 해줍니다. 예를 들어, string 클래스를 사용하면 문자열의 길이를 자동으로 관리하고, 문자열을 쉽게 연결하거나 비교할 수 있습니다.

//한글 문자열 