// #include<iostream>
// using namespace std;   


// //======================================================================================================================= Circle 클래스 정의 =================================================================
// class Circle
// {
// private:
//     int radius;
// public:
//     Circle();
//     Circle(int r);
//     ~Circle();
//     double getArea(){
//         return 3.14 * radius * radius;
//     }
//     int getRadius(){
//         return radius;
//     }
//     void setRadius(int radius){
//         this->radius = radius;
//     }
// };
// //=============================================================================================== Circle 클래스의 생성자, 소멸자 정의=================================================================
// Circle::Circle(){
//     radius = 1;
//     cout << "생성자 실행 radius = " << radius << endl;
// }
// Circle::Circle(int radius){
//     this->radius = radius; //this->radius = radius;에서 this->radius는 Circle 클래스의 멤버 변수인 radius를 가리키고, = radius;에서 radius는 Circle 클래스의 생성자 매개변수로 전달된
//                             //radius 값을 가리킵니다. 따라서 this->radius = radius;는 생성자 매개변수로 전달된 radius 값을 Circle 클래스의 멤버 변수인 radius에 할당하는 역할을 합니다

//     cout << "생성자 실행 radius = " << radius << endl;
// }

// Circle::~Circle(){
//     cout << "소멸자 실행 radius = " << radius << endl;
// }
// //======================================================================================================================= increase 함수 정의 =================================================================
// void increase(Circle c){
//     int r = c.getRadius();
//     c.setRadius(r + 1);
// }   
// //======================================================================================================================= main 함수 =================================================================
// int main(){
//     Circle waffle(30);
//     increase(waffle);
//     cout << waffle.getRadius() << endl;
// }

// ., ->의 차이점은, .은 객체의 멤버에 접근할 때 사용되고, ->는 포인터가 가리키는 객체의 멤버에 접근할 때 사용됩니다.

// 이를 이해하기위한 예시 코드
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person(const string& n, int a) : name(n), age(a) {}
    void introduce() {
        cout << "이름: " << name << ", 나이: " << age << '\n';
    }
};

int main() {
    // 1) 객체를 직접 생성(스택)
    Person p("철수", 20);
    cout << "1) p.name = " << p.name << '\n';
    p.introduce();

    // 2) 객체의 주소를 가리키는 포인터
    Person* ptr = &p;
    cout << "2) ptr->name = " << ptr->name << '\n';
    ptr->introduce();

    // 3) (*ptr).member 와 ptr->member 는 동일
    cout << "3) (*ptr).age = " << (*ptr).age << '\n';

    // 4) 동적 할당(힙)에 만든 객체는 포인터로 접근해야 함
    Person* heapPtr = new Person("영희", 25);
    cout << "4) heapPtr->name = " << heapPtr->name << '\n';
    heapPtr->introduce();
    delete heapPtr;

    // 5) null 포인터는 사용 전 반드시 확인
    Person* nullPtr = nullptr;
    if (nullPtr) {
        nullPtr->introduce();
    } else {
        cout << "5) nullPtr은 null 입니다. -> 사용하면 오류가 납니다.\n";
    }

    // 6) 참조(reference)는 객체처럼 점(.)으로 접근
    Person& ref = p;
    cout << "6) ref.name = " << ref.name << '\n';
    ref.introduce();

    return 0;
}