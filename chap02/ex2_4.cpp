#include<iostream>  
using namespace std;

int main() {
    char name[20] = {'g', 'r', 'e', 'g', 'o', '\0'}; // 문자열은 null 가 없어도 출력이 가능하지만, null이 있어야 문자열의 끝을 알 수 있다. 널없을시 출력이 이상하게 될 수 있다.
    cout << name << endl;
    return 0;
}