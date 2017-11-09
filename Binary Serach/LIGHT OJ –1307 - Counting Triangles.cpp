#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<long long>kk;

   long long t,n,a;

   cin>>t;
   for(long long f=1; f<=t; f++){
   cin>>n;

   for(long long i=0; i<n; i++){
    cin>>a;
    kk.push_back(a);
   }

   sort(kk.begin(),kk.end());

   long long ans=0;

   for(long long i=0; i<kk.size(); i++){
      for(long long j=i+1; j<kk.size(); j++){


        long long key=(kk[i]+kk[j]);

         vector<long long>::iterator it;
         it=lower_bound(kk.begin(),kk.end(),key);
        long long id=it-kk.begin();

         ans+=(id-j-1);
      }
   }

    printf("Case %lld: ",f);
    kk.clear();
    cout<<ans<<endl;
}
return 0;
}

