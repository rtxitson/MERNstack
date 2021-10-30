#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> mp;
bool cmp(int a,int b){
    if(mp[a]==mp[b]){
        return a<b;
    }
    return mp[a]>mp[b];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<int> v(n);
        for(i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end(),cmp);
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        mp.clear();
        v.clear();
    }
    return 0;
}
