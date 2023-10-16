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
    string s;
    vi v(26,0);
    while(getline(cin,s)){
        int n=s.size();
        for(int i=0;i<n;i++){
            if((s[i]<'a'||s[i]>'z')&&(s[i]<'A'||s[i]>'Z')){
                continue;
            }
            if('A'<=s[i]&&s[i]<='Z'){
                v[s[i]-'A']++;
            }else{
                v[s[i]-'a']++;
            }
        }
    }
    for(int i=0;i<26;i++){
        cout<<char(i+'a')<<" : "<<v[i]<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
