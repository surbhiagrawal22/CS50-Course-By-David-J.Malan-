#include <cs50.h>
#include <stdio.h>

int main(void)
{ 
    int i;
    do 
    {
       i=get_int("Height: \n" );
    }
    while(i<1 || i>8);

    for(int j=1;j<=i;j++)
    {
       for (int m=i;m>j;m--)
       {
         printf(" ");
       }
       for (int m=1;m<=j;m++)
       {
         printf("#");
       }
         printf("\n");
     }
}
