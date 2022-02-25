#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ull  unsigned long long
#define pii  pair<int,int>
#define fast_in_out  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



void solve_it_now()
{
           ll n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
         ll k;
        cin>>k;
        v.push_back(k);
    }
    ll answerrr=v[0];
    for(int i=0;i<n;i++)
    {
        answerrr=answerrr|v[i];
    }
    cout<<answerrr<<endl;
}



int main()
{
   fast_in_out
   ll t;
   cin>>t;
   while(t--)
   {
      solve_it_now();
   }

   return 0;
}
