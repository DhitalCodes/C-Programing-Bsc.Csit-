#include<stdio.h>
struct student
{
    int id;
    char name[20];
};
int main()
{
    struct student s[3]={{1,"Ram"},{2,"Shyam"},{3,"Hari"}};
    int i;
    for(i=0;i<3;i++)
        printf("%d %s\n",s[i].id,s[i].name);
    return 0;
}