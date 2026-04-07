#include <iostream>

int main() {
    std::cout << "*" << std::endl;
    std::cout << "**" << std::endl;
    std::cout << "***" << std::endl; // \n과 endl의 차이점은 무엇인가요? 
    std::cout << "****" << std::endl;
    std::cout << "*****" << std::endl;
    return 0;
}

//쉬프트 연산자 <<는 왼쪽 시프트 연산자이자 출력 연산자입니다.
//std::endl은 줄바꿈과 버퍼 플러시를 동시에 수행하는 조작자입니다. \n은 단순히 줄바꿈을 나타내는 이스케이프 시퀀스입니다. std::endl은 출력 버퍼를 비우고 줄바꿈을 추가하는 반면, \n은 줄바꿈만 추가합니다. 따라서 std::endl은 출력이 즉시 화면에 나타나도록 보장하지만, \n은 버퍼링이 활성화된 경우 출력이 지연될 수 있습니다. 일반적으로 std::endl은 출력이 즉시 필요할 때 사용되고, \n은 단순히 줄바꿈이 필요한 경우에 사용됩니다.

