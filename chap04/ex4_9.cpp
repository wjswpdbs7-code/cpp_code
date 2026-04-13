#include<iostream>
#include<string>
using namespace std;

string str_append(string str1, char *str2) {
        return str1 + str2;

}

int main(){

    string str = "I love ";

    string str1 = str_append(str, "C++");// 타일캐스팅으로 하려면 

    cout << str << endl; // str은 str_append 함수에서 변경된 값이 반영되지 않으므로, "I love "가 출력된다. str_append 함수에서 str1은 str의 복사본이므로, str1에 대한 변경은 str에 영향을 미치지 않는다. 따라서 main 함수에서 str을 출력하면 원래의 값인 "I love "가 출력된다.
    // string str = "I love ";// string 클래스의 객체 str을 생성하고, "I love "라는 문자열로 초기화한다. 
    // string str1 = "test"; // string 클래스의 객체 str1을 생성하고, "test"라는 문자열로 초기화한다.
    // str.append("C++"); // str 문자열에 "C++"을 추가하여 "I love C++"로 만든다. 
    // str.append(str1); // str 문자열에 str1 문자열을 추가하여 "I love C++test"로 만든다.

    // cout << str << endl;
    


}

//타일캐스팅이란 C++에서 제공하는 타입 변환 방법 중 하나로, 객체의 타입을 다른 타입으로 변환할 때 사용된다. 타일캐스팅은 static_cast, dynamic_cast, const_cast, reinterpret_cast의 네 가지 형태로 제공되며, 각각의 형태는 특정한 상황에서 사용된다. 예를 들어, static_cast는 컴파일 타임에 타입 변환이 가능한 경우에 사용되고, dynamic_cast는 런타임에 타입 변환이 필요한 경우에 사용된다. const_cast는 const 속성을 제거하거나 추가할 때 사용되고, reinterpret_cast는 포인터나 참조의 타입을 완전히 다른 타입으로 변환할 때 사용된다. 타일캐스팅은 안전한 타입 변환을 보장하기 위해 C++에서 제공되는 기능으로, 적절한 상황에서 올바르게 사용해야 한다.