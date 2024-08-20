#include <iostream>
using namespace std;

int lcq(int n, int m){
    if(m > n){
        int temp{m};
        m = n;
        n = temp;
    }

    n %= m;
    
    if(n == 0) return m;
    else return lcq(n, m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;


    cout << n * m / lcq(n, m) << endl;
    return 0;
}