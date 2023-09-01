#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); // fast cin/cout
    cin.tie(0); // sem flush.

    vector<int> arr(101);

    for (int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    for (int i=0;i<arr.size();i++){
        if (arr[i]==42){
            break;
        }
        cout<<arr[i]<<"\n";
    }
}
