//patil_gm
#include<map>
#include<vector>
#include<cmath>
#include<numeric>
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define itoc(c)  ((char)(((int)'0')+c))
#define ctoi(c)  ((int)(((int)c)-'0'))
#define endl '\n'
#define ll long long
#define lld long long double 
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define vec(ver, n)  vector<ll> ver(n); for (ll i = 0; i < n; i++) cin >> ver[i];
#define pii pair<ll,ll>
#define fr first
#define sc second
const long long INF=1e18;
const int32_t mod=1e9+7;
const int32_t MM=998244353;



 void helper(ll idx,ll n,vector<ll> &arr,vector<ll> &sb){
     if(idx>=n){
        if(sb.size()==0)cout<<"{}";
        for(auto it:sb){
            cout<<it<<" ";
        }
        cout<<"\n";
        return;
   }

    sb.push_back(arr[idx]);
    helper(idx+1,n,arr,sb);
    sb.pop_back();
    helper(idx+1,n,arr,sb);
   
    
}



void findSubsequence(int n,vector<ll>arr){
    vector<ll> sb;
    helper(0,n,arr,sb);
};
void solve(){
   ll n;cin>>n;
   vec(arr,n);
   findSubsequence(n,arr);
};

signed main(){
    fastio
    ll t=1;
// cin>>t;
while(t--)solve();
    return 0;
}

