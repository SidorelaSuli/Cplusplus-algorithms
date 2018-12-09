#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0,k=0, a=0;
    char str1[80]={0},substr[80][80]={0};
    scanf("%s",str1);

    while(str1[k]!='\0')//for splitting sentence
    {
        j=0;
        while(str1[k]!=' '&&str1[k]!='\0')
        {
            substr[i][j]=str1[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(str1[k]!='\0')
        {
            k++;
        }
    }
    int len=i; // LEN NUMBER OF WORDS

    for(i=0;i<len;i++)
    {
      for(j=i+1;j<len;)
       {
         if(strcmp(substr[i],substr[j])==0)
          {
            a++;
             for(k=j;k<len;k++)
              {
                strcpy(substr[k],substr[k+1]);
              }
                len--;
           }
          else
           {
             j++;
           }
        }
     }
if(a==0) printf("yes"); else printf("no");
}
