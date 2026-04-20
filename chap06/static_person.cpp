#include<iostream>
using namespace std;

class Person
{
private:
    /* data */
public:
    int money;

    void add_money(int money);

    static int shared_money;
    static void add_shared(int n);
    
    Person(/* args */);
    ~Person();
};

void Person::add_money(int money){
    this->money += money;
}//입금

int Person::shared_money = 10; //현재 공금은 10원

void Person::add_shared(int n){//스태틱 함수에서는 this포인터 사용불가?
    shared_money = shared_money + n;
}

Person::Person(/* args */){
}
Person::~Person(){
}


int main(void){

    Person::shared_money = 20;//public이므로 클래스 이름으로 접근하여 공금 20원으로 변경 private일 경우에는 클래스 이름으로 접근하여 값을 변경할 수 없으므로, public으로 선언해야 한다. static 멤버 변수는 클래스의 모든 객체가 공유하는 변수이므로, 클래스 이름으로 접근하여 값을 변경할 수 있다. 따라서 Person::shared_money = 20; 구문은 Person 클래스의 static 멤버 변수 shared_money의 값을 20으로 변경하는 역할을 한다.

    Person han;
    han.money = 100;// han의 돈 100원
    han.shared_money = 200;//han의 공금? 200원

    Person lee;
    lee.money = 150; //lee돈 150원
    lee.add_money(200);// lee 입금 200해서 현재 350원
    lee.add_shared(200);//공금에 200 더함
    han.add_shared(10);//공금에 10 더함

    cout << "han의 돈" << han.money << endl;
    cout << "han의 공금" << han.shared_money << endl;
    cout << "lee의 돈" << lee.money << endl;
    cout << "lee의 공금" << lee.shared_money << endl;

    return 0;
}
//스태틱 변수 대신 전역 변수로 사용하는 방법도 있지만, 스태틱 변수를 사용하면 클래스 내부에서 해당 변수를 관리할 수 있으므로, 코드의 가독성과 유지보수성이 향상된다. 또한, 스태틱 변수는 클래스의 모든 객체가 공유하는 변수이므로, 클래스 이름으로 접근하여 값을 변경할 수 있다. 따라서 스태틱 변수를 사용하는 것이 전역 변수보다 더 적절한 선택일 수 있다.
//전역 변수를 메인 함수 내에서 변경하려면, 전역 변수에 접근할 수 있는 방법이 필요하다. 일반적으로 전역 변수는 파일의 최상단에 선언되며, 메인 함수에서 해당 변수를 사용할 수 있다. 예를 들어, 다음과 같이 전역 변수를 선언하고 메인 함수에서 변경할 수 있다.
// #include <iostream>
// using namespace std; 
// int global_variable = 10; // 전역 변수 선언

// int main() {
//     cout << "전역 변수의 초기값: " << global_variable << endl;
//     global_variable = 20; // 전역 변수의 값 변경
//     cout << "전역 변수의 변경된 값: " << global_variable << endl;
//     return 0;
// }
//이 예제에서는 global_variable이라는 전역 변수를 선언하고, 메인 함수에서 해당 변수의 값을 변경하는 방법을 보여준다. 전역 변수는 프로그램 전체에서 접근할 수 있으므로, 메인 함수에서 직접 값을 변경할 수 있다. 그러나 전역 변수를 사용할 때는 주의해야 한다. 전역 변수는 프로그램 전체에서 접근할 수 있기 때문에, 다른 함수나 객체에서 해당 변수를 변경할 수 있다. 따라서 전역 변수를 사용할 때는 변수의 이름을 명확하게 지정하고, 변수의 사용 범위를 제한하는 것이 좋다. 또한, 전역 변수를 사용할 때는 프로그램의 구조를 명확하게 설계하여, 변수의 사용과 변경이 예상치 못한 결과를 초래하지 않도록 주의해야 한다.