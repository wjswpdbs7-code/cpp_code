#include <iostream>
using namespace std;

class Circle
{
private:// 
    int radius = 10;
public:
    double getArea();
    int read_radius();
    void write_radius(int r);
};

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int Circle::read_radius(){
    return radius;
}
    void Circle::write_radius(int r){
    radius = r;
}

int main() {
    Circle donut;
    donut.write_radius(1);
    double area = donut.getArea();
    cout << "donut의 면적은 " << area << endl;

    Circle pizza;
    pizza.write_radius(30);
    area = pizza.getArea();
    cout << "pizza의 면적은 " << area << endl;
}

//출력값
//donut의 면적은 3.14
//pizza의 면적은 2826 // 소수점이 나오지 않는 이유는? getArea 함수의 반환형이 double이기 때문. double은 소수점이 있는 실수형 데이터를 저장할 수 있는 자료형입니다. 따라서 getArea 함수가 반환하는 값은 소수점이 포함된 실수값이 됩니다. 만약 getArea 함수의 반환형이 int였다면, 소수점 이하가 버려지고 정수값만 반환되었을 것입니다. 하지만 현재 코드에서는 getArea 함수의 반환형이 double로 선언되어 있기 때문에, 계산된 면적 값이 소수점까지 포함된 실수로 반환되고 출력됩니다.

//이 코드에서 오브젝트
//Circle 클래스는 원을 나타내는 클래스로, radius라는 멤버 변수를 가지고 있습니다. getArea()라는 멤버 함수를 통해 원의 면적을 계산할 수 있습니다. main 함수에서는 Circle 클래스의 객체인 donut과 pizza를 생성하고, 각각의 반지름을 설정한 후 getArea() 함수를 호출하여 면적을 계산하고 출력합니다. 따라서 이 코드에서 오브젝트는 Circle 클래스의 인스턴스인 donut과 pizza입니다.

