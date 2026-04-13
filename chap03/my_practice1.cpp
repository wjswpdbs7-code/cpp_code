// 연습문제
//직접 함수를 만들어야하는 문제 
// 문자열을 뒤집는 함수를 작성하시오.

#include<iostream>
#include<string>

using namespace std;

string make_back(string str);

int main(void){

    string in_str;

    cout << "문자열을 입력받고 문자열을 뒤집어 주는 프로그램입니당.\n\n문자열을 입력하세용\n";
    cin >> in_str;

    string out_str = make_back(in_str);
    
    cout << out_str << endl;

}

string make_back(string str){
    string out_str = "";
    for(int i = 0; i < str.length(); i++){//
        out_str += str[str.length() - 1 - i];
    }
    return out_str;
}