//객체 선언시 넣은 인자값에 따라 인자값만큼 멤버 변수의 배열 생성 

#include<iostream>
using namespace std;

class myArray
{

private:
    int *p;
    int aryLen;
public:                                                                                                                  

    myArray* this_point(){return this;};
    int sum();
    void print();
    myArray(int num);
    ~myArray();
};

void myArray::print(){
    for(int i = 0; i < aryLen; i++){
        cout << p[i] << endl;// 포인터의 배열 요소에 접근하여 출력 p[i]는 포인터 p가 가리키는 배열의 i번째 요소를 의미한다. 따라서 이 구문은 배열의 각 요소를 순서대로 출력하는 역할을 한다.
    }
}
int myArray::sum(){

    int allsum = 0;
    for(int i = 0; i < aryLen; i++){
        allsum = allsum + p[i];
    }
    return allsum;
}

myArray::myArray(int num)
{
    p = new int [num];
    if(!p){// 메모리 할당 실패 시 예외 처리 쉽게말해 메모리 할당이 실패했을 때 프로그램이 비정상적으로 종료되는 것을 방지하기 위해, 
        cout << "메모리 할당 실패" << endl;
        exit(1);
    }
    aryLen = num;
}
myArray::~myArray()// 소멸자, 객체가 소멸될 때 자동으로 호출되는 함수,  메인 함수에 작성할 필요가 없다. 
{
    delete [] p;
}




int main(){
    myArray test[3] = {myArray(3), myArray(5), myArray(2)}; // myArray 객체 배열을 생성하고, 각 객체에 3개의 요소를 가진 배열을 할당한다. test는 myArray 객체를 3개 저장할 수 있는 배열로, 각 요소는 myArray 클래스의 객체이다. 각 객체는 생성자 myArray(int num)를 호출하여 3개의 요소를 가진 배열을 할당받는다. 따라서 test[0], test[1], test[2]는 각각 3개의 요소를 가진 배열을 가지고 있는 myArray 객체가 된다.

    // myArray *p = test[0].this_point(); // test[0] 객체의 this_point() 함수를 호출하여 test[0] 객체의 주소를 반환받아 포인터 p에 저장한다. this_point() 함수는 myArray 클래스의 멤버 함수로, 현재 객체의 주소를 반환하는 역할을 한다. 따라서 p는 test[0] 객체의 주소를 가리키게 된다.
   
    // int val = 1;
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < test[i].aryLen; j++){
    //         test[i].p[j] = val++;
    //         cout << test[i].p[j] << " ";
    //     }
    //     cout << endl;
    // }


    // myArray a(4); 

    // for(int i = 0; i < a.aryLen; i++){
    //     a.p[i] = (i + 1)*10;
    // }

    // a.print();
    // cout << "합은 " << a.sum() << endl;
    

    return 0;//없이 
}

//메모리 구조를 가 바뀌는 순서를 그림으로 표시하면 다음과 같다.
//Stack
//|------------------|
//|  myArray a      |  <- a 객체가 저장된 메모리
//|------------------|
//|  int *p        |  <- 포인터 p가 저장된 메모리
//|------------------|
//|  int aryLen    |  <- aryLen이 저장된 메모리
//|------------------|
//|  int allsum    |  <- allsum이 저장된 메모리
//|------------------|
//Heap
//|------------------|
//|  int 배열      |  <- p가 가리키는 int 배열이 저장된 메모리
//|------------------|
//힙메모리와 스택메모리 이해하기
//힙메모리는 동적으로 할당되는
