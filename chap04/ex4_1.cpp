#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle() { radius = 10; }
    Circle(int r) { radius = r; }
    double getArea();
};

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    Circle dount;
    Circle pizza(30);

    cout <<  dount.getArea() << endl;

    Circle *p;
    p = &dount;
    cout << p->getArea() << endl;// ->의 뜻은 포인터가 가리키는 객체의 멤버에 접근하는 연산자이다.
    cout << (*p).getArea() << endl;// (*p)는 포인터 p가 가리키는 객체를 의미한다.()안에 쓰는 이유는 ->보다 ()의 우선순위가 높기 때문이다. 없을경우 

    p = &pizza;
    cout << p->getArea() << endl;// 
    cout << (*p).getArea() << endl;
}
//메모리 구조를 그림으로 표시

//메모리 구조를 그림으로 표시하면 다음과 같다.
//Stack
//|------------------|
//|  Circle dount   |  <- dount 객체가 저장된 메모리
//|------------------|
//|  Circle pizza   |  <- pizza 객체가 저장된 메모리
//|------------------|
//|  Circle *p     |  <- 포인터 p가 저장된 메모리
//|------------------|
//Heap
//|------------------|
//|  Circle 객체   |  <- dount 객체가 저장된 메모리
//|------------------|
//|  Circle 객체   |  <- pizza 객체가 저장된 메모리
//|------------------|
//dount과 pizza 객체는 각각의 메모리에 저장되어 있으며, 포인터 p는 dount과 pizza 객체의 주소를 저장하고 있다. p->getArea()와 (*p).getArea()는 모두 p가 가리키는 객체의 getArea() 함수를
//호출하는 방법이다. p->getArea()는 포인터 p가 가리키는 객체의 멤버에 접근하는 연산자 ->를 사용하여 getArea() 함수를 호출하는 방법이고, (*p).getArea()는 포인터 p가 가리키는 객체를 먼저 참조한 후에 getArea() 함수를 호출하는 방법이다. 두 방법 모두 같은 결과를 반환한다.

