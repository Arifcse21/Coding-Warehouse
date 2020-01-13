#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    while(scanf("%d",&w) !=EOF)
    {
        if(w>2 && w<=100)
        {
            if(w%2==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else printf("NO\n");
    }
    return 0;
}
