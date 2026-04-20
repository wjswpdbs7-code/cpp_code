#include <iostream>
using namespace std;

class Coffee
{
private:
    int water, espresso, sugar, cream;
public:
    void show();

    Coffee(int water=1, int espresso=1, int sugar=0, int cream=0);
    // Coffee operator+(Coffee menu);
    // Coffee operator+(int n);
    friend Coffee operator+(Coffee menu);
    friend Coffee operator+(int n);
};

void Coffee::show(){
    cout << "물" << water << ", 커피" << espresso;
    cout << ", 설탕" << sugar << ", 크림" << cream << endl;
}

Coffee::Coffee(int water, int espresso, int sugar, int cream){
    this->water = water;
    this->espresso = espresso;
    this->sugar = sugar;
    this->cream = cream;
}

// Coffee Coffee::operator+(Coffee menu){
//     Coffee tmp;
    
//     tmp.water = water + menu.water;
//     tmp.espresso = espresso + menu.espresso;
//     tmp.sugar = sugar + menu.sugar;
//     tmp.cream = cream + menu.cream;
//     return tmp;
// }
// Coffee Coffee::operator+(int n){

//     Coffee tmp;
    
//     tmp.water = water + n;
//     tmp.espresso = espresso + n;
//     tmp.sugar = sugar + n;
//     tmp.cream = cream + n;
//     return tmp;

// }

Coffee operator+(Coffee menu){
    Coffee tmp;
    
    tmp.water = water + menu.water;
    tmp.espresso = espresso + menu.espresso;
    tmp.sugar = sugar + menu.sugar;
    tmp.cream = cream + menu.cream;
    return tmp;
}
Coffee operator+(int n){
    Coffee tmp;
    
    tmp.water = water + n;
    tmp.espresso = espresso + n;
    tmp.sugar = sugar + n;
    tmp.cream = cream + n;
    return tmp;
}

int main(){
    Coffee black(2,5,0,0), dabang(2,2,2,2), c, d;
    c = black + dabang;
    d = c + 1;
    c.show();
    d.show();
}