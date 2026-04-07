#include<iostream>

namespace kitae
{
    void f() {
        std::cout << "kitae f\n";
    }

    void m() {
        std::cout << "kitae m\n";
    }
} // namespace kitae

//namespace를 사용하는 이유
// 1. 이름 충돌 방지
// 2. 코드의 가독성 향상
// 3. 모듈화된 코드 구조 제공