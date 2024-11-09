#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

     int main() 
	 {
     int n,i,j,k,f;
     scanf("%d\n",&n);
     char a[n];
     for(i=0;i<n;i++)
     {
         scanf("%c",&a[i]);
     }
     for(j=1;j<=n;j++)
     {
         f=0;
     for(k=0;k<n-1;k++)
     {
         if(a[k]==a[k+1])
         f++;
     }
     printf("%d ",f);
     }
     
     
    return 0;
}

