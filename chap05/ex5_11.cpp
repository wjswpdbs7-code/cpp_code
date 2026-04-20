#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person{
    char* name;
    int id;
public:
    Person(int id, const char* name);
    ~Person();
    void changeName(const char* name);
    void show() {
        cout << id << ", " << name << endl;
    }
};

Person::Person(int id, const char* name){
    this->id = id;
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
}


Person::~Person(){
    if(name)
        delete[] name;
}

void Person::changeName(const char* name){
    if(strlen(name) > strlen(this->name)){
        return;
    strcpy(this->name, name);
    }
}


int main(){
    Person father(1, "Kitea");
    Person daughter(father);

    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
    father.show();
    daughter.show();

    return 0;
}

// Grace 로 바뀌지 않음
// 복사 생성자에서 name 멤버 변수를 깊은 복사로 처리했기 때문에, father와 daughter 객체는 서로 다른 메모리 공간에 name을 저장하게 됩니다. 따라서 daughter 객체의 changeName 함수에서 name을 변경해도 father 객체의 name에는 영향을 미치지 않습니다. 이는 복사 생성자가 깊은 복사를 수행하여 각 객체가 독립적인 name을 가지도록 했기 때문입니다. 만약 얕은 복사를 사용했다면, father와 daughter 객체가 같은 메모리 공간을 참조하게 되어 하나의 객체에서 name을 변경하면 다른 객체에도 영향을 미쳤을 것입니다.
//얕은 복사로 하려면
