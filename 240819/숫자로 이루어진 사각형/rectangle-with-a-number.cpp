#include <iostream>
using namespace std;

void nxn(int n){
    for(int i{1}; i <= n * n; i++){
        cout << i << ' ';
        if(i % n == 0) cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    nxn(n);
    return 0;
}