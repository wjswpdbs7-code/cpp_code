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

//기존 c언어에서는
/*
#include <stdio.h>

int main() {
    printf("너비를 입력하세요>>");

    double width;
    scanf("%lf", &width);

    printf("높이를 입력하세요>>");

    float height;
    scanf("%f", &height);

    double area = width * height;
    printf("면적은 %lf\n", area);

    return 0;
}
*/

//cin 은 입력 스트림 객체로, 사용자로부터 데이터를 입력받는 데 사용됩니다.
//cin은 입력된 데이터를 변수에 저장하기 위해 사용됩니다. 예를 들어, cin >> width;는 사용자로부터 입력된 값을 width 변수에 저장합니다. cin은 입력된 데이터를 해당 변수의 타입에 맞게 변환하여 저장합니다. 예를 들어, 사용자가 3.5를 입력하면, cin은 이를 double 타입으로 변환하여 width 변수에 저장합니다. cin은 입력된 데이터를 공백이나 줄 바꿈으로 구분하여 처리합니다. 예를 들어, 사용자가 "3.5 4.2"를 입력하면, cin은 3.5를 width 변수에 저장하고, 4.2를 height 변수에 저장합니다. cin은 입력된 데이터를 처리할 때, 입력 버퍼에서 데이터를 읽어옵니다. 입력 버퍼는 사용자가 입력한 데이터를 일시적으로 저장하는 공간입니다.