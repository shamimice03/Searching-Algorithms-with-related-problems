
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n,m,a;
    vector<ll>ss;


  while(scanf("%lld",&n) != EOF){

    for(int i=0; i<n; i++){
        cin>>a;
        ss.push_back(a);
    }
    sort(ss.begin(),ss.end());
    cin>>m;
    ll f,l,q,p,g=1000000000,d;

    for(int i=0; i<(ss.size()); i++){

        f=m-ss[i];

        if(binary_search(ss.begin(),ss.end(),f)){
            l=ss[i];

           d=abs(f-l);

           if(d<g){
            p=max(f,l);
            q=min(f,l);
            g=d;
           }

        f=0,l=0;
    }
    }

    printf("Peter should buy books whose prices are %lld and %lld.\n\n",q,p);

    ss.clear();

}


    return 0;
}
