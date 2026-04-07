app.out : main.o kitae.o mike.o
	g++ main.o kitae.o mike.o -o app.out

main.o : main.cpp
	g++ -c main.cpp -o main.o

kitae.o : kitae.cpp
	g++ -c kitae.cpp -o kitae.o

mike.o : mike.cpp
	g++ -c mike.cpp -o mike.o


clean :
	rm -f *.o app.out 

# 이 Makefile 은 main.cpp, kitae.cpp, mike.cpp 파일을 컴파일하여 각각 main.o, kitae.o, mike.o 오브젝트 파일을 생성한 후, 이들을 링크하여 app.out 실행 파일을 만드는 과정을 정의합니다. `clean` 타겟은 생성된 오브젝트 파일과 실행 파일을 삭제하는 역할을 합니다. `make` 명령어를 사용하여 app.out 을 빌드할 수 있으며, `make clean` 명령어로 빌드된 파일들을 정리할 수 있습니다.
# jjy2026@DESKTOP-6J12MHE:~/cpp_code/chap02/namespace$ make
# g++ main.o kitae.o mike.o -o app.out
# /usr/bin/ld: mike.o: in function `f()':
# mike.cpp:(.text+0x0): multiple definition of `f()'; kitae.o:kitae.cpp:(.text+0x0): first defined here
# collect2: error: ld returned 1 exit status
# make: *** [Makefile:2: app.out] Error 1
# 위의 에러는 `f()` 함수가 `mike.cpp`와 `kitae.cpp` 두 파일에서 모두 정의되어 있기 때문에 발생합니다. C++에서는 동일한 이름의 함수가 여러 파일에서 정의되면 링크 에러가 발생합니다. 이를 해결하기 위해서는 `f()` 함수를 하나의 파일에서만 정의하거나, 네임스페이스를 사용하여 함수 이름을 구분해야 합니다.

	