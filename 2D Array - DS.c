#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,sum=0,maxsum=-2000;
   int a[6][6];
   for(i=0; i<6; i++)
   {
       for(j=0; j<6; j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0; i<6; i++)
   {
       for(j=0; j<6; j++)
       {
           if(i+2<6 && j+2<6){
           sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
           }
               if(sum>maxsum)
               {
                   maxsum=sum;
               }

       }
   }

printf("%d",maxsum);
return 0;
}
