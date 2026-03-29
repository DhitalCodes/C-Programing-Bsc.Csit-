#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("test.txt","w");
    fprintf(fp,"Hello File");
    fclose(fp);
    return 0;
}