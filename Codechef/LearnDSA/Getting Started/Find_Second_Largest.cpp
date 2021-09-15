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
    int arr[3];
    int a,b,c;
    cin>>a>>b>>c;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr,arr+3);
    cout<<arr[1];
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
