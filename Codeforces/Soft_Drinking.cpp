#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l;
    //lemon piece lp
    int lp=c*d;
    int sg=p/np;//salt per glass
    int m=(k*l)/nl;
    
   int f=min({m,lp,sg});
    cout<<f/n<<endl;
    return 0;
}