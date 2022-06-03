#include<simplecpp>
main_program{
int n=3;
double x[n], y[n];
initCanvas("circle",1000,1000);
Rectangle sq(0,0,3,3);
sq.setColor(COLOR("white"));
for(int i=0; i<n; i++){
    int a=getClick();
    x[i]=a/65536;
    y[i]=a%65536;
    sq.moveTo(x[i],y[i]); sq.setColor(COLOR("red")); sq.imprint();
}
int i=0,j=1,k=2;                                                                    // no issues till this pointint i=0,j=1,k=2;
double X=((x[i]*x[i]+y[i]*y[i])*(y[j]-y[k])+(x[j]*x[j]+y[j]*y[j])*(y[k]-y[i])+(x[k]*x[k]+y[k]*y[k])*(y[i]-y[j]))/(2*(x[i]*(y[j]-y[k])+x[j]*(y[k]-y[i])+x[k]*(y[i]-y[j])));
double Y=-1*((y[i]*y[i]+x[i]*x[i])*(x[j]-x[k])+(y[j]*y[j]+x[j]*x[j])*(x[k]-x[i])+(y[k]*y[k]+x[k]*x[k])*(x[i]-x[j]))/(2*(x[i]*(y[j]-y[k])+x[j]*(y[k]-y[i])+x[k]*(y[i]-y[j])));
double R=sqrt((X-x[i])*(X-x[i])+(Y-y[i])*(Y-y[i]));

Circle c(X, Y, R); wait(10);
}

