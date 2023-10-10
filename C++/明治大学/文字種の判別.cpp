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
    char a;read(a);
    if(a>=97&&a<=122){
        cout<<"lower"<<"\n";
    }else if(a>=65&&a<=90){
        cout<<"upper"<<"\n";
    }else if(a>=48&&a<=57){
        cout<<"number"<<"\n";
    }else{
        cout<<"others"<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
