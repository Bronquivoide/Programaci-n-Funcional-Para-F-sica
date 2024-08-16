#include<stdio.h>
#include<math.h>
int main(){
float rho,V,r,m;
printf("Dame el radio de la esfera en cm\n");
scanf("%f",&r);
V=(4*3.14*pow(r,3))/3;
printf("Dame la densidad de la esfera en g/cm^3\n");
scanf("%f",&rho);
m=rho*V;
printf("La masa de la esfera es %f g\n",m);


}
