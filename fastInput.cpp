#include <iostream>
#include <cstdio>
using namespace std;

#ifndef ONLINE_JUDGE
    #define gc getchar
#else
	#define gc getchar_unlocked
#endif


int read_int() {
	char c = gc();
	while(c<'0' || c>'9') c = gc();
	int ret = 0;
	while(c>='0' && c<='9'){
		ret = 10 * ret + c - 48;
		c = gc();
	}
  return ret;
}


int main(){
	int a;
	while((a = read_int())!=0)
		cout<<a<<endl;
	
	
	
	return 0;
}
