# c++ 교육과정 

#### C++는 객체 지향 프로그래밍 언어로, 다양한 분야에서 널리 사용되고 있습니다. C++ 교육과정은 초보자부터 고급 개발자까지 다양한 수준의 학습자를 대상으로 구성되어 있습니다.

## c와 c++의 차이점

- C와 C++는 모두 프로그래밍 언어이지만, C++는 C의 확장판으로 객체 지향 프로그래밍을 지원합니다. C는 절차적 프로그래밍 언어로, 함수와 구조체를 중심으로 코드를 작성하는 반면, C++는 클래스와 객체를 사용하여 코드를 작성할 수 있습니다. 또한, C++는 템플릿, 예외 처리, 네임스페이스 등 다양한 기능을 추가하여 더 강력한 프로그래밍이 가능합니다.


## c와의 자료형 작성법 차이점

- C에서는 자료형을 선언할 때, 변수 이름과 함께 자료형을 명시해야 합니다. 예를 들어, int a;와 같이 선언합니다. 반면에 C++에서는 auto 키워드를 사용하여 컴파일러가 변수의 자료형을 자동으로 추론하도록 할 수 있습니다. 예를 들어, auto a = 10;과 같이 선언할 수 있습니다. 또한, C++에서는 참조 변수와 포인터 변수를 사용할 수 있어 더 유연한 자료형 작성이 가능합니다.

- auto 만 사용하면 컴파일러가 변수의 자료형을 자동으로 추론하기 때문에, 코드가 더 간결해지고 가독성이 향상됩니다. 그러나 auto를 사용할 때는 변수의 초기값이 명확해야 하며, 복잡한 표현식이나 함수 반환값을 사용할 때는 주의가 필요합니다. 또한, auto는 모든 상황에서 사용할 수 있는 것은 아니며, 일부 경우에는 명시적으로 자료형을 지정하는 것이 더 적절할 수 있습니다.

#### 여러 자료형을 각각 기존 자료형과 AUTO로 사용할때와의 예시 차이

- 기존 자료형 예시

#include <iostream>

int main() {
    int a = 10;
    double b = 3.14;
    std::string c = "Hello, World!";
    
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    return 0;
}
- AUTO 사용 예시

#include <iostream>
#include <string>

int main() {
    auto a = 10; // int로 추론
    auto b = 3.14; // double로 추론
    auto c = std::string("Hello, World!"); // std::string으로 추론
    
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    return 0;
}

auto a; // 오류: 초기값이 없어서 자료형을 추론할 수 없음

auto 형에서 문자열을 사용할 때는 std::string과 같은 문자열 클래스를 사용해야 합니다. 
기존c에서는 char 배열을 사용하여 문자열을 표현했지만, C++에서는 std::string 클래스를 사용하여 문자열을 보다 쉽게 다룰 수 있습니다. auto를 사용할 때는 초기값이 명확해야 하므로, 문자열을 사용할 때는 std::string 객체를 생성하여 초기화하는 것이 좋습니다.

기존c 언어 예시

#include <stdio.h>

int main() {
    char str[20] = "Hello, World!";
    printf("%s\n", str);
    return 0;
}

auto 사용 예시

#include <iostream>
#include <string>
using namespace std;

int main() {
    auto str = string("Hello, World!"); // std::string 객체로 초기화
    cout << str << endl;
    return 0;
}

기존 c에서 cout의 대신 printf를 사용하여 문자열을 출력했으니 C++ cout을 쓸때 는 std::을 붙일 필요가 없는거 