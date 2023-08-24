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
