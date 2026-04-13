#include<iostream>
#include<string>

using namespace std;

class Account{
    public:
        int total;
        string name;

        Account(string n);

        void deposit(int m);// 입
        int inquiry();//출금 
        string getOwner(); // 주인이름
        int withdraw(int m);
};


Account::Account(string n)//생성자
{
    name = n;
}

void Account::deposit(int m){// 입금
    total = m;
}
int Account::inquiry(){//출금
    return total;
}
int Account::withdraw(int m){
    total = total - m;
    return total;
}
string Account::getOwner(){// 주인이름
    return name;
}

int main(){
    Account a("황수희");
    a.deposit(20000);
    cout << a.getOwner() << "잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(15000);//money는 잔액
    cout << money << "원 출금, ";
    cout << a.getOwner() << "잔액은 " << a.inquiry() << endl;
    money = a.withdraw(8000);
    cout << money << "원 출금, ";
    cout << a.getOwner() << "잔액은 " << a.inquiry() << endl;
}


// class에서 