#include <iostream>
#define _TEXT 10
#define _PATT 5
using namespace std;

int A[_TEXT], B[_PATT], Pre[_PATT+1];

void Preprocess(){
	int i=0, j =-1;
	Pre[i] = j;
	while(i<_PATT){
		while(j >= 0 && B[i]!=B[j]) j = Pre[j];
		i++;j++;
		Pre[i] = j;
	}
}

int Match(){
	int i=0,j=0;
	
	while(i<_TEXT){
		while(j>=0 && A[i]!=B[j]) j = Pre[j];
		
		i++;j++;
		if(j==_PATT) return 1;
	}
	return 0;

}

int main(){
	
	for(int j =0;j<1;j++){
		for(int i=0;i<_TEXT;i++){
			cin>>A[i];
		}
		for(int i=0;i<_PATT;i++){
			cin>>B[i];
		}
		
		Preprocess();
		cout << Match() << endl;
	}

	return 0;
}
