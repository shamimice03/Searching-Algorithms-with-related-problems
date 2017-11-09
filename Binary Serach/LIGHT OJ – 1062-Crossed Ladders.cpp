#include<bits/stdc++.h>
using namespace std;

double bumi(double x,double y, double m){

    double h1,h2,h;

    h1=sqrt((y*y)-(m*m));
    h2=sqrt((x*x)-(m*m));

    h=(h1*h2)/(h1+h2);

    return h;
}



int main()
{
    int t;
    cin>>t;

    for(int j=1; j<=t; j++){
    double L,R,mid,c,x,y;

    cin>>x>>y>>c;

    L=0.0;
    R=min(x,y);

   for(int i=0; i<=100; i++){

        mid=(L+R)/2.0;

        if(bumi(x,y,mid)<=c) R=mid;
        else L=mid;

    }

    printf("Case %d: ",j);
    cout<<fixed<<setprecision(8)<<mid<<endl;

}

}
