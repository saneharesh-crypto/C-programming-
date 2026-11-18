#include<stdio.h>
#include<math.h>
int main()
{
	int choice ;
double length,breadth,base,height,radius,area;
while (1) {
printf("1:Square\n");
printf("2:Rectangle\n");
printf("3:Triangle\n");
printf("4:Circle\n");
printf("5:Exit\n");
printf("Enter choice :\n");
scanf("%d",&choice);
printf("Enter data :\n");
scanf(" %lf%lf",&length,&breadth,&base,&height,&radius);
switch (choice) {
case 1:
area= length*length;
printf("area:%.2lf*%.2lf=%.2lf\n",length,length,area);
break;
case 2:
area=length*breadth;
printf("area:%.2lf*%.2lf=%.2lf\n",length,breadth,area);
break;
case 3:
area=base*0.5* height;
scanf("%lf%lf%lf", &base,&height,&area);
printf("area:%.2lf*0.5*%.2lf=%.2lf\n",base,height,area);
break;
case 4:
area=3.14*radius*radius;
scanf("%lf%lf", &radius,&area);
printf("area:3.14*%.2lf*%.2lf=%.2lf\n",radius,radius,area);
break;
default :
printf("Invalid choice choose again\n");
break;
return 0;
}
}
}
