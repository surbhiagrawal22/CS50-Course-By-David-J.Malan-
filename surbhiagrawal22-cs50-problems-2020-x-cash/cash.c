#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>

int main (void)
{ 
    float coin=0;
    int count=0;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    do
    {
       coin=get_float("please enter amount of change in dollar %.f \n",coin);
    } while(coin < 0 );

    int dollar = round(coin*100);

    printf("%i \n",dollar);
    do 
    { 
      if(dollar/25>=1)
        { 
        count1=dollar/25;
        dollar=dollar%25; 
        }
        else if (dollar/10>=1)
          { 
            count2=dollar/10;
            dollar=dollar%10;
          }
        else if (dollar/5>=1)
        { 
           count3=dollar/5;
           dollar=dollar%5;
        }
         else if (dollar>=1)
           { 
             count4=dollar;
             break;
           }

    }while(dollar>0);

    count=count1 + count2 + count3 + count4;   
    printf("no of coins %i \n",count); 
}

          
     
     
     
     
     
     











