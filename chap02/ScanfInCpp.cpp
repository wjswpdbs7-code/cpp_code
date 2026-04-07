#include<iostream>
using namespace std;

int main() {
    cout << "너비를 입력하세요>>";

    double width;
    cin >> width;

    cout << "높이를 입력하세요>>";

    float height;
    cin >> height;

    double area = width * height;
    cout << "면적은 " << area << endl;
}

//cpp에서 for문 사용법
//for(초기화; 조건; 증감) {
//    // 반복할 코드
//}
//예시:
//for(int i = 0; i < 5; i++) {