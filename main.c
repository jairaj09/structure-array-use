#include <stdio.h>
#include <stdlib.h>
struct Employee
{
   char Name[20] ;
   char ID[20] ;
   int Experience[5] ;
   int Salary [10];

};
int main()
{

int i=1,j=1;
struct Employee s1 ;
for (i=1;i<=5;i++)
{
    printf("Employee Number : %d",i);

    printf("\nEnter name : ");
    gets(s1.Name);
    printf("Enter ID : ");
    gets(s1.ID);
    printf("Enter Experience : ");
    gets(s1.Experience);
    printf("Enter Salary : ");
    gets(s1.Salary);


    printf("\nEmployee Number : %d",i);
   printf("\nName : %s",s1.Name);
    printf("\nID : %s",s1.ID);
    printf("\nExperience : %s",s1.Experience);
    printf("\nSalary: %s",s1.Salary);

}
    return 0;
}
