#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n;
	float tong=0;
	cin>>n;
	
	while(n < 1);
    for(int i = 1; i <= n; i++){
    tong = tong + ((float)i-1)/i;
  	}
  	cout<<tong;
	return 0;
}
