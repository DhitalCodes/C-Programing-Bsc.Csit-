#include <stdio.h>
int main()
{
    FILE *fp;
    int id;
    char name[20];
    fp=fopen("data.txt","w");
    fprintf(fp,"%d %s",1,"Ram");
    fclose(fp);

    fp=fopen("data.txt","r");
    fscanf(fp,"%d %s",&id,name);
    printf("%d %s",id,name);
    fclose(fp);
    return 0;
}