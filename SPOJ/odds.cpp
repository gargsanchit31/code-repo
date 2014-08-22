#include <iostream>

using namespace std;

int odds(int length){
	int odd =0;
	for(int i =0;i<length; i++){
		int number;
		cout<<"Please enter the " << i+1 << "th number: ";
		cin>>number;
		cout<<endl;
		if(number % 2 ==1){
			odd++;
		}
	}
	return odd;
}

int main(){
	int l;
	cout << "Enter the length\n";
	cin>>l;
	cout << odds(l) << endl;
	return 0;
}
