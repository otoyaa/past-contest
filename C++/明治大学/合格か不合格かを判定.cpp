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
    const int MAX=10;
    int v[MAX];
    for(int i=0;i<MAX;i++){
        read(v[i]);
    }
    for(int i=0;i<MAX;i++){
        if(v[i]>=60){
            cout<<"ok"<<" ";
        }else{
            cout<<"ng"<<" ";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
