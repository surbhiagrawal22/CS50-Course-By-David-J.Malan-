#include <cs50.h>
#include <stdio.h>

int height(void) ;

int main(void)
{
  int n=  height() ;
   
 
   for(int j=1;j<=n;j++)
     {
       for(int k=n;k>j;k--)
        {  
            printf(" ");
        }
        for(int k=1;k<=j;k++)
         { 
             printf("#");
         }
         printf("  ");
         for (int k=1;k<=j;k++)
          {
              printf("#");
          }
          printf("\n");
     }      
     

}

int height(void)
{
int i=0 ;
 do
  { 
      i= get_int ("Height: %i \n",i);
  } while (i<1 || i>8 );
  return i ;
}
