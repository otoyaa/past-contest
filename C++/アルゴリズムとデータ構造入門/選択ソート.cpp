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
    for(int i=0;i<n;i++)read(v[i]);
    int ans=0;
    for(int i=0;i<n;i++){
        int minj=i;
        for(int j=i;j<n;j++){
            if(v[j]<v[minj]){
                minj=j;    
            }
        }
        if(minj!=i){
            swap(v[i],v[minj]);
            ans++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<(i==n-1?"\n":" ");
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
