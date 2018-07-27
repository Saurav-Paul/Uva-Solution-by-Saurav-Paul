#include <stdio.h>
void egcd(int a,int b, int *g, int *x, int *y);
int main()
{
    int x, y,a,b,g;
    while(scanf("%d %d",&a,&b) == 2)
{
  egcd(a,b,&g,&x,&y);
  printf("%d %d %d\n",x,y,g);

}
    return 0;
}
void egcd(int a,int b, int *g, int *x, int *y)
{
    int temp;
    if (b == 0)
    {
        *g = a;
        *x = 1;
        *y = 0;
        return;
    }
    egcd(b,a % b,g,x,y);
    temp = *y;
    *y = *x - (a / b) * (*y);
    *x = temp;
}
