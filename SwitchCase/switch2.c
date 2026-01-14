/* WAP to input two different numbers and operator then find the result based on the user choice operator where (+ - * /) */
#include <stdio.h>
void line() {
    printf("-----------------------------------------------\n");
}
int main() {
   int n1,n2,a,sum,diff,prod,divs;
   line();
   printf("Please enter any two different positive numbers\n |");
   line();
   scanf("%d %d",&n1,&n2);
   line();
   printf("Enter required operation: \n");
  line();
   printf("1.Sum(+)\n2.Difference(-)\n3.Product(*)\n4.Division(/)\n");
   line();
   scanf("%d",&a);
   switch(a){
       case 1:
       sum=n1+n2;
       line();
       printf("Sum of %d and %d is: %d \n",n1,n2,sum);
       line();
       break;
       
       case 2:
       diff=n1-n2;
       line();
       printf("Difference of %d and %d is: %d \n",n1,n2,diff);
       line();
       break;
       
       case 3:
       prod=n1*n2;
        line();
       printf("Product of %d and %d is: %d \n",n1,n2,prod);
       line();
       break;
       
      case 4:
       divs=n1/n2;
        line();
       printf("Division of %d by %d is: %d \n",n1,n2,divs);
        line();
       break;
       
      default:
      printf("ERROR!!! PLEASE TRY AGAIN!!!");
   }
    return 0;
}
