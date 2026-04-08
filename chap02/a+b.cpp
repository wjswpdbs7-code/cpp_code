#include<iostream>
using namespace std;

int main() {
    int a = 10; // 정수형 변수 a를 선언하고 10으로 초기화
    char b = 'A'; // 문자형 변수 b를 선언하고 'A'로 초기화

    cout << "a + b = " << a + b << endl; // sum의 값을 출력

    return 0; // 프로그램 종료
}

//a + b의 결과는 75입니다. 이는 a가 10이고 b가 'A'이기 때문입니다.
//문자 'A'는 ASCII 코드에서 65에 해당하므로, a + b는 10 + 65 = 75가 됩니다.
//endl 은 줄바꿈을 의미하는 조작자입니다. cout << "a + b = " << a + b << endl;에서 endl은 출력 후에 줄바꿈을 수행하여 다음 출력이 새로운 줄에서 시작되도록 합니다.