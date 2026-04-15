#include<iostream>
using namespace std;

class Ractangle//사각형 클래스
{

public:// 접근 지정자: 클래스의 멤버에 대한 접근 권한을 지정하는 키워드입니다. public은 클래스 외부에서 멤버에 접근할 수 있도록 허용하는 접근 지정자입니다. 
        //이경우, width, height, getArea() 함수는 public으로 선언되어 있기 때문에 main 함수에서 rect.width, rect.height, rect.getArea()와 같이 접근할 수 있습니다.
    int width;//가로 멤버 변수
    int height;//세로 멤버 변수

    Ractangle();//기본 생성자
    Ractangle(int w);//매개변수가 있는 생성자 
    Ractangle(int w, int h);//매개변수가 있는 생성자

    int getArea();//사각형의 면적을 구하는 함수
};

Ractangle::Ractangle(){
    width = 1;
    height = 1;
    cout << "가로 " << width << " 세로 " << height << " 사각형 생성" << endl;
}


Ractangle::Ractangle(int w){
    width = w;
    height = 1;
    cout << "가로 " << width << " 세로 " << height << " 사각형 생성" << endl;
}

Ractangle::Ractangle(int w, int h){
    width = w;
    height = h;
    cout << "가로 " << width << " 세로 " << height << " 사각형 생성" << endl;
}


int Ractangle::getArea(){
    return width * height;
}

int main() {
    Ractangle rect;
    rect.width = 3;
    rect.height = 5;

    Ractangle rect2(20);

    Ractangle rect3(20, 10);

}

// 해당 예제를 가지고 클래스와 객체에 대해 설명하자면, Ractangle 클래스는 사각형을 나타내는 클래스로, width와 height라는 멤버 변수를 가지고 있습니다. getArea()라는 멤버 함수를 통해 사각형의 면적을 계산할 수 있습니다. 
//이제 메인 함수에서 사용하려면 Ractangle 클래스의 객체(오브젝트)를 생성해야 합니다. 여기서 객체란 클래스의 인스턴스를 의미하며, 실제로 메모리에 할당되어 사용되는 실체입니다. 이전에 생성한 Ractangle 클래스 자체는 실체가 없는 추상적인 개념이지만, main 함수에서 Ractangle rect;를 통해 rect라는 객체를 생성함으로써 실제로 메모리에 할당된 오브젝트가 만들어집니다. 이제 사용법을 설명하자면, rect 객체의 멤버 변수인 width와 height에 각각 3과 5를 할당한 후, getArea() 함수를 호출하여 면적을 계산하고 그 결과를 area 변수에 저장합니다. 마지막으로 cout을 사용하여 사각형의 면적을 출력합니다. 따라서 이 예제에서는 Ractangle 클래스의 객체인 rect를 생성하여 사각형의 면적을 계산하고 출력하는 과정을 보여주고 있습니다.

//이 코드에서 오브젝트는 Ractangle rect;로 생성된 rect 객체입니다. 코드에 있는 오브젝트영역을 작성하자면 
// Ractangle rect; // rect 객체 생성
// rect.width = 3; // rect 객체의 width 멤버 변수에 3 할당
// rect.height = 5; // rect 객체의 height 멤버 변수에 5 할당
// int area = rect.getArea(); // rect 객체의 getArea() 함수 호출하여 면적 계산
// cout << "사각형의 면적은 " << area << endl; // 계산된 면적 출력

