#include<stdio.h>
main(){
int n;
float Ln1,Ln2,r1,r2,r3,theta1,theta2;
printf("Dame el numero de vueltas:\n");
scanf("%d",&n);
printf("Dame el radio 1:\n");
scanf("%f",&r1);
printf("Dame el radio 2:\n");
scanf("%f",&r2);
printf("Dame el radio 3:\n");
scanf("%f",&r3);
theta1 = 6.28*n;
Ln1 = theta1*r1;
theta2 = theta1*(r1/r2);
Ln2 = theta2*r3;
printf("La longitud que recorre la bicicleta es %f\n",Ln2);
}
