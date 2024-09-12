#include<stdio.h>

typedef struct date_compare{
    int dd;
    int mm;
    int yyyy;
}date;

int compare(date d1, date d2){

if(d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd ){

    return 0;
}

if (d1.yyyy > d2.yyyy)
{
   
    return 1;
}
else if (d1.yyyy < d2.yyyy)
{
    
    return -1;
}
if (d1.mm > d2.mm)
{
   
    return 1;
}
else if (d1.mm < d2.mm)
{
   
    return -1;
}
if (d1.dd > d2.dd)
{
   
    return 1;
}
else if (d1.dd < d2.dd)
{
   
    return -1;
}
 return 0;
}

int main () {
    date d1 = {23,06,2000};
    date d2 = {23,12,2000};

    compare(d1,d2);

    printf("%d \n", compare(d1,d2));
 
    return 0;
}