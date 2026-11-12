#include<stdio.h>
struct Student
{
int usn;
char name[30];
};
int main()
{

    struct Student s;
    struct Student *p;
    p=&s;
    printf("Enter USN:");
    scanf("%d",&p->usn);
    printf("Enter name:");
    scanf("%s",p->name);
    printf("\nUSN:%d",p->usn);
    printf("\nName:%s",p->name);
    return 0;
}

