#include<bits/stdc++.h>
using namespace std;


double check(double x,double y,double m){

      double h1,h2,h;

      h1=sqrt((x*x)-(m*m));
      h2=sqrt((y*y)-(m*m));

      return h=(h1*h2)/(h1+h2);
}

int main()
{
    double x;
    while((scanf("%lf",&x)) != EOF){

    double y,c,L,R,mid;
    cin>>y>>c;

    L=0.0; R=min(x,y);

    for(int i=0; i<=100; i++){

        mid=(L+R)/2.0;

        if(check(x,y,mid)<=c) R=mid;
        else L=mid;
    }


    cout<<fixed<<setprecision(3)<<mid<<endl;
    }
    return 0;
}

