//uva problem no: 12289  One-Two-Three

//Code:
#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,len;
    char str[100];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf(" %[^\n]",str);
        len=strlen(str);
        if(len==5) printf("3\n");
        else if(str[0]=='o' && str[2]=='e') printf("1\n");
        else if(str[0]=='o' && str[1]=='n') printf("1\n");
          else if(str[1]=='n' && str[2]=='e') printf("1\n");
         else printf("2\n");
    }
    return 0;
}