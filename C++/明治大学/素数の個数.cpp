#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first
#define s second
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

void solve(){
    int n;read(n);
    int ans=0;
    for(int i=0;i<=n;i++){
        bool p=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                p=false;
            }
        }
        if(p){
            ans++;
        }
    }
    cout<<ans-2<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
