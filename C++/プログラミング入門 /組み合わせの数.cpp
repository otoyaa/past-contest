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
    int ans=0;
    while(1){
        int n,x;cin>>n>>x;
        if(n==0&&x==0){
            break;
        }
        int i,j,k; // necessario para somar as combinações fora do loop
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                }
                if(i+j+k==x){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
