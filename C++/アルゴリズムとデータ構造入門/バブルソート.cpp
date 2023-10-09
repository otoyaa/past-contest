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
    vi v(n);
    for(int i=0;i<n;i++){
        read(v[i]);
    }
    int ans=0;
    bool flag=1;
    while(flag){
        flag=0;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]<v[i-1]){
                ans++;
                swap(v[i],v[i-1]);
                flag=1;
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<(i==v.size()-1?"\n":" ");
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
