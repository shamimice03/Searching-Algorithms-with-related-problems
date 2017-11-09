#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;


int main(){

   int t;
   cin>>t;
   double R,n;

   for(int j=1; j<=t; j++){
     cin>>R>>n;
   double start=0.0,End=R,mid,org;

   org= sin(PI/n);

   while(start<=End){
       mid=(start+End)/2.0;

       double ans= mid/(R-mid);

        double a,b;
        a=max(ans,org);
        b=min(ans,org);
       if((a-b)<0.000000001) {
        printf("Case %d: ",j);
        cout<<fixed<<setprecision(10)<<mid<<endl; break;}
       else if(ans<org) start=mid;
       else End=mid;


   }
   }

}
