#include <iostream>
#include <string>

using namespace std;

char op;
int inp1,inp2;

void add(){
	string result = to_string(inp1 + inp2);
	string l = to_string(inp1), r = to_string(inp2);
	int len = (l.length() > r.length()) ? l.length() : r.length();
	string sp = (result.length() > len) ? "" : " ";
	string ls="",rs="";
	if(l.length() > r.length()){
		int index = l.length() - r.length();
		while(index--){
			rs.append(" ");
		}
	}
	else{
		int index = r.length() - l.length();
		while(index--){
			ls.append(" ");
		}
	}
	cout << " " << ls << l << endl;
	cout << "+" << rs << r << endl;
	for(int i=0;i<=len;i++) cout << "-";
	cout << endl << sp << result<<endl;
}

void sub(){
	string result = to_string(inp1 - inp2);
	string l = to_string(inp1), r = to_string(inp2);
	int len = (l.length() > r.length()) ? l.length() : r.length();
	string sp = (result.length() > len) ? "" : " ";
	string ls="",rs="";
	if(l.length() > r.length()){
		int index = l.length() - r.length();
		while(index--){
			rs.append(" ");
		}
	}
	else{
		int index = r.length() - l.length();
		while(index--){
			ls.append(" ");
		}
	}
	cout << " " << ls << l << endl;
	cout << "-" << rs << r << endl;
	for(int i=0;i<=len;i++) cout << "-";
	cout << endl << sp << result<<endl;
}

void mul(){
	string result = to_string(inp1 * inp2);
	string l = to_string(inp1), r = to_string(inp2);
	int len = (l.length() > r.length()) ? l.length() : r.length();
	
	int init_gap = result.length() - len;
	
	string igap="",rgap="";
	while(init_gap-- > 0) igap.append(" ");
	
	init_gap = len -result.length();
	
	while(init_gap-- > 0) rgap.append(" ");
	
	string sp = (result.length() > len) ? "" : " ";
	string ls="",rs="";
	
	if(l.length() > r.length()){
		int index = l.length() - r.length();
		while(index-- > 0){
			rs.append(" ");
		}
	}
	else{
		int index = r.length() - l.length();
		while(index-- > 0){
			ls.append(" ");
		}
	}
	
	cout << igap << ls << l << endl;
	cout << igap << rs << "*" << r << endl;
	cout << igap;
	for(int i=0;i<=len;i++) cout << "-";
	cout << endl << rgap << result<<endl;
	
}

int main(){
	
	cin>>inp1;
	cin>>op;
	cin>>inp2;
	
	if(op=='+') add();
	if(op=='-') sub();
	if(op=='*') mul();
	
	return 0;
}
