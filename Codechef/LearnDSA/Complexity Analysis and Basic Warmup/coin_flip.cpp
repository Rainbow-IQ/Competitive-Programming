Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@Rainbow-IQ 
NitinBirdi
/
codechef
Public
1
23
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
codechef/Coin Flip.cpp
@NitinBirdi
NitinBirdi my solutions to problems part2
Latest commit ebb64af on Mar 29, 2013
 History
 1 contributor
30 lines (24 sloc)  339 Bytes
  
//http://www.codechef.com/problems/CONFLIP

#include<iostream>
 
using namespace std;
 
int main(){
	
	int t,g,i,n,q;
	cin>>t;
	
	while(t--){
		cin>>g;
		while(g--){
			cin>>i>>n>>q;
			
			if(n%2==0){
				cout<<n/2<<endl;
			}else{
				if(i==q){
					cout<<n/2;
				}else{
					cout<<(n/2)+1;
				}
			cout<<endl;
			}
		}
	}
	return 0;
}
