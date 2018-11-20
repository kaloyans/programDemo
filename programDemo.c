#include <stdio.h>
#include <conio.h>

int main()

{ int k,m;
  float x,y,z;
  
 do
   {printf("Enter x = ");
  scanf("%f",&x);
}
while (x>=4 && x>=34);
 
   if (x<=10)
   {y=3*x*x*x-25*x-3.567;
   printf("\n y = %f",y);
}

if (x>=10 && x<25) 
{ y=31*(x*x*x*x)-5*x-33.567;
printf("\n y = %f",y);
}

  if (x>25)
  { y=x*x-2.675*x;
printf(" \n y = %f",y);
}

for (k=1;k<=30;k=k+3)
for (m=1;m<=4;m++)

{
    z = 4*y*(x*x)+ (4*k) + m;
  printf("\t z=%f \n for values of: \n x=%f \n y=%f \n k=%d \n m=%d \n", z, x, y, k, m);
}


getch();
return 0;

}
