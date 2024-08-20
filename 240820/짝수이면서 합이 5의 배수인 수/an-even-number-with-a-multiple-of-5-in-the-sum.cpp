#include <iostream>
using namespace std;

void isYes(int n){
    if(n % 2 == 0 && (n / 10 + n % 10) % 5 == 0){
        cout << "Yes" << endl;
    } else cout << "No" << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    isYes(n);
    return 0;
}