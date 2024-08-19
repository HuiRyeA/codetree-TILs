#include <iostream>
using namespace std;

void nxn(int n){
    int c = 1;
    for(int i{1}; i <= n * n; i++){
        cout << c << ' ';
        if(i % n == 0) cout << endl;
        if(c == 9) c = 1;
        else c++;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    nxn(n);
    return 0;
}