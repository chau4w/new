#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[100];
    int j = 1;
    for (int i = 0; i < n; i++){
        a[i] = j;
        j++;
    }
    if (k == 0){
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }
    else if (n % 2 == 1) cout << -1;
    else if (n % k != 0) cout << -1;
    else if ((n/k) % 2 == 1) cout << -1;
    else {
        int Uoc = n/(2*k);
        int m=0;
        while (Uoc!=0){
            for(int i = m; i < m+k; i++){
                swap (a[i], a[i+k]);
                cout << a[i] << " " << a[i+k] << " " << i <<" " <<endl;
            }
            m += 2*k;
            cout << m << endl;
            Uoc--;
        }
        for(int i = 0; i < n ; i++){
            cout << a[i] << " ";
        }
    }
    return 0;
}
