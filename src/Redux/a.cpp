# include <bits/stdc++.h> 
using namespace std;
# define pb push_back
# define ff first
# define ss second
# define ll long long
# define ld long double
# define forn(i,n) for(int i=0;i<(int)n;++i)
# define pi 3.14159265359
# define inf 1e18
# define eps 1e-8
# define vll vector<long long>
typedef pair<int,int> pr;
typedef vector<pr> vpr;
typedef vector<int> vi;
typedef map<int,int> mpi;
typedef vector<vi> vvi;
vi v1,v2;
void f1(int i,vi &a,int sum){
    if(i<0) {
        v1.pb(sum);
        return;
        }
   
    f1(i-1,a,sum);
    f1(i-1,a,sum+a[i]);
}
void f2(int i,vi &a,int sum){
    if(i<0) {
        v2.pb(sum);
        return;
        }
   
    f2(i-1,a,sum);
    f2(i-1,a,sum+a[i]);
}
int range(int b){

int count=0;
for(int i=0;i<v1.size();++i){
    if(v1[i]>=b)continue;
    else {
        auto it=upper_bound() 
    }
}
}

void solve(){
int n,a,b;cin>>n>>a>>b;
vector<int>va,vb;int x;
for(int i=0;i<n/2;++i)cin>>x;va.pb(x);
for(int i=n/2;i<n;++i)cin>>x;vb.pb(x);
sort(v2.begin(),v2.end());
}
int32_t main(){ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
// cin>>t;
t=1;
while(t--){
solve();
}
return 0;
}