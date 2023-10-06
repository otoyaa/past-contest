#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first
#define s second
#define pi 3.14159265358979323846
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

void solve(){
    double r;read(r);
    double area=r*r*pi; // pi*(r²)
    cout<<fixed<<setprecision(6);
    cout<<area<<" "<<2*pi*r<<"\n";// 2*pi*r circunferencia
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
