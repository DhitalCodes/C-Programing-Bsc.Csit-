#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("test.txt","w+");
    fputs("Hello World",fp);

    fseek(fp,6,SEEK_SET);
    printf("%ld\n",ftell(fp));

    rewind(fp);
    printf("%ld\n",ftell(fp));

    fclose(fp);
    return 0;
}