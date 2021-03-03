#include<stdio.h>
#include<string.h>
#include<math.h>
#include<cs50.h>
#include<ctype.h>
int main (void)
{
    string s=get_string("please enter a string \n");
    int word=0,sent=0,letter=0,t=0;
    float index=0,L=0,S=0;
    int len=strlen(s);
    for (int i=0;i<len;i++)
    {
        if(s[i]==' '||s[i]=='\0')
           {
               word=word+1;
           }
    }
    word=word+1;
    printf("words are %i\n",word);
    for(int i=0;i<len;i++)
    {

        if(isupper(s[i])||islower(s[i]))
        {
            letter=letter+1;
        }
    }
    printf("letter are %i\n",letter);
     for(int i=0;i<len;i++)
     {
         if(s[i]=='.'||s[i]=='!'|s[i]=='?'||s[i]=='\0')
         {
             sent=sent+1;
         }
     }
     printf("sent are %i\n",sent);

     L=(float)letter/(float)word*100;
     S=(float)sent/(float)word*100;
     index =(0.0588 * L - 0.296 * S - 15.8);
     t=round(index);
     if(t<0)
     {
         printf("Before Grade 1\n");

     }
     else if(t>16)
     {
         printf("Grade 16+\n");

     }
     switch(t)
     {

         case 1:printf("Grade 1\n");
         break;
         case 2:printf("Grade 2\n");
         break;
         case 3:printf("Grade 3\n");
         break;
         case 4:printf("Grade 4\n");
         break;
         case 5:printf("Grade 5\n");
         break;
         case 6:printf("Grade 6\n");
         break;
         case 7:printf("Grade 7\n");
         break;
         case 8:printf("Grade 8\n");
         break;
         case 9:printf("Grade 9\n");
         break;
         case 10:printf("Grade 10\n");
         break;
         case 11:printf("Grade 11\n");
         break;
         case 12:printf("Grade 12\n");
         break;
         case 13:printf("Grade 13\n");
         break;
         case 14:printf("Grade 14\n");
         break;
         case 15:printf("Grade 15\n");
         break;



     }



















}
