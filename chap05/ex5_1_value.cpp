#include<iostream>
using namespace std;   


//======================================================================================================================= Circle 클래스 정의 =================================================================
class Circle
{
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea(){
        return 3.14 * radius * radius;
    }
    int getRadius(){
        return radius;
    }
    void setRadius(int radius){
        this->radius = radius;
    }
};
//=============================================================================================== Circle 클래스의 생성자, 소멸자 정의 =================================================================
Circle::Circle(){
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int radius){
    this->radius = radius;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle(){
    cout << "소멸자 실행 radius = " << radius << endl;
}
//======================================================================================================================= increase 함수 정의 =================================================================
void increase(Circle c){
    int r = c.getRadius();
    c.setRadius(r + 1);
}   
//======================================================================================================================= main 함수 =================================================================
int main(){
    Circle waffle(30);
    increase(waffle);
    cout << waffle.getRadius() << endl;
}
//소멸자가 두번 나옴