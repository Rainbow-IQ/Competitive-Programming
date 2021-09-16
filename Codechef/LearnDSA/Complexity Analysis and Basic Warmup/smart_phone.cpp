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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll lol[n];
    for(ll i = 0;i<n;i++){
        lol[i] = arr[i]*(n-i);
    }
    sort(lol,lol+n);
    cout<<lol[n-1];
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
