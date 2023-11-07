#include<stdio.h>
int main()
{
    float start,final,unit,rate;
    printf("Enter the starting reading of meter \n");
    scanf("%f",&start);
    printf("Enter the ending reading value \n");
    scanf("%f",&final);
    unit=final-start;
    printf("Total units consumed %.2f\n",unit);
    
    if(unit>=200 && unit<=500)
    {
        rate=3.50*unit;
    }
    else if(unit>=100 && unit<=200)
    {
       rate=2.50*unit;
    }
    else if(unit<100)
    {
        rate=1.50*unit;
    }
    else 
    {
        printf("Invlaid input");
    }
    printf("Rate of units consumed %.2f\n",rate);
    
    return 0;
}