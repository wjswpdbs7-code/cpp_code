#include <iostream>
using namespace std;


//=======================================================================================================================  2배만들기 참조 변수 이용 =================================================================

// void twice(int &num);// 함수 선언 이때 num이라는 참조자 변수 선언 
                   
// int main(){
//     int n = 12;
//     twice(n);// 함수 호출 n이라는 참조자 변수를 인자로 
//     cout << n << endl; 
// }

// void twice(int &num){//함수 정의
//     num = num * 2;
// }

//(int num) 여기서 num은 num의값?

//(int &num) 일때는 num의 주소값?



// //=======================================================================================================================  1더하기 참조 변수 이용 =================================================================

// void plus1(int &num);// 함수 선언
                   
// int main(){
//     int n = 12;
//     plus1(n);// 함수 호출
//     cout << n << endl; 
// }

// void plus1(int &num){//함수 정의
//     num = num + 1;
// }

//&num은 num의 참조자입니다. 
//참조자란 num이 참조하는 변수의 별칭입니다.
//현재 num이라는 참조자를 plus1함수의 인자로 전달하면, 
//cout << &num;을 출력하면, num이 참조하는 변수의 주소값이 출력됩니다.
//&라는 기호는 참조자 선언에 사용되며, 참조자는 변수의 별칭입니다.


//=======================================================================================================================  1더하기 포인터 변수 이용 =================================================================

// void plus1(int *num);// 함수 선언
                   
// int main(){
//     int n = 12;
//     plus1(&n);// 함수 호출
//     cout << n << endl; 
// }

// void plus1(int *num){//함수 정의
//     *num = *num + 1;
// }


//왜 int num을 하면 값이 그대로 12가 나오고 int &num을 하면 13이 나오는가?
//int num은 num이 함수로 전달될 때, num의 값이 복사되어 함수 내부에서 num이라는 새로운 변수가 생성되고, 그 변수에 복사된 값이 저장됩니다. 
//따라서 함수 내부에서 num의 값을 변경해도, main 함수에서 선언된 n 변수의 값은 변경되지 않습니다.


//직접 스택 메모리 구조를 통해 보자면
//----------------------------------
//main 함수의 스택 프레임
//|------------------|
//|  int n = 12;    |  <- n 변수의 메모리
//|------------------|
//|  plus1 함수의 스택 프레임 |
//|------------------|
//|  int num = 12;  |  <- num 변수의 메모리
//|------------------|
//main 함수에서 plus1 함수를 호출할 때, n 변수의 값이 num 변수에 복사되어 전달됩니다. 따라서 plus1 함수의 스택 프레임에서는 num 변수가 n 변수의 값을 가지고 있지만, 
//main 함수의 스택 프레임에서는 n 변수의 값이 그대로 12로 유지됩니다. plus1 함수에서 num의 값을 변경해도, main 함수에서 선언된 n 변수의 값은 변경되지 않습니다.

//------------------------------------------
//main 함수의 스택 프레임
//|------------------|
//|  int n = 12;    |  <- n 변수의 메모리
//|------------------|
//|  plus1 함수의 스택 프레임 |
//|------------------|
//|  int &num = n;  |  <- num 변수의 메모리
//|------------------|
//main 함수에서 plus1 함수를 호출할 때, n 변수의 주소가 num 변수에 전달됩니다. 따라서 plus1 함수의 스택 프레임에서는 num 변수가 n 변수의 주소를 참조하게 됩니다. 
//따라서 plus1 함수에서 num의 값을 변경하면, main 함수에서 선언된 n 변수의 값도 변경됩니다. plus1 함수에서 num의 값을 13으로 변경하면, main 함수에서 선언된 n 변수의 값도 13으로 변경됩니다.

//반면에 int &num은 num이 함수로 전달될 때, num의 주소가 전달되어 함수 내부에서 num이라는 새로운 변수가 생성되지 않고, main 함수에서 선언된 n 변수의 주소를 참조하게 됩니다.
//따라서 함수 내부에서 num의 값을 변경하면, main 함수에서 선언된 n 변수의 값도 변경됩니다. 
//즉, int num은 값 전달(pass by value) 방식이고, int &num은 참조 전달(pass by reference) 방식입니다. 

//void plus1(int &num){//함수 정의
//    num = num + 1;
//}

//해석하기
// int &num; // 쉽게 설명하면 num은 int형 변수의 참조자입니다. 즉, num은 int형 변수의 별칭(alias)입니다. 만약 cout << &num;을 출력하면, num이 참조하는 int형 변수의 주소값이 출력됩니다. 
// num = num + 1; // num이 참조하는 int형 변수의 값을 1 증가시키는 코드입니다. num이 참조하는 int형 변수의 값이 12였다면, 이 코드를 실행한 후에는 num이 참조하는 int형 변수의 값이 13이 됩니다.
//참조를 쉽게 설명 
//참조는 변수의 별칭입니다. 
//현재 함수에서 보기

// 반환값 없음 변수명(타입 참조 변수명){
//     참조 변수명 = 참조 변수명 + 1;
// }

// int main(){
//     int b = 10;
//     int &a = b;

//     cout << a << endl;//a의 값 출력
    
//     a = a + b;// 

//     cout << b << endl;
//     return 0;
// }

//======================================================================================================================== addBubble() 함수 구현  =================================================================


//하기전에 알아두기!
//this 포인터는 클래스의 멤버 함수에서 사용되는 특별한 포인터입니다. 
// this 포인터를 쓰는 이유를 한마디로 설명하면, 클래스의 멤버 함수에서 객체 자신을 가리키는 포인터입니다.
// 만약 여기서 this 포인터를 사용하지 않는다면, addBubble() 함수에서 radius라는 멤버 변수를 참조할 때, radius가 addBubble() 함수의 지역 변수로 인식될 수 있습니다.
//현재 radius는 private 멤버 변수이기 때문에, addBubble() 함수에서 radius를 참조하려면, this 포인터를 사용하여 현재 객체의 radius 멤버 변수를 명시적으로 참조해야 합니다.

// class Bubble
// {
//     int radius;
// public:
//     Bubble(int radius);
//     int getRadius() { return radius; }
//     void setRadius(int n) { radius = n; }

// };

// Bubble::Bubble(int radius){//생성자 정의
//     this->radius = radius;}//this 포인터를 사용하여 현재 객체의 radius 멤버 변수를 초기화


// void addBubble(Bubble &c1, Bubble &c2, Bubble &c3){
//     int sum = 0;
//     sum = c1.getRadius() + c2.getRadius() + c3.getRadius();
//     c1.setRadius(sum);
// }

// int main(){
//     Bubble a(5), b(10), c(130);//반지름 5인 a, 10인 b, 130인 c라는 객체를 3개만듬
//     addBubble(c, a, b);
//     cout << "버블 c의 반지름 " << c.getRadius() << endl; 
    

// }
//원하는 출력값 : 버블 c의 반지름 145

//============================================================================================================ combinBubble()====================================================

// class Bubble
// {
//     int radius;
// public:
//     Bubble(int radius);
//     int getRadius() { return radius; }
//     void setRadius(int n) { radius = n; }
// };

// Bubble::Bubble(int radius){//생성자 정의
//     this->radius = radius;
// }//this 포인터를 사용하여 현재 객체의 radius 멤버 변수를 초기화

// bool combineBubble(Bubble &c1, Bubble &c2){// 1번 원과 2번원 객체 가져와서

//     int sum = 0;// 둘의 합을 구하기

//     if(c1.getRadius() < c2.getRadius()){//만약 두 버블의 크기가 다르면
//         sum = c1.getRadius() + c2.getRadius();// 작은 버블의 크기만큼 큰버블을 키우고 작은버블을 0으로
//         c2.setRadius(sum);
//         c1.setRadius(0);
        
//         return true;
//     }        
//     else if(c1.getRadius() > c2.getRadius()){//만약 두 버블의 크기가 다르면     
//         sum = c1.getRadius() + c2.getRadius();// 작은 버블의 크기만큼 큰버블을 키우고 작은버블을 0으로
//         c1.setRadius(sum); 
//         c2.setRadius(0);
        
//         return true;
//     }
//     else{
//         return false;   //두 크기가 같으면 false를 리턴
//     }
// }

// int main(){
//     Bubble a(10), b(10);
//     if(combineBubble(a, b) == false){
//         cout << "두 버블의 크기가 같음" << endl;
//     }
//     else{
//         cout << "큰 쪽으로 병합됨" << endl;
//     }
//     cout << "버블 a의 반지름 " << a.getRadius() << endl;
//     cout << "버블 b의 반지름 " << b.getRadius() << endl;
// }

//===========================================================================================get 멤버함수=============================

// class Colar
// {
//     int r, g, b;
// public:
//     Colar(int r, int g, int b);

//     void get(int &red, int&green, int &blue);
// };
// Colar::Colar(int r, int g, int b){
//     this->r = r;
//     this->g = g;
//     this->b = b;
// }

// void Colar::get(int &red, int &green, int &blue){
//     red = r;
//     green = g;
//     blue = b;// 순서 주의
// }
// int main(){
//     Colar fore(255, 0, 0), back(15, 128,200); //객체 두개 생성
//     int r, g, b;
//     fore.get(r, g, b);//rgb 
//     cout << "red=" << r << ",green=" << g << ",blue=" << b << endl;
//     back.get(r, g, b);
//     cout << "red=" << r << ",green=" << g << ",blue=" << b << endl;
// }
// //원하는 출력값
// //red=255,green=0,blue=0
// //red=15,green=200,blue=200

//======================================================================================================================== 253p =================================================================
// #define _CRT_SECURE_NO_WARNINGS
// #include<iostream>
// #include<cstring>
// using namespace std;

// class Book
// {
// private:
//     double pr;
//     int pa;
//     char *title;
//     char *author;

// public:
//     Book(double pr, int pa, const char* title, const char* author);
//     Book(const Book &book);
//     ~Book();
// };

// Book::Book(double pr, int pa, const char* title, const char* author){
//     this->pr = pr;
//     this->pa = pa;
//     strcpy(this->title, title);
//     strcpy(this->author, author);
// }

// Book::Book(const Book &Book){
//     this->pr = Book.pr; 
// }

// Book::~Book(){

// }

//=================================================================================== 5chap 실습 9(복사생성자)=============================================================================
// class MyStack
// {
// private:
//     int p[10];
//     int tos=0;// top of stack
// public:
//     MyStack();
//     bool push(int n);
//     bool pop(int& n);
// }; 

// MyStack::MyStack()//
// {
//     for(int i = 0; i < 10; i++){
//         p[i] = 0;
//     }
//     tos = 0;
// }
// bool MyStack::push(int n){//차있으면 f 아니면 t
//     if(this-> tos < 10){
//         p[this -> tos] = n;
//         tos++;
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// bool MyStack::pop(int &n){//값 받아오고 지우기 비어있으면 f 아니면 t
//     if(this-> tos > 0){
//         tos--;
//         n = p[this ->tos];
//         return true;
//     }
//     else{
//         return false;
//     }
// }   

// int main(){
//     MyStack st;

//     for(int i = 0; i < 11; i++){
//         if (st.push(i)) {
//             cout << i << ' ';//push(i)가 false일때까지 
//         }
//         else {
//             cout << endl << i+1 << "번째 푸시 실패! 스택 차 있음" << endl;
//         }
//     }
//     int n;
//         for(int i = 0; i < 11; i++){
//         if (st.pop(n)) cout << n << ' ';
//         else cout << endl << i+1 << "번째 팝 실패! 스택이 비어 있음" << endl;
//     }
// }
//========================================================================================================================= 5chap 실습 11(복사생성자)=============================================================================

//저장 가능한 스택 개수를 지정가능하게
// class MyStack
// {
// private:
//     int *p;// 정수를 저장할 동적 배열에 대한 포인터
//     int size = 0;// 할당 받은 동적 배열의 크기. 초기값 0
//     int tos = 0;// top of stack 다음에 저장될 배열 요소(원소)의 인덱스(배열 번호) 초기값 0
// public:
//     MyStack();
//     MyStack(int size);
//     MyStack(const MyStack &src);
//     ~MyStack();
//     bool push(int n);
//     bool pop(int& n);
// };
// MyStack::MyStack(){

// }
// MyStack::MyStack(int size){

// }

// MyStack::MyStack(const MyStack &src){

// }

// MyStack::~MyStack(){
    
// }
// bool MyStack::push(int n){//차있으면 f 아니면 t
//     if(this-> tos < size){
//         p[this -> tos] = n;
//         tos++;
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// bool MyStack::pop(int &n){//값 받아오고 지우기 비어있으면 f 아니면 t
//     if(this-> tos > 0){
//         tos--;
//         n = p[this ->tos];
//         return true;
//     }
//     else{
//         return false;
//     }
// }   


// int main(){
//     MyStack a(10);//10개 공간을 가진 객체 생성
//     a.push(10);//0번에 10
//     a.push(20);//1번에 20

//     MyStack b = a;
//     b.push(30);
//     int n;// 값 받아올 변수
//     a.pop(n);
//     cout << "스택 a에서 팝한 값 " << n << endl;
//     b.pop(n);
//     cout << "스택 b에서 팝한 값 " << n << endl;
// }
//========================================================================================================================== 5chap 실습 6 276p =================================================================

class Polygon{
    int size=0;
    int *xList, *yList;
public:
    Polygon(int size);
    ~Polygon();
    void read();
    int get(int p1, int p2, int p3);
};

Polygon::Polygon(int size){

}
Polygon::~Polygon(){

}
void Polygon::read(){

}
int Polygon::get(int p1, int p2, int p3){

}

int main(){
    Polygon poly(6);
    poly.read();
    int n = 3, x, y;
    bool res = poly.get(n, x, y);
}