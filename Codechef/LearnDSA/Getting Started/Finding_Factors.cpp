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
    int count = 0;
    vector<int> arr;
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            count++;
            arr.push_back(i);
        }
    }
    cout<<arr.size()<<nll;
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
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
