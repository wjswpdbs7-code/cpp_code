#include <iostream>
using namespace std;

class Circle{
private:
    int radius;

public:
    
    Circle() { radius = 2; }
    Circle(int r) { radius = r; } //생성자 오버로딩, Circle 객체를 생성할 때 반지름을 지정할 수 있도록 함
    Circle(const Circle &c);
    void setRadius(int radius) {this-> radius = radius; } //반지름을 설정하는 멤버 함수, Circle 객체의 반지름을 변경할 수 있도록 함 Circle(int r) { radius = r; } 과 같은 역할을 하지만, setRadius 함수는 객체가 생성된 후에도 반지름을 변경할 수 있도록 함
    double getArea(); 
};

Circle::Circle(const Circle &c){
    this-> radius = c.radius; //.과 ->의 차이점은, .은 객체의 멤버에 접근할 때 사용되고, ->는 포인터가 가리키는 객체의 멤버에 접근할 때 사용됩니다. 
    cout << "복사 생성자 실행 radius = " << radius << endl;                                              
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    Circle src(30);
    Circle dest(src); //복사 생성자 호출

    //복사 생성자가 호출되지 않음 = 대입 연산자 오버로딩이 필요함
    // Circle dest;
    // dest = src;

    cout << "원본의 면적 = " << src.getArea() << endl;
    cout << "복사본의 면적 = " << dest.getArea() << endl;
}

//오버로딩이란 하나의 클래스 내에서 같은 이름의 함수를 여러 개 정의하는 것을 말합니다. 함수 오버로딩은 함수 이름이 같지만 매개변수의 타입이나 개수가 다른 여러 함수를 정의할 수 있게 해줍니다. 이를 통해 코드의 가독성을 높이고, 같은 기능을 수행하는 함수를 다양한 방식으로 사용할 수 있도록 합니다. 예를 들어, Circle 클래스에서 Circle(int r) 생성자는 반지름을 매개변수로 받아 객체를 생성하는 반면, Circle() 생성자는 매개변수가 없어서 기본 반지름을 설정하는 역할을 합니다. 이렇게 같은 이름의 생성자를 여러 개 정의함으로써 객체를 생성할 때 다양한 방법을 제공할 수 있습니다.  