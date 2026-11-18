#include<stdio.h>
struct student
{ int roll;
 int m1,m2,m3;
 char name[30];
 int total;
float per; };
int main() {
int i,n;
printf("Enter the number of records :\n");
scanf("%d",&n);
struct student strarr[n];
for(i=0;i<n;i++)
{
    printf("Enter the roll number :\n");
    scanf("%d",&strarr[i].roll);
       printf("Enter name :\n");
    scanf("%s",strarr[i].name);
       printf("Enter the marks in 3 subjects :\n");
    scanf("%d%d%d",&strarr[i].m1,&strarr[i].m2,&strarr[i].m3);
    strarr[i].total = strarr[i].m1 + strarr[i].m2 + strarr[i].m3; 
    strarr[i].per = strarr[i].total/3.0;
}
printf(" \n roll no |\t name |\t m1 |\t m2 |\t m3 |\t total |\t per |\t result");
for(i=0;i<n;i++){
printf("\n %d",strarr[i].roll);
printf("\t");
printf("%s",strarr[i].name);
printf("\t");
printf("\t %d",strarr[i].m1);
printf("\t %d",strarr[i].m2);
printf("\t %d",strarr[i].m3);
printf("\t %d",strarr[i].total);
printf("\t %.2f",strarr[i].per);
if(strarr[i].per < 40){
    printf("Fail");}
else if(40<=strarr[i].per && strarr[i].per<=65){
    printf("Second class");
}
else if(65<strarr[i].per && strarr[i].per<=80){
    printf("First class");
}
else if(80<strarr[i].per){
    printf("Distinction");
}
}
return 0;
}
