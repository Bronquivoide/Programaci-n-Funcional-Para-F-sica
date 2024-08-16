#include<stdio.h>
#include<math.h>
main(){
float v0,g=9.8,a,arad,R,seno,Rmax,t,x;
printf("Solicitaremos las cantidades correspondientes en unidades MKS.\n");
printf("Dame la velocidad inicial:\n");
scanf("%f",&v0);
printf("Dame el angulo de lanzamiento en grados:\n");
scanf("%f",&a);
arad=(a*3.14)/180;
x=sin(2*a);
seno=(x*180)/3.14;
R=(v0*v0*seno)/g;
printf("El alcance horizontal es: %f\n",R);
Rmax=(v0*v0)/g;
printf("El alcance horizontal maximo es: %f\n",Rmax);
t=(2*v0*seno)/g;
printf("Si el movimiento empieza en y=0, el tiempo total de vuelo es: %f",t);
}

