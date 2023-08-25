#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b?gcd(b, a%b):a;
}

int lcm(int a, int b){
    return a/gcd(a,b)*b;
}

int main() {
	int n;cin>>n;
	
	for (int i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        
        int res_gcd=gcd(a,b);
        int res_lcm=lcm(a,b);	
	    cout<<res_gcd<<" "<<res_lcm<<"\n";
	}
	return 0;
}

