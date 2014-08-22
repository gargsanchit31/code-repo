#include <iostream>
#include <cmath>
using namespace std;

int isprime(int a){
	int sq = sqrt(a);
	if(a<=1) return 0;
	for(int i=2;i <= sq;i++){
		if(a%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>m;
		cin>>n;
		for(int i=m;i<=n;i++){
			if(isprime(i)){
				cout<<i<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
