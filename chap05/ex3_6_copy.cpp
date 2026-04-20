#include<iostream>
using namespace std;   

class Ractangle//사각형 클래스
{

public:
    int width;//가로 멤버 변수
    int height;//세로 멤버 변수
    Ractangle();//기본 생성자
    Ractangle(const Ractangle &r);//복사 생성자
    Ractangle(int w, int h);//매개변수가 있는 생성자
    Ractangle(int length);//매개변수가 있는 생성자
    bool isSquare();//사각형이 정사각형인지 판별하는 함수
};
Ractangle::Ractangle(const Ractangle &r){
    width = r.width;
    height = r.height; // .을 쓰면 해당 생성자의 멤버 함수나 변수에 접근? ,->의 경우에는 
}
Ractangle::Ractangle(){
    width = height = 1;
}

Ractangle::Ractangle(int w, int h){
    width = w; height = h;
}

Ractangle::Ractangle(int length){
    width = height = length;//정사각형을 만들기 위해 width와 height를 같은 값으로 설정
}

bool Ractangle::isSquare(){
    if(width == height){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    Ractangle rect1;// 길이 1,1인 사각형
    Ractangle rect2(3, 5);//길이 3,5인 사각형
    Ractangle rect3(3);//길이 3,3인 사각형
    Ractangle rect4(rect3);//

    if(rect1.isSquare()) cout << "rect1은 정사각형입니다." << endl;
    if(rect2.isSquare()) cout << "rect2는 정사각형입니다." << endl;
    if(rect3.isSquare()) cout << "rect3는 정사각형입니다." << endl;
    if(rect4.isSquare()) cout << "rect4는 정사각형입니다." << endl;
}

    