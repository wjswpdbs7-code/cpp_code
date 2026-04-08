#include<iostream>
using namespace std;

int main() {
    cout << "너비를 입력하세요>>";
    
    char myChar = 0;// char myChar = '\0';과 같은 의미
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

