#include<simplecpp>
main_program{
int n; cin>>n;
double x[n], y[n];
double Rmin=1000000000.0, Xformin=0, Yformin=0;
initCanvas("circle",1000,1000);
Rectangle sq(0,0,3,3);
sq.setColor(COLOR("white"));
for(int i=0; i<n; i++){
    int a=getClick();
    x[i]=a/65536;
    y[i]=a%65536;
    sq.moveTo(x[i],y[i]); sq.setColor(COLOR("red")); sq.imprint();
}                                                                                   // no issues till this point
for(int i=0; i<n; i++){
for(int j=i+1; j<n; j++){
for(int k=j+1; k<n; k++){
    bool err=false;

    // below equations are definitely correct
    double X=((x[i]*x[i]+y[i]*y[i])*(y[j]-y[k])+(x[j]*x[j]+y[j]*y[j])*(y[k]-y[i])+(x[k]*x[k]+y[k]*y[k])*(y[i]-y[j]))/(2*(x[i]*(y[j]-y[k])+x[j]*(y[k]-y[i])+x[k]*(y[i]-y[j])));
    double Y=-1*((y[i]*y[i]+x[i]*x[i])*(x[j]-x[k])+(y[j]*y[j]+x[j]*x[j])*(x[k]-x[i])+(y[k]*y[k]+x[k]*x[k])*(x[i]-x[j]))/(2*(x[i]*(y[j]-y[k])+x[j]*(y[k]-y[i])+x[k]*(y[i]-y[j])));
    double R=sqrt((X-x[i])*(X-x[i])+(Y-y[i])*(Y-y[i]));
    // above equations are definitely correct

    for(int k=0; k<n; k++){
        if((X-x[k])*(X-x[k])+(Y-y[k])*(Y-y[k]) > R*R){
            err=true;
        }
        if(err==true){continue;}
    }
    if(err==false && R<Rmin){
        Rmin=R; Xformin=X; Yformin=Y;
    }
}
}
}

double Dmax=0, Xformax, Yformax; double Dtemp, Xtemp, Ytemp; bool dia_err=false; bool initializer=false;
for(int i=0; i<n-1; i++){
for(int j=i+1; j<n; j++){
    dia_err=false;
    double D=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
    if(D>Dmax){
        Dtemp=D; Xtemp=(x[i]+x[j])/2.0; Ytemp=(y[i]+y[j])/2.0;
        for(int k=0; k<n; k++){
            if((Xtemp-x[k])*(Xtemp-x[k])+(Ytemp-y[k])*(Ytemp-y[k])>(Dtemp*Dtemp/4.0)){
                dia_err=true;
            }
        }
        if(dia_err==false){
            Xformax=Xtemp; Yformax=Ytemp; Dmax=Dtemp; initializer=true;
        }
    }
}
}

if(Dmax<2*Rmin && initializer==true){                                               // making sure D != 0 or tending to 0
    Rmin=Dmax/2.0; Xformin=Xformax; Yformin=Yformax;
}

cout<<Xformin<<endl<<Yformin<<endl<<Rmin<<endl;                                     // for error checking
Circle c(Xformin, Yformin, Rmin); wait(10);
}
