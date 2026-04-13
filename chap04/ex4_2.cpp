#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle() { radius = 2; }
    Circle(int r) { radius = r; } //생성자 오버로딩, Circle 객체를 생성할 때 반지름을 지정할 수 있도록 함
    void setRadius(int r) { radius = r; } //반지름을 설정하는 멤버 함수, Circle 객체의 반지름을 변경할 수 있도록 함 Circle(int r) { radius = r; } 과 같은 역할을 하지만, setRadius 함수는 객체가 생성된 후에도 반지름을 변경할 수 있도록 함
    double getArea();
};

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    Circle circleArray[3]; //  


    circleArray[0].setRadius(10); // 첫 번째 Circle 객체의 반지름을 10으로 설정
    circleArray[1].setRadius(20); // 두 번째 Circle 객체의 반지름을 20으로 설정
    circleArray[2].setRadius(30); // 세 번째 Circle 객체의 반지름을 30으로 설정


    for(int i = 0; i < 3; i++){
        cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl; // 각 Circle 객체의 면적을 출력
    }  
    Circle *p;
    p = circleArray; // 포인터 p가 Circle 객체 배열의 첫 번째 요소를 가리키도록 설정 &를 사용하지 않는 이유 
    for(int i = 0; i < 3; i++){
        cout << "Circle " << i << "의 면적은 " << p->getArea() << endl; // 포인터 p가 가리키는 Circle 객체의 면적을 출력
        p++; // 포인터 p를 다음 Circle 객체로 이동
    }
}