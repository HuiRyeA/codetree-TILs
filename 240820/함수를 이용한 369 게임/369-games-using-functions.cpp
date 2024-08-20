#include <iostream>
using namespace std;

bool is3(int n){
    if (n % 3 == 0) return true;
    else return false;
}

bool is369(int n){
    while(n != 0){
        int chk{n % 10};
        if(chk == 3 || chk == 6 || chk == 9) return true;
        else n /= 10;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt{0};
    cin >> a >> b;

    for(int i{a}; i <= b; i++){
        if(is369(i) || is3(i)) {cnt++;}
    }
    cout << cnt << endl;
    return 0;
}