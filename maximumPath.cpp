#include <iostream>
using namespace std;

int main(){
    int m,n;
    int a[110][110];
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0;  j < n; j++){
            cin >> a[i][j];
        }
    }
    int biggest = -101;
    int mark = 0, nark = 1;
    int sum = -101;
    for(int i = 0; i < m; i++){
        if (a[i][0] > sum) {
            sum = a[i][0];
            mark =i;
        }
    }
    while(nark != n){
        if (mark == 0){
            tong += max(a[mark - 1][nark], a[mark][nark]);
            if (a[mark - 1][nark] > a[mark][nark])
        }
        else if (mark == m-1){
            tong +=
        }
    }
    return 0;
}
