#include <iostream>
using namespace std;

int min3(int a, int b, int c){
    return min(a, min(b, c));
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b ,c;
    cin >> a >> b >> c;
    cout << min3(a, b, c) << endl;
    return 0;
}