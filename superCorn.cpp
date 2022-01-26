#include <iostream>
#include <algorithm>
using namespace std;
int result = 0;
int arr[50001];
int n, c;

void calc(int tmp, int i){
    if(result < tmp) result = tmp;
    while (i < n && tmp + arr[i] <= c)
    {
        calc(tmp + arr[i], i + 1);
        i++;
    }
}
int main(){
    cin >> n >> c;
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    calc(0, 0);
    cout << result;
    return 0;
}
