/* WAP to input single no.(1-4) where 1= Area of circle 2=Perimeter of Circle 3= Area of Rectangle 4=Exit Program */
#include <stdio.h>
int main() {
 int n,r,a,p,l,b,ar;
 printf("--------------------- \n");
 printf("Enter your choice    |\n"); 
 printf("--------------------- \n");
 printf("1.Area of circle \n2.Perimeter of circle \n3.Area of rectangle \n4.Exit Program  \n");
 scanf("%d",&n);
 switch(n){
     case 1:
     printf("Enter radius of Circle");
     scanf("%d",&r);
     a=3.14*r*r;
     printf("Area of Circle is: %d",a);
     break;
     
     case 2:
     printf("Enter radius of Circle: ");
     scanf("%d",&r);
     p=2*3.14*r;
     printf("Perimeter of is circle: %d",p);
     break;   
     
     case 3:
     printf("Enter length & breadth of a rectangle: ");
     scanf("%d %d",&l,&b);
     ar=l*b;
	 printf("Area of Rectangle is: %d",ar);
	 break;
     
     case 4:
     printf("PROGRAM EXITED");
     
     default :
     printf("ERROR!!TRY AGAIN!!!");
 }
    return 0;
}
