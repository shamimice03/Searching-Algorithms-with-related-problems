#include<bits/stdc++.h>
using namespace std;

double equation(double x,double c,double n){

   if(x*(c-x*n)<0) return 0; /// Though the result cannot be negative,
                            /// we will neglect negative value and return 0;
   return x*(c-x*n);
}

int main(){

 int test;

 cin>>test;

 for(int tt=1; tt<=test; tt++){

 double L,R;

 L=0,R=200000000;

 double C,N;

 cin>>N>>C;

 printf("Case %d: ",tt);

 if(N==0) printf("0\n");

 else if(C>N){

 for(int i=0; i<2000; i++){

      double L1 = (L*2+R)/3.0;
      double L2 = (L+2*R)/3.0;

    if(equation(L1,C,N) >= equation(L2,C,N)) R=L2; else L=L1;
 }
    double x = L;
    double a=floor(x);
    double b=ceil(x);

    if(equation(a,C,N) >= equation(b,C,N))
    printf("%lld\n",(long long)(a));
    else  printf("%lld\n",(long long)(b));
 }


 else printf("0\n");
 }

    return 0;
}


