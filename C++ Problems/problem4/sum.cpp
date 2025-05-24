#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum(int a,int b){
    if(a>b)
        return 0;
    return a+sum(a+1,b);
}
int main (){
    int m,n;
    cin>>m>>n;
    cout<<sum(m,n);
}
