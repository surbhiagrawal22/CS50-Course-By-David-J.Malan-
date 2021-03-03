#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<cs50.h>
int main(int argc,string argv[])
{
    //calculate the key length
     int len=strlen(argv[1]);
   string  k =argv[1];
    //to check if the user has enetred the key at command line argument

     if(argc!=2)
        {
           printf("Usage: ./substitution key");
           return 1;
        }

   //to check if the user has entered numbers or alphabets in key
     for(int i=0;i<len;i++)
        {
         if(!isalpha(argv[1][i]))
          {
             printf("the key must contain only alphabets");
             return 1;
          }

          }

    // to check if string is more or less than 26 characters
     if (len!=26)
        {
          printf("Key must contain 26 characters.");
          return 1;
        }

         // to check if it contains repeated charchetrrs
        for (int i=0;i<len;i++)
        {
            for(int j=1;j<len;j++)
            {
                if(argv[1][i]==argv[1][j])
                {
                    printf("must not contain repared charcetrs");
                    return 1;
                }
            }
            break;
        }

  string P=get_string("Plaintext:");

  int len1=strlen(P);
  string output[len1];

printf("ciphertext: ");
for(int z=0;z<len1;z++)
{
    if(islower(P[z]))
    {
        k[z]= k[P[z]-97];
      printf("%c",(char)tolower(k[z]));
    }
    else if(isupper(P[z]))
    {
        k[z]=k[P[z]-65];
      printf("%c",(char)toupper(k[z]));
    }
    else
    {

        printf("%c",P[z]);
    }

}
printf("\n");
return 0;


}



