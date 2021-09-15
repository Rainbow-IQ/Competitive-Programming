#include <bits/stdc++.h>
#define debug(x) cerr << #x << " = " << x << endl;
const int mod = 1000000007;
using namespace std;
const char nll = '\n';
#define ll long long
/*
TODO: Think clearly about the problem.
* The Problem sometimes is easier than what you think
! Always see the constraints
* Donot give up! You can do this!
*/
void solve(){
    int a;
    cin>>a;
    if(a%5==0){
        if(a%11==0){
            cout<<"BOTH";
        }
        else{
            cout<<"ONE";
        }
    }
    else{
        if(a%11==0){
            cout<<"ONE";
        }
        else{
            cout<<"NONE";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t = 1;
    //cin>>t; //!may or maynot required
    while(t--){
        solve();
    }
    return 0;
}
