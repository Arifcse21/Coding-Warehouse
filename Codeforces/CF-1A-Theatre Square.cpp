#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,dn,dm,rn,rm;
    while(scanf("%lld%lld%lld",&n,&m,&a) !=EOF)
    {
        long long s;
        dn=n/a;
        dm=m/a;
        rn=n%a;
        rm=m%a;
        if(rn!=0) rn=1;
        else rn=0;
        if(rm!=0) rm=1;
        else rm=0;
        s=(dn+rn)*(dm+rm);
        printf("%lld\n",s);
    }
    return 0;
}
