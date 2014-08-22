#include <iostream>
#include <string>

using namespace std;

bool all_9(string input){
	int length = input.length()-1;
	while(length>=0){
		if(input[length--] != '9') return false;
	}
	return true;
}

//stoi(inp,NULL,0)
//to_string
//try left right method
string palindrom_string(string input){
	string palin_str;
	int length = input.length();
	
	if(all_9(input)){
		palin_str.append("1");
		int k=length-1;
		while(k--) palin_str.append("0");
		palin_str.append("1");
		return palin_str;
	}
	
	palin_str = input;
	
	
	int i=0, j=length-1;
	bool odd_len = (length%2==0)? false: true;
	
	
	string left=input.substr(0,(length+1)/2);
	string right=input.substr((length+1)/2,length - (length+1)/2);
	cout<<left<<" "<<right<<endl;
	
	if(left=="") cout<<"left is null\n";
	if(right=="") cout<<"right is null\n";
	
	//string left_rev = (odd_len)?
	
	
	
	
	
	
	
	
	
	
	
	
	return "";
	
	
	
	return palin_str;
}

int main(){
	
	int testcases;
	string inp;
	cin>>testcases;
	
	while(testcases--){
		cin>>inp;
		//cout<< to_string(52341111111111)<<endl;
		//cout<<palindrom_string(inp)<<endl;
		palindrom_string(inp);
	}
	return 0;
}
