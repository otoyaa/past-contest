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
    string s;read(s);
    string ans="";
    int i=0;
    while(i<s.length()){
        if(s[i]=='j'&&s[i+1]=='o'&&s[i+2]=='i'){ // verifica cada index
            ans+="JOI";
            i+=3; // encontrou um bloco com "joi", pule 3 casas para procurar outro bloco
        }else{
            ans+=s[i];
            i++;
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
