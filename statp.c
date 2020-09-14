/* YHKIM 2020.09.14*/
#include <stdio.h>

int main(void)
{
   int i,j,num;

   printf("  Input Number : ");
   scanf("%d", &num);
    
 for(i=1;i <= num; i++)
 {
   for(j=1; j <= num -i; j++)
     printf(" ");
   for(j=1; j <= i;j++)
     printf("*");
   for(j=1; j <= i-1;j++)
     printf("*");
     
   printf("\n");
 }
 for(i= num -1;i >= 1; i--)
 {
     for(j=1; j <= num -i; j++)
         printf(" ");
     for(j=1; j <= i;j++)
         printf("*");
     for(j=1; j <= i-1;j++)
         printf("*");
   printf("\n");
 }

 return 0;
}
=======
#include <stdio.h>

int main(void)
{
   int i,j,num;

   printf("  Input Number : ");
   scanf("%d", &num);
    
    for(i=1;i <= num; i++)
    {
      for(j=1; j <= num -i; j++)
        printf(" ");
      for(j=1; j <= i;j++)
        printf("*");
      for(j=1; j <= i-1;j++)
        printf("*");

      printf("\n");
    }
    for(i= num -1;i >= 1; i--)
    {
        for(j=1; j <= num -i; j++)
            printf(" ");
        for(j=1; j <= i;j++)
            printf("*");
        for(j=1; j <= i-1;j++)
            printf("*");
      printf("\n");
    }

 return 0;
}
>>>>>>> 23d387ed7ec8e6913c4977209377bb45f530c4fd
