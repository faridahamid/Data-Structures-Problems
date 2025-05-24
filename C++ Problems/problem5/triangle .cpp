/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void triangle(int a){
    if(a==1)
        cout<< a;
    else{
        triangle(a-1);
        cout << " " << a;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        triangle(i);
        cout<<endl;
    }
}
 */
#include <bits/stdc++.h>
using namespace std;
void triangle(int start,int end,int line){
    if(start-1==end && end==line)
        return;
    if(start-1==end) {
        cout<<endl;
        triangle(1, end + 1, line);
        return;
    }
    cout<<start<<" ";
    triangle(start+1,end,line);

}
int main() {
    int n;
    cin >> n;
    triangle(1, 1,n);
}