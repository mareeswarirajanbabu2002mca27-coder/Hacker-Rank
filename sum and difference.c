#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1,n2,sum,dif;
    float f1,f2,sum1,dif1;
    scanf("%d",&n1);
    scanf("%d",&n2);
    sum=n1+n2;
    dif=n1-n2;
    printf("%d\t",sum);
    printf("%d\n",dif);
    scanf("%f",&f1);
    scanf("%f",&f2);
    sum1=f1+f2;
    dif1=f1-f2;
    printf("%0.1f\t",sum1);
    printf("%0.1f",dif1);
    
    return 0;
}
