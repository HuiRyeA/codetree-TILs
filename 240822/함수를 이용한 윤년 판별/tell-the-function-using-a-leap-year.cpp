#include <iostream>
using namespace std;

string chk(int y){
    if(y % 100 == 0 && y % 400 != 0) return "false";
    else if(y % 4 == 0) return "true";
    else return "false";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;
    cout << chk(y);
    return 0;
}