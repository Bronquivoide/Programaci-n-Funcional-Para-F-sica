#include<stdio.h>
int main(){
    float Va,Vb,d,Xa,t,V;
    printf("Dame la velocidad del vehículo A en km/h\n");
    scanf("%f",&Va);
    printf("Dame la velocidad del vehículo B en km/h\n");
    scanf("%f",&Vb);
    printf("Dame la distancia de separación entre ciudades en km\n");
    scanf("%f",&d);
t=(d/(Va+Vb))*3600;
V=Va/3.6;
Xa=V*t;
printf("La distancia a la que sucede el choque respecto al punto de partida de A en metros es %f\n",Xa);

}
