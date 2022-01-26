#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, C;
    cin >> N >> C;
    long a[21];
    long tong;
    for(int i = 0; i < N; i++){
        cin >> a[i];
        tong += a[i];
    }
    sort(a, a + N);
    int i = 0;
    while(tong > C && i < N){
        tong -= a[i];
        i++;
    }
    cout <<  tong;
    return 0;
}
