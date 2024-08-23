#include <iostream>
using namespace std;

int cal(int a, char o, int c){
    if(o == '+'){
        return a + c;
    } else if(o == '-'){
        return a - c;
    } else if(o == '/'){
        return a / c;
    } else if(o == '*'){
        return a * c;
    }
    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;

    cin >> a >> o >> c;
    cout << a << ' ' << o << ' ' <<  c << " = " << cal(a, o ,c);
    return 0;
}