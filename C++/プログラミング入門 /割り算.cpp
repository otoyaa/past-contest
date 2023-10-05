#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pi 3.14159265358979323846 
#define pb push_back
#define f first
#define s second
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   

    int  a,b;cin>>a>>b;
 
    cout<<a/b<<" ";cout<<a%b<<" ";
    double f=double(a)/double(b); // é isso msm
    cout<<fixed<<setprecision(10); // use fixed e setprecision(x)
    cout<<f<<"\n";
}
