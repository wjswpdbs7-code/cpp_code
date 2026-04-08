//for문을  c++에서 사용하는 방법을 보여주는 예시입니다.
#include<iostream>
using namespace std;

int main() {
    int i;
    for(i = 0; i < 5; i++) {
        cout << i << endl;
    }
    cout << endl; // 줄바꿈
    return 0; // 프로그램 종료
}
//c언어로 변경하는 경우
// #include<stdio.h>

// int main() {
//     int i;
//     for(i = 0; i < 5; i++) {
//         printf("%d ", i);
//     }
//     printf("\n"); // 줄바꿈
//     return 0; // 프로그램 종료
// }