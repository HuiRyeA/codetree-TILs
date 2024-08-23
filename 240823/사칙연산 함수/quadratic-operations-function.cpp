#include <iostream>
using namespace std;

void cal(int a, char o, int c){
    if(o == '+'){
        cout << a << ' ' << o << ' ' <<  c << " = " << a + c;
        return;
    } else if(o == '-'){
        cout << a << ' ' << o << ' ' <<  c << " = " << a - c;
        return;
    } else if(o == '/'){
        cout << a << ' ' << o << ' ' <<  c << " = " << a / c;
        return;
    } else if(o == '*'){
        cout << a << ' ' << o << ' ' <<  c << " = " << a * c;
        return;
    }
    cout << "False";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;

    cin >> a >> o >> c;
    cal(a, o, c);
    return 0;
}