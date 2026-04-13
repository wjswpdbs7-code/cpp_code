//로미오 줄리엣 순서로 각각 가위 바위 보중 하나를 입력받고 결과를 알려주기

#include<iostream>
#include<string>

using namespace std;

string rock_paper_scissors(const string str1, const string str2);

int main(){
    string s;
    string t;

    //게임시작알려주기
    cout << "가위 바위 보 게임을 합니다. 가위 바위 보중에만 입력하세요.\n\n";

    //로미오에게 입력받기
    cout << "로미오>>\n";
    cin >> s;

    //줄리엣에게 입력받기
    cout << "줄리엣>>\n";
    cin >> t;
    //결과 계산, 출력
    cout << rock_paper_scissors(s, t) << '\n' << endl;
}

string rock_paper_scissors(const string str1, const string str2){


    for(string s : {"가위", "바위", "보"}){
        if(str1 == s && str2 == s)//&&는 으로 읽고 논리곱 연산자로, 두 조건이 모두 참일 때 전체 조건이 참이 됩니다. 여기서는 str1과 str2가 모두 같은 값을 가지고 있는지를 확인하는 역할을 합니다. 예를 들어, str1이 "가위"이고 str2도 "가위"인 경우, str1 == s && str2 == s 조건이 참이 되어 "비겼습니다."라는 결과가 반환됩니다. 따라서 이 부분은 두 플레이어가 같은 선택을 했을 때 비긴 상황을 처리하는 역할을 합니다.
            return "비겼습니다.";
    }
    if(str1 == "가위" && str2 == "보" || str1 == "바위" && str2 == "가위" || str1 == "보" && str2 == "바위")// ||는 논리합 연산자로, 여러 조건 중 하나라도 참이면 전체 조건이 참이 됩니다. 여기서는 str1과 str2의 조합이 로미오가 이기는 경우를 확인하는 역할을 합니다. 예를 들어, str1이 "가위"이고 str2가 "보"인 경우, str1 == "가위" && str2 == "보" 조건이 참이 되어 "로미오가 이겼습니다."라는 결과가 반환됩니다. 따라서 이 부분은 로미오가 이기는 상황을 처리하는 역할을 합니다.
        return "로미오가 이겼습니다.";
    else
        return "줄리엣이 이겼습니다.";

    return 0;
}    
//최대한 축소

// #include<iostream>
// #include<string>

// using namespace std;

// string rock_paper_scissors(const string str1, const string str2);

// int main(){
//     string s;
//     string t;

//     cout << "가위 바위 보 게임을 합니다. 가위 바위 보중에만 입력하세요.\n\n";

//     cout << "로미오>>\n";
//     cin >> s;

//     cout << "줄리엣>>\n";
//     cin >> t;

//     cout << rock_paper_scissors(s, t) << '\n' << endl;
// }   

// string rock_paper_scissors(const string str1, const string str2){
//     for(string s : {"가위", "바위", "보"}){
//         if(str1 == s && str2 == s)
//             return "비겼습니다.";
//     }
//     if(str1 == "가위" && str2 == "보" || str1 == "바위" && str2 == "가위" || str1 == "보" && str2 == "바위")
//         return "로미오가 이겼습니다.";
//     else
//         return "줄리엣이 이겼습니다.";
// }