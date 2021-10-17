#include <iostream>
#include <math.h>
 
using namespace std;
  
int kTr(int a) {
    if (a < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt((float)a); i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
	int i,n;
	cin>>n;
    for (i = 0; i <n; i++) {
        if (kTr(i)==1) {
            cout << i<<" ";
        }
    }
}
