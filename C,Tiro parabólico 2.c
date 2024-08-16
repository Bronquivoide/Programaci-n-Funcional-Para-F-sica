#include<stdio.h>
#include<math.h>
int main(){
int n,i;
float x,y,t,v0,g=9.8,a,seno,coseno,dt;
printf("Dame la velocidad inicial en m/s\n");
scanf("%f",&v0);
printf("Dame el angulo de lanzamiento en radianes\n");
scanf("%f",&a);
printf("Dame el numero de intervalos\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
coseno=(cos(a)*180)/3.14;
seno=(sin(a)*180/3.14);
t=2*v0*seno/g;
dt=t/i;
x=v0*dt*coseno;
y=v0*dt*seno-0.5*g*dt*dt;
printf("(x=%f,y=%f)\n",x,y);
}

}
