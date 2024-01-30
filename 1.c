#include<stdio.h>

//Q1
int q1main()
{int a,b;
printf("number 1 =");
scanf("%d",&a);
printf("number 2=");
scanf("%d",&b);
printf("sum of two number = %d",a+b);
return 0;

}

//Q2

int q2main()
{int asc;
//enter number 65 to 90
printf("enter ASCII code\n");
scanf("%d",&asc);
printf("%d-%c",asc,asc);
return 0;}

//Q3

int q3main()
{int x;
printf("enter a number\n");
scanf("%d",&x);
if(x%2==0)
printf("number is even");
else
printf("number is odd");
return 0;
}

//Q4
int q4main()
{int n,fac,i;
printf("enter a number");
scanf("%d",&n);
for(fac=1,i=1;n>=i;i++)
fac=fac*i;
printf("factorial of number%d is %d",n,fac);
return 0;}

//Q5
int q5main()
{int n=5,i,j;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
    printf(" %d",j);
    }
    printf("\n");}
    return 0;
}

//Q6
int q6main()
{int a,b,i,sum=0;
printf("emter two number\n");
scanf("%d %d",&a,&b);
for(i=1;i<=a;i++){
sum=sum+b;}
printf("multiplication is %d",sum);
return 0;}

//Q7
int q7main()
{int x,y,z;
printf("enter two number");
scanf("%d %d",&x,&y);
//may be(y=x;and x=x+y-y;)
z=y;
y=x;
x=z;
printf("%d %d",x,y);
return 0;}


//8
int q8main()
{int x,i;
printf("enter a number\n");
scanf("%d",&x);
for(i=2;i<x;i++){
    if(x%i==0)
    break;}
    if(i==x)
    printf("prime number");
    else
    printf("not prime number");
    return 0;
}



//Q9
int q9main()
{int year;
printf("enter year");
scanf("%d",&year);
if(year%100==0)
if(year%400==0)
printf("leap year");
else printf("notnleap year");
else if(year%4==0)
printf("leap year");
else
printf("not leap year");
return 0;}

//Q10
int q10main()
{int x,rem,sum=0;
printf("enter a number\n");
scanf("%d",&x);
for(sum=0;x>0;x=x/10){
 rem=x%10;
sum=sum+rem;}
printf("sum of digit is %d",sum);
return 0;}

//Q12
int main()
{int a,b,ch;
printf("enter two number\n");
scanf("%d%c%d",&a,&ch,&b);
if(ch=='+')
printf("addtition is %d",a+b);
else if(ch=='-')
printf("substraction is %d",a-b);
else if(ch=='*')
printf("multiplication is %d",a*b);
else if(ch=='/')
printf("division is %f",a/b);
return 0;
}


//Q12

/*
int main()
{int a,b,x;
printf("1.addition\n2.sunstraction\n3.multiplication\n4.division\n");
scanf("%d",&x);
   switch(x){
    case 1:
    scanf("%d %d",&a,&b);
    
printf("addtition is %d",a+b);
break;
    case 2:
    scanf("%d %d",&a,&b);
printf("substraction is %d",a-b);
break;
    case 3:
    scanf("%d %d",&a,&b);
printf("multiplication is %d",a*b);
break;
    case 4:
    scanf("%d %d",&a,&b);
printf("division is %f",a/b);}
return 0;
}
*/

