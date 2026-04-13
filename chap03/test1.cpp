#include<iostream>
#include<string>

using namespace std;

class Picture
{
public:
    int Width;
    int Height;
    string Place;

    Picture();
    Picture(int w, int h, string p);

    int getWidth();
    int getHeight();
    string getPlace();
};

Picture::Picture(){
    Width = 5;
    Height = 7;
    Place = "모름";
}
Picture::Picture(int w, int h, string p){
    Width = w;
    Height = h;
    Place = p;
}

int Picture::getWidth(){
    return Width;
}

int Picture::getHeight(){
    return Height;
}

string Picture::getPlace(){
    return Place;
}

int main(){
    Picture pic;
    Picture mt(10, 14, "한라산");
    cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << "\n";
    cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << "\n";
}
//private을 쓰는 예시
// #include<iostream>
// using namespace std;

// class Circle
// {
// private:
//     int radius = 10;//이제 이 radius 멤버 변수는 Circle 클래스 내부에서만 접근할 수 있습니다. 
// public:
//     double getArea();
//     int read_radius();
//     void write_radius(int r);
// };

// double Circle::getArea(){
//     return 3.14 * radius * radius;
// }

// int Circle::read_radius(){
//     return radius;
// }
// void Circle::write_radius(int r){
//     radius = r;
// }

// int main() {
//     Circle donut;
//     donut.write_radius(1);
//     double area = donut.getArea();
//     cout << "donut의 면적은 " << area << endl;   
