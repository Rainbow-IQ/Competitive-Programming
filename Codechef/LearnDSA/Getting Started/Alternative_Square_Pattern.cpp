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
    int n;
    cin>>n;
    int diff = 1;
    int start = 1;
    for(int i = 0;i<n;i++){
        if(i%2==0){
            for(int j = start;j<start+5;j++){
                cout<<j<<" ";
                
            }
            start+=5;
            cout<<nll;
        }
        else{
            for(int j = start+4;j>=start;j--){
                cout<<j<<" ";
            }
            start+=5;
            cout<<nll;
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
