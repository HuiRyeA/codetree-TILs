#include <iostream>
using namespace std;

int ncm(int n, int m){
    if(m > n){
        int temp = m;
        m = n;
        n = temp;
    }

    n %= m;
    if(n == 0) return m;
    else return ncm(n, m);
} 

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    cout << ncm(n, m);
    return 0;
}