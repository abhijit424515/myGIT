#include<simplecpp>

main_program
{
    int n;
    cin>>n;
    initCanvas("Circle",500,500);
    double x[n], y[n], d[n];
    Rectangle sq(0,0,2,2);
    sq.setFill(true);
    sq.setColor(COLOR("red"));

    for(int i=0; i<n; i++)
    {
        long long p = getClick();
        x[i] = 1.0*(p/65536);
        y[i] = 1.0*(p%65536);
        d[i] = x[i]*x[i] + y[i]*y[i];
        sq.moveTo(x[i],y[i]);
        sq.imprint();
    }

    double xi=0,yi=0,ri=0;
    double xf=250,yf=250,rf=250;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j; k<n; k++)
            {
                if(j==k)
                {
                    xi = (x[i]+x[j])/2;
                    yi = (y[i]+y[j])/2;
                }
                else
                {
                    double dd = 2*(x[i]*(y[j]-y[k]) + x[j]*(y[k]-y[i]) + x[k]*(y[i]-y[j]));
                    if(dd==0)   continue;
                    double xn = d[i]*(y[j]-y[k]) + d[j]*(y[k]-y[i]) + d[k]*(y[i]-y[j]);
                    double yn = -(d[i]*(x[j]-x[k]) + d[j]*(x[k]-x[i]) + d[k]*(x[i]-x[j]));
                    xi = xn/dd;
                    yi = yn/dd;
                }
                double dx = x[i]-xi;
                double dy = y[i]-yi;
                ri = sqrt(dx*dx + dy*dy);

                int l;
                for (l=0; l<n; l++)
                {
                    if(l==i || l==j || l==k)   continue;
                    dx = x[l]-xi;
                    dy = y[l]-yi;
                    if(dx*dx + dy*dy > ri*ri)  break;
                }
                if (l!= n) continue;
                if (ri < rf)
                {
                    xf=xi;
                    yf=yi;
                    rf=ri;
                }
            }
        }
    }

    Circle c(xf,yf,rf);
    wait(5);
}
