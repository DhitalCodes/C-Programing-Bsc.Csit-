#include <stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("a.txt","r");
    fp2=fopen("b.txt","w");
    while((ch=fgetc(fp1))!=EOF)
        fputc(ch,fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}