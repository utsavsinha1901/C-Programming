#include <stdio.h>
int main()
{
    int opt;
    scanf("%d",&opt);
    if(opt==1){
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                printf("%d",j);
            }
            printf();
        
        }
        else if (opt==0)
        {
            /* code */
            for(int m=1;m<=5;m++){
                for(int n=1;n<=m;n++){
                    printf("%d",m);
                }
                printf();
            }
        }
        else{
            printf("Wrong Option");
        }
        
    }
    return 0;
}
