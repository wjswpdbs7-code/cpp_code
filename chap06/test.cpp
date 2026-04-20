#include <iostream>
using namespace std;

//========================================================================= 321p 함수중복 실습문제 1번================================= 

// int add(int arry[], int count){
//     int total;
//     for(int i = 0; i < count; i++){
//     total = total + arry[i];
//     }
//     return total;
// }

// int add(int *arry, int count, int total=0){// int []arry, int *arry 둘다 같음
//     int total_all = 0;

//     for(int i = 0; i < count; i++){
//         total_all = total_all + arry[i];
//     }
//     total_all = total_all + total;
//     return total_all;
// }


// int main(){
//     int a[] = {1,2,3,4,5};
//     int b[] = {6,7,8,9,10};
//     int c = add(a, 5);
//     int d = add(b, 3, c);

//     cout << c << endl;
//     cout << d << endl;
// }

// 15
// 36

//========================================================================= 321p 함수중복 실습문제 2번=================================

// // void printMatrix(){
// //     for(int i = 0; i < 2; i++){
// //     cout << "**" << endl;
// //     }
// // }
// void printMatrix(int line = 2, int count = 2, char ch = '*'){
//     for(int i = 0; i < line; i++){
//         for(int j = 0; j < count; j++){
//             cout << ch;
//         }
//         cout << endl;
//     }
// }
// // void printMatrix(int line, int count){
// //         for(int i = 0; i < line; i++){
// //         for(int j = 0; j < count; j++){
// //             cout << '*';
// //         }
// //         cout << endl;
// //     }
// // }


// int main(){
//     printMatrix();
//     printMatrix(2, 5, 'a');  
//     printMatrix(1, 10);
// }

// //출력값 
// // **
// // **
// // aaaaa
// // aaaaa
// // **********

// ===============================================================================================322p 함수중복 실습문제 3번

// #include<string>

// bool equals(string p1, string p2){
//     return p1 == p2;
// }
// bool equals(string p1, string p2, int count){
//     for(int i = 0; i < count; i++){
//         if (p1[i] == p2[i]){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// }
// bool equals(string p1, string p2, int count, string p3){
//     for(int i = 0; i < count; i++){
//         if (p1[i] == p2[i] && p2[i] == p3[i]){
//             return true;
//         }
//         else{
//             return false;
//             break;
//         }
//     }
// }


// int main(){
//     string x = "prof. Hwag";
//     string y = "prof. Kim";
//     string z = "prof. Lee";

//     if(equals(x, y)){
//         cout << "같음" << endl;
//     }
//     if(equals(x, y, 3)){
//         cout << "앞 3글자 같음" << endl;
//     }
//     if(equals(x, y, 5, z)){
//         cout << "앞 5글자 같음" << endl;
//     }
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// bool equals(const string& p1, const string& p2) {
//     // 전체 문자열 비교: 간단히 == 사용
//     return p1 == p2;
// }

// bool equals(const string& p1, const string& p2, int count) {
//     // 음수나 0에 대한 처리 (0 글자 비교는 같다고 본다)
//     if (count <= 0) return true;

//     // count가 각 문자열 길이를 초과하면 비교할 수 없음 -> false
//     if (p1.size() < static_cast<size_t>(count) || p2.size() < static_cast<size_t>(count))
//         return false;

//     // 처음 count 글자까지 전부 같은지 확인
//     for (int i = 0; i < count; ++i) {
//         if (p1[i] != p2[i]) return false; // 한 글자라도 다르면 false
//     }
//     return true; // 모두 같으면 true
// }

// bool equals(const string& p1, const string& p2, int count, const string& p3) {
//     if (count <= 0) return true;

//     // 세 문자열 모두 count 이상의 길이를 가져야 비교 가능
//     if (p1.size() < static_cast<size_t>(count) ||
//         p2.size() < static_cast<size_t>(count) ||
//         p3.size() < static_cast<size_t>(count))
//         return false;

//     for (int i = 0; i < count; ++i) {
//         if (!(p1[i] == p2[i] && p2[i] == p3[i])) return false;
//     }
//     return true;
// }

// int main() {
//     string x = "prof. Hwag";
//     string y = "prof. Kim";
//     string z = "prof. Lee";

//     if (equals(x, y)) {
//         cout << "같음" << endl;
//     }
//     if (equals(x, y, 3)) {
//         cout << "앞 3글자 같음" << endl;
//     }
//     if (equals(x, y, 5, z)) {
//         cout << "앞 5글자 같음" << endl;
//     }
// }
// //원하는 출력
// //
// //앞 3글자 같음
// //앞 5글자 같음
//================================================================================325p 실습 8번===========================================
#include<string>


//==============================================클래스 선언

class word_utility
{
private:
    /* data */
public:

    static int word_count(string str);
    static string get_word(string str, int count);

    word_utility(/* args */);
    ~word_utility();
    
};

//====================================문자열의 단어 개수를 내보내는 함수

int word_utility::word_count(string str){
    int len = str.length(); // 널문자 없는 문자열 개수 
    int count = 0;//단어 개수 저장할 변수 초기화
    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            count++;
        }
    }
    return count + 1;

    
}

//===================================================count 번째의 단어를 내보내는 함수

string word_utility::get_word(string str, int count){
    string rword("");
    int for_count = 1; 
    int len = str.length();            
    for(int i = 0; i < len; i++){
        if(str[i] == ' '){// 띄어쓰기 나오면
            for_count++;// 단어개수 증가
        }
        if(for_count == count){// 단어가 인자로 들어온 단어 개수값과 같을때
            rword = rword + str[i+1]; //count 번째 단어 복사

            // !!!!!!!!!!!!!!!중요!!!!!!!!!!!!!!!!!!!!!

//rword[j] = str[i+1]이런식으로는 할 수 없음
//string에서는  string rword; 하면 메모리 배열이 생기지 않아서 
        }
    }
    return rword;
}
//===========================================생성자 정의
word_utility::word_utility(/* args */){

}

word_utility::~word_utility(){

}

//=========================================main함수

int main(){
    int n = word_utility::word_count("I love C++");
    cout << "단어 개수는 " << n << endl;

    string word = word_utility::get_word("I love C++ and java", 4);//
    if(word == ""){
        cout << "4번째 단어는 없습니다." << endl;
    }
    else{
        cout << "4번째 단어는 " << word << endl;
    }

}


