#include<bits/stdc++.h>
using namespace std;


long long Arr[100005];
long long khoji(long long key,long long l){

     long long mid,start,End;
     start=1;
     End=l;

     while(start<=End){
        mid=(start+End)/2;
        if(Arr[mid]==key){start=mid; break;}
        else if(key>Arr[mid]) start=mid+1;
        else End=mid-1;
     }

     return start;
}

long long khoji2(long long key,long long l){

     long long mid,start,End;
     start=1;
     End=l;

     while(start<=End){

         mid=(start+End)/2;
        if(key>=Arr[mid]) start=mid+1;
        else End=mid-1;
     }

     return start;
}

int main()
{
    long long t,n,q,a,b;

    scanf("%lld",&t);
    for(long long j=1; j<=t; j++){

      scanf("%lld %lld",&n,&q);

    for(long long i=1; i<=n; i++){
         scanf("%lld",&Arr[i]);
    }
     printf("Case %lld:\n",j);
   for(long long i=1; i<=q; i++){
    scanf("%lld %lld",&a,&b);
   long long p=khoji(a,n);
   long long m=khoji2(b,n);
    printf("%lld\n",m-p);
   }

    }
    return 0;
}


