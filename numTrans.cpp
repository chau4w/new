#include <iostream>
#include<algorithm>

using namespace std;
 bool check (string a, string b){
    return (a+b)>(b+a);
 }
int main()
{
    string a[100];
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,check);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
