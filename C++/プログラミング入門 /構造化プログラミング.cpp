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
    for(int i=1;i<=n;i++){
        int m=i;
        if(m%3==0){
            cout<<m<<" ";             
        }else{
            while(m>0){
                if(m%10==3){
                    cout<<m<<" ";
                    break;
                }
                m/=10;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
