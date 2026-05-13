#include <cs50.h>
#include <stdio.h>
#include <string.h>

int power(float base,float exp);

int main()
{
    // choose a function

    printf("Here are funtion options +,-,*,/,^,inv \n");
    // give the choice to get function
    string func = get_string("Tell which function to use? ");

    // give numbers
    float x;
    float y;
    float z;
    if (strcmp(func, "inv")==0)
    {
        x = get_int("Whats the number? ");
    }
    else {
        x = get_int("Whats the first number? ");
        y = get_int("Whats the second number? ");
    }

    // add func
    if (strcmp(func, "+")==0)
    {
        z = x + y;
        printf("%f\n",z);

    }

    // sub func
    if (strcmp(func, "-")==0)
    {
        z = x - y;
        printf("%f\n",z);
    }

    // mul func
    if (strcmp(func, "*" )==0)
    {
        z = x * y;
        printf("%f\n",z);

    }

    // div func
    if (strcmp(func, "/") ==0 )
    {
        z = x / y;
        printf("%f\n",z);

    }

    // power func
    if (strcmp(func, "^")==0)
    {
        z =  power(x , y);
        printf("%f\n",z);

    }

    //inv func
    if (strcmp(func, "inv")==0)
    {
        z =  1/x;
        printf("%f\n",z);

    }
}


int power(float base,float exp)
{
    float result = 1;

    for (int i =0; i<exp ; i++)
    {
        result=result*base;
    }
    return result;

}
