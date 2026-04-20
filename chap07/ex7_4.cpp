// #include<iostream>
// using namespace std;

// class Power
// {
// private:
//     int kick = 0;
//     int punch = 0;
// public:
//     Power(int kick = 0, int punch = 0);
//     void show();
//     Power operator+(Power op2);
//     bool operator== (Power op2);
//     Power& operator+=(Power op2);
// };

// Power::Power(int kick, int punch){
//     this->kick = kick;
//     this->punch = punch;
// }

// void Power::show(){
//     cout << "kick=" << kick << ',' << "punch=" << punch << endl;
// }
// Power Power::operator+(Power op2){
//     Power tmp;
//     tmp.kick = this->kick + op2.kick;
//     tmp.punch = this->punch + op2.punch;
//     return tmp;
// }

// bool Power::operator== (Power op2){
//     if(kick == op2.kick && punch == op2.punch){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// Power& Power::operator+= (Power op2){
//     kick = kick + op2.kick;
//     punch = punch + op2.punch;
//     return ;
//     }

// int main(void){

//     Power a(3,5), b (4,6), c;
//     c = a + b;
//     //c = a.operator+(b); 도 가능함 컴파일러가 자동으로 해주는거
//     a.show();
//     b.show();
//     c.show();
//     if(a==b){
//         cout << "두 파워가 같음" << endl;
//     }
//     else{
//         cout << "두 파워가 다름" << endl;
//     }
//     a += b;

//     return 0;
// }

#include <iostream>
using namespace std;

class Counter {
private:
    int value;
public:
    Counter(int v = 0) : value(v) {}

    int get() const { return value; }

    // 전위 ++ 연산자: 값을 먼저 증가시키고, 증가된 자신을 참조로 반환
    Counter& operator++() {
        ++value;            // 먼저 증가
        return *this;       // 자신을 참조로 반환 (복사 없이)
    }

    // 후위 ++ 연산자: 원래 값을 보관한 뒤 값을 증가시키고,
    // 보관한(증가 전의) 값을 값으로 반환
    Counter operator++(int) {
        Counter temp = *this; // 현재 상태를 복사해 둠
        value++;              // 그 다음에 증가
        return temp;          // 증가 전의 복사본을 반환
    }
};

int main() {
    Counter a(5);
    cout << "초기 a: " << a.get() << "\n";

    Counter b = ++a; // 전위: a를 먼저 6으로 만들고, b는 6을 가짐
    cout << "b = ++a;  a: " << a.get() << ", b: " << b.get() << "\n";

    Counter c = a++; // 후위: c는 증가 전의 값을 받고, 그 뒤에 a가 증가
    cout << "c = a++;  a: " << a.get() << ", c: " << c.get() << "\n";

    return 0;
}