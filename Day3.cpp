#include <bits/stdc++.h>
using namespace std;
int countDigits(int n){
	if (n == 0) return 1; // Special case for 0
    return floor(log10(abs(n))) + 1;	
}

int main(){
    int n;
    cin>>n;
cout<<countDigits(n);
}