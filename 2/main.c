/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double a;
double b;
double c;
double delta;
void f1(double a,double b,double c,double delta);
void f2(double a,double b,double c,double delta);
void f3(double a,double b,double c,double delta);
int main()
{


    scanf("%lf %lf %lf",&a,&b,&c);
    delta= b*b - 4*a*c;
    if(delta>0)
    {

        f1(a,b,c,delta);

    }
    else if(delta==0)
    {

        f2(a,b,c,delta);

    }
    else
    {

        f3(a,b,c,delta);

    }
    return 0;
}
void f1(double a,double b,double c,double delta)
{
    double x1,x2;
    {


    delta= b*b - 4*a*c;
    x1 = ((-b + sqrt(delta))/(2*a));
    x2 = ((-b - sqrt(delta))/(2*a));
    printf("%.2lf %.2lf\n",x1,x2);
    }
}
void f2(double a,double b,double c,double delta)
{
    double x1,x2;
    {


    x1 = (-b/(2*a));
    x2 = (-b/(2*a));
    printf("%.2lf %.2lf\n",x1,x2);
    }
}
void f3(double a,double b,double c,double delta)
{
    double x1,x2;
    {
    delta= b*b - 4*a*c;
    x1 = (-b/(2*a));
    x2 = (sqrt(-delta))/(2*a);
    printf("%.2lf+i*%.2lf\n",x1,x2);
    printf("%.2lf-i*%.2lf\n",x1,x2);
    }
}

/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void f1(double,double,double,double);
void f2(double,double,double,double);
void f3(double,double,double,double);
int main()
{
	double a,b,c,d;
	scanf("%lf %lf %lf",&a,&b,&c);

	d=b*b-4*a*c;
	if(d>0)
		f1(a,b,c,d);
	else if(d==0)
		f2(a,b,c,d);
	else
		f3(a,b,c,d);

	return 0;
}
void f1(double a, double b, double c, double d)
{
	double x1,x2;
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("%.2lf ,%.2lf\n",x1,x2);
	}
}
void f2(double a, double b, double c, double d)
{
	double x1,x2;
	{
		x1=-b/(2*a);
		x2=-b/(2*a);
		printf("%.2lf ,%.2lf\n",x1,x2);
	}
}
void f3(double a, double b, double c, double d)
{
	double x1,x2;
	{
		x1=-b/(2*a);
		x2=sqrt(-d)/(2*a);
		printf("%.2lf+i*%.2lf\n",x1,x2);
		printf("%.2lf-i*%.2lf\n",x1,x2);
	}
}




double calculate_approximation(double x, double eps) {
double result = 0;
double term = 1;
int n = 1;

    while (fabs(term) > eps)
    {
        if (n % 2 == 0)
        {
            result -= term;
        }
        else
        {
            result += term;
        }
        term *= (x * x) / ((2 * n + 1) * (2 * n));
        n++;
    }

    return result;
}

int main()
{
    double x, eps;
    scanf("%lf %lf", &x, &eps);
    double approximation = calculate_approximation(x, eps);
    printf("%.6lf", approximation);
    return 0;
}*/






#include<stdio.h>
#include<math.h>

int main()
{
	int n=2;
	double eps,t,s=0,x;
	scanf("%lf %lf",&x,&eps);
	t=x;
    s=t;
	while(fabs(t/2*n)>=eps)
	{
		t=-t*(2*n-3)*x*x/(2*n-2);
		s=s+t/(2*n);
		n++;
	}
	printf("%.6lf\n",s);

	return 0;
}





/*int main()
{
    int s = 0;
    int t =0;
    int p = 1;
    scanf("%d",&s);
    while(s!=0)
	{
		if((s%10)%2!=0)
		{
			t=t+(s%10)*p;
			p=p*10;
		}
		s=s/10;
	}
    printf("%d",t);


    return 0;
}

/*
#include <math.h>

int main() {
    double x, eps;
    scanf("%lf %lf", &x, &eps);

    double result = 0;
    int n = 1;
    for (int i = 1; ; i++)
    {
        double term = (2*n - 3)*x*x/(2*n - 2);
    /*while (1)
    {
        double term = ((-1) * n) * (2 * (n - 1)) * (4 * n) / (3 * n) * (6 * (n + 1));
        if (fabs(term) < eps)
        {
            break;
        }
        result += term;
        n++;
    }

    printf("%.6lf", result);
    return 0;
}
*/



/*#include<stdio.h>
#include<math.h>
int main()
{
    int n = 2;
    double x;
    double eps;
    double sum = 0;
    double f;
    double a=-1,c;
    c = pow(a,n-1);
    scanf("%lf %lf",&x,&eps);
    f = x;
    sum = f;
    while(fabs(f/2*n)>=eps)
    {

        f = f*(2*n - 3)*x*x/(2*n - 2)*c;
        sum = sum +f/2*n;
        n++;

    }
    printf("%.6lf",sum);
    return 0;
}
*/




/*
int main()
{
    int n = 0;
    int j = 0;

    int r = 0;

    scanf("%d",&n);
    for(j = 2;j <= n;j++)
    {
        if(n%j == 0)
        {
            for(r = 2;r < j;r++)
            {
                if(j%r == 0)
                {
                    break;
                }
            }
            if(j==r)
            {
                printf("%d ",j);
            }
        }

    }
}
*/

