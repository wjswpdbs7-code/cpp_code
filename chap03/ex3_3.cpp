#include<iostream>
using namespace std;

class Circle
{
public:
    int radius;//반지름
    double getArea();//원의 면적을 구하는 함수
    Circle();//기본 생성자
    Circle(int r);//매개변수가 있는 생성자
};

double Circle::getArea(){
    return 3.14 * radius * radius;
}

Circle::Circle() : Circle(1) {
}


Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}


int main() {
    Circle donut;
    double area = donut.getArea();
    cout << "donut의 면적은 " << area << endl;

    Circle pizza(20);
    area = pizza.getArea();
    cout << "pizza의 면적은 " << area << endl;
}

