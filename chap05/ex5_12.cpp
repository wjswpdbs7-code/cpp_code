// #define _CRT_SECURE_NO_WARNINGS
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Person{
//     char* name;
//     int id;
// public:
//     Person(int id, const char* name);
//     Person(const Person &person); //복사 생성자 선언
//     ~Person();
//     void changeName(const char* name);
//     void show() {
//         cout << id << ", " << name << endl;
//     }
// };

// Person::Person(int id, const char* name){
//     this->id = id;
//     int len = strlen(name);
//     this->name = new char[len + 1];
//     strcpy(this->name, name);
// }

// Person::Person(const Person& person){//복사생성자 정의
//     this->id = person.id;
//     int len = strlen(person.name);
//     this->name = new char[len + 1];
//     strcpy(this->name, person.name);
//     cout << "복사 생성자 실행. 원본 객체의 이름: " <<  this->name << endl;
// }

// Person::~Person(){
//     if(name)
//         delete[] name;
// }

// void Person::changeName(const char* name){
//     if(strlen(name) > strlen(this->name)){
//         return;
//     }
//     strcpy(this->name, name);
// }


// int main(){
//     Person father(1, "Kitea");
//     Person daughter(father);

//     cout << "daughter 객체 생성 직후 ----" << endl;
//     father.show();
//     daughter.show();

//     daughter.changeName("Grace");
//     cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
//     father.show();
//     daughter.show();

//     return 0;
// }

#include<iostream>
using namespace std;

class MyStack
{
private:
    int p[10];
    int tos=0;// top of stack
public:
    MyStack();
    bool push(int n);
    bool pop(int& n);
}; 

MyStack::MyStack()//
{
    for(int i = 0; i < 10; i++){
        p[i] = 0;
    }
    tos = 0;
}
bool MyStack::push(int n){//차있으면 f 아니면 t
    if(this-> tos < 10){
        p[this -> tos] = n;
        tos++;  
        return true;
    }
    else{
        return false;
    }
}
bool MyStack::pop(int &n){//값 받아오고 지우기 비어있으면 f 아니면 t
    if(this-> tos > 0){
        tos--;
        n = p[this ->tos];
        return true;
    }
    else{
        return false;
    }
}   

int main(){
    MyStack st;

    for(int i = 0; i < 11; i++){
        if (st.push(i)) {
            cout << i << ' ';//push(i)가 false일때까지 
        }
        else {
            cout << endl << i+1 << "번째 푸시 실패! 스택 차 있음" << endl;
        }
    }
    int n;
        for(int i = 0; i < 11; i++){
        if (st.pop(n)) cout << n << ' ';
        else cout << endl << i+1 << "번째 팝 실패! 스택이 비어 있음" << endl;
    }
}