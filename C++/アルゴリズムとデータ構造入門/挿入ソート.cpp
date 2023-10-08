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
    for(int i=0;i<n;i++){
        cout<<v[i]<<(i==n-1?"\n":" ");
    }    
    for(int i=1;i<n;i++){
        int copy=v[i];
        int j=i-1; // se o número atual for 5 o i-1 será 4
        while(j>=0&&v[j]>copy){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=copy;

        for(int i=0;i<n;i++){
            cout<<v[i]<<(i==n-1?"\n":" ");
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
