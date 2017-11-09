#include<bits/stdc++.h>
using namespace std;

double equation(double x){

   return 2*x*x - 12*x + 7;
}

int main(){

 int test;

 cin>>test;

 while(test--){

 double L,R;

 cin>>L>>R;

 for(int i=0; i<200; i++){

      double L1 = (L*2+R)/3.0;
      double L2 = (L+2*R)/3.0;

    if(equation(L1) < equation(L2)) R=L2; else L=L1;

 }
    double x = R;

    cout<<(long long)floor(equation(x))<<endl;
 }
    return 0;
}
