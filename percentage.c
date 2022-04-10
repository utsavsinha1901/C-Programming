#include <stdio.h>
int fact(int f)
{
    int p=1;
     for(int i=1;i<=f;i++){
         p=p*i;
     }return p;

}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int f=fact(n);
    printf("%d",f);
    return 0;
}
