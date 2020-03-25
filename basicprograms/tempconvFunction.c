#include<stdio.h>

void celsius(double input,double cels)
{
	cels=(input - 32)*(5/9);
	printf("Temperature in celsius is:%f\n",cels);
}

void fahrenheit(double fahr,double input)
{
	fahr=(input *(9/5))+32;
	printf("Temperature in fahrenheit is:%f\n",fahr);
}

int main()
{
	double input,fahr,cels;
	printf("Enter the temperature:\n");
	scanf("%f",&input);
	
	celsius(input,cels);
	fahrenheit(fahr,input);
	return 0;
}