#include<math.h>
#include<string.h>
#include<cs50.h>
#include<stdio.h>

int main (void)
{
   long num =0 ,num1=0,num2=0;
   int lastdi=0,lastdi1=0,len=0,len1=0,len2=0;
   int sum=0,sum1=0,sumf=0;
   int mul=0;
   num=get_long("please enter a credit card number %lu \n",num);
   num1=num;
   num2=num;
        do 
        { 
            lastdi=num2%100;
            lastdi= lastdi/10;
            mul = lastdi*2;
            if (mul > 9)
              {
                 mul = mul%10 + mul/10;
              }
            sum=sum+mul;
            len++;
            num2=num2/100;
            
          } while ( num2 >0);
         do 
           {
               lastdi1=num1%10;
               len1++;
               sum1=sum1+lastdi1;
               num1=num1/100;
           }   while(num1>0);
                len2=len1+len;
                sumf=sum+sum1;  
            int final;
            final=sumf%10;
                if(final!=0)
                {
                     printf("invalid card \n");
                }
                else if (len2==15)
                {
                    printf("AMEX");
                }
                else if (len2==13||len2==16)
                  {
                      printf("VISA");
                  }
                else if (len2==16)
                {
                    printf("master card");
                }

}
