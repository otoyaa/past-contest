/*Many well-known cryptographic operations require modular exponentiation. That is, given integers x,
y and n, compute xy mod n. In this question, you are tasked to program an efficient way to execute
this calculation.

Input
The input consists of a line containing the number c of datasets, followed by c datasets, followed by a
line containing the number ‘0’.
Each dataset consists of a single line containing three positive integers, x, y, and n, separated by
blanks. You can assume that 1 < x, n < 215 = 32768, and 0 < y < 231 = 2147483648.

Output
The output consists of one line for each dataset. The i-th line contains a single positive integer z such
that
z = xy mod n
for the numbers x, y, z given in the i-th input dataset.*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod(ll a,ll b, ll mod_n){
    ll res = 1;
    a%=mod_n;
    while (b>0){
        if (b%2==1)
            res=(res*=a)%mod_n;
        a=(a*a)%mod_n;
        b/=2;
    }
    return res%mod_n;
}

int main(){
    int data_sets;
    cin>>data_sets;
    
    for (int i=0;i<data_sets;i++){
        int a,b,c; // a=base. b=expoente. c=mod
        cin>>a>>b>>c;
        ll res = mod(a,b,c);
        cout<<res<<endl;
    } 
    return 0;
}
