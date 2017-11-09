#include<bits/stdc++.h>
#define inf 100000000000000000
#define X first
#define Y second
#define B begin()
#define E end()
#define mp make_pair
#define pb push_back
#define loop1(i,n) for(int i=1; i<=(n); i++)
#define loop2(j,n) for(int j=1; j<=(n); j++)
#define loop0(i,n) for(int i=0; i<(n); i++)
#define valid(nx,ny) nx>=1 && nx<=8 && ny>=1 && ny<=8
#define pii pair<int, int>
#define ll long long
using namespace std;
const int Size=123456;

int main()
{
    int p,q,r,s,t,u;

    while(scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u) != EOF){


    double start=0,End=1,x,ans;
    int sss=50;
    while(sss--){
    x=0,ans=0;
    x= (start+ End)/2.0;
     ans= p * exp(-x) + q * sin(x) + r * cos(x) + s* tan(x) + t * (x*x) + u;
    if(ans<=0.0) End=x;
    else start= x;

    }

      if(ans>=0.000000000001 || ans<=-0.9999999999999) cout<<"No solution"<<endl;
      else cout<<fixed<<setprecision(4)<<x<<endl;

    }

    return 0;
}

