#include <iostream>

using namespace std;

int isTerm(){
	
}

struct Node{
	char a;
	Node* left;
	Node* right;
};

void print(){
	char c;
	
	cin >> c;
	
	if(c == '('){
		print();
		cin >> c;
		print();
		cout<<c;
		cin>>c;
	}
	else cout<<c;
	

}

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		print();
		cout<<endl;
	}
	return 0;
}
