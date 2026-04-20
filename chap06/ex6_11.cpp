#include<iostream>
using namespace std;

class Circle
{
private:
    static int num_of_circle;
    int radius;
public:

    double get_area(void);

    static int getnum_fo_cirlcle();

    Circle(int r=1);
    ~Circle();
};

int Circle::num_of_circle = 0;

double Circle::get_area(void){
    
    return 3.14 * (this->radius) * (this->radius);
}

int Circle::getnum_fo_cirlcle(){
    return num_of_circle;
}

Circle::Circle(int r){
    this->radius = r;
    num_of_circle ++;

}

Circle::~Circle(){
    num_of_circle--;
}
int main(void){
    Circle *p = new Circle[10];
    cout << "생존하고 있는 원의 개수 = " << Circle::getnum_fo_cirlcle() << endl;

    delete [] p;
    cout << "생존하고 있는 원의 개수 = " << Circle::getnum_fo_cirlcle() << endl;

    Circle a;
    cout << "생존하고 있는 원의 개수 = " << Circle::getnum_fo_cirlcle() << endl;
    
    Circle b;
    cout << "생존하고 있는 원의 개수 = " << Circle::getnum_fo_cirlcle() << endl;


    return 0;
}