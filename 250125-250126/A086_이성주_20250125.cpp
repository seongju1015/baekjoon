#include <stdio.h>
#include <algorithm>

bool cmp(int a, int b)
{
    int ord[10] = { 10, 5, 9, 8, 3, 2, 7, 6, 1, 4 };
    int s = 0;
    a = (a>=10)?ord[a/10]*20 + ord[a%10]:ord[a]*20;
    b = (b>=10)?ord[b/10]*20 + ord[b%10]:ord[b]*20;
    return a<b;
}

int main()
{
    int n, m, v[100], cp=0;
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++) v[cp++]=i;
    std::sort(v, v+cp, cmp);
    for(int i=0;i<cp;i++)
    {
        printf("%d", v[i]);
        putchar((i%10==9)?'\n':' ');
    }
    if(cp%10) putchar('\n');
    return 0;
}