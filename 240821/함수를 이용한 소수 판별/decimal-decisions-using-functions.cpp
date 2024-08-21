#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n == 1) return false;
    for(int i{2}; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum{0};
    cin >> a >> b;
    for(int i{a}; i <= b; i++){
        if(isPrime(i)) sum += i;
    }
    cout << sum << endl;
    return 0;
}