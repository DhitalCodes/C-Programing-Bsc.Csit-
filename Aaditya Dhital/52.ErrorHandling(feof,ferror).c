#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("test.txt","r");

    if(fp==NULL)
        return 1;

    while((ch=fgetc(fp))!=EOF)
        putchar(ch);

    if(feof(fp))
        printf("End of file reached\n");

    if(ferror(fp))
        printf("Error occurred\n");

    fclose(fp);
    return 0;
}