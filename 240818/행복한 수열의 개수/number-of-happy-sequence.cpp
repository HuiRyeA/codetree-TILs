#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> field;
    int n, m, cnt{0};
    cin >> n >> m;

    field.resize(n);
    for(int i{0}; i < n; i++){
        field[i].resize(n);
    }

    for(int i{0}; i < n; i++){
        for(int j{0}; j < n; j++){
            cin >> field[i][j];
        }
    }
    int pre, chk;
    for(int i{0}; i < n; i++){
        chk = 1;
        pre = 0;
        for(int j{0}; j < n; j++){
            if(pre != field[i][j]){
                pre = field[i][j];
                chk = 1;
            } else chk++;
            if(chk >= m){
                cnt++; break;
            }
        }
        chk = 1;
        pre = 0;
        for(int j{0}; j < n; j++){
            if(pre != field[j][i]){
                pre = field[j][i];
                chk = 1;
            } else chk++;
            if(chk >= m){
                cnt++; break;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}