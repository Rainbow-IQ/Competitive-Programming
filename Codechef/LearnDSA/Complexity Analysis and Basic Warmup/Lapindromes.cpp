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
    string s;
    cin>>s;
    vector<char> f_half;
    vector<char> s_half;
    if(s.length()%2==0){
        for(int i = 0;i<s.length()/2;i++){
            f_half.push_back(s[i]);
        }
        for(int i = s.length()/2;i<s.length();i++){
            s_half.push_back(s[i]);
        }
        sort(f_half.begin(),f_half.end());
        sort(s_half.begin(),s_half.end());
        for(int i = 0;i<max(f_half.size(),s_half.size());i++){
            if(f_half[i]!=s_half[i]){
                cout<<"NO"<<nll;
                return;
            }
        }
        cout<<"YES"<<nll;
    }
    else{
        for(int i = 0;i<s.length()/2;i++){
            f_half.push_back(s[i]);
        }
        for(int i = (s.length()/2)+1;i<s.length();i++){
            s_half.push_back(s[i]);
        }
        sort(f_half.begin(),f_half.end());
        sort(s_half.begin(),s_half.end());
        for(int i = 0;i<max(f_half.size(),s_half.size());i++){
            if(f_half[i]!=s_half[i]){
                cout<<"NO"<<nll;
                return;
            }
        }
        cout<<"YES"<<nll;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t = 1;
    cin>>t; //!may or maynot required
    while(t--){
        solve();
    }
    return 0;
}
