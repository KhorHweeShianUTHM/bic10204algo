#include<stdio.h>

int main(){
	
	float value,convert;
	char select;
	
	printf("=================================");
	printf("\n=\tA.Inch to Centimetre\t=");
	printf("\n=\tB.Feet to Centimetre\t=");
	printf("\n=\tC.Feet to Meter\t\t=");
	printf("\n=\tD.Yard to Meter\t\t=");
	printf("\n=\tE.Mile to Kilometre\t=");
	printf("\n=\tF.Ounce to Gram\t\t=");
	printf("\n=\tG.Round to Kilogram\t=");
	printf("\n=\tH.Ton to Kilogram\t=");
	printf("\n=\tI.Pint to Liter\t\t=");
	printf("\n=\tJ.Quart to Liter\t=");
	printf("\n=\tK.Gallon to Liter\t=");
	printf("\n=================================");
	
	printf("\n\nPlease enter choice to conversion (A - K): ");
	scanf("%c",&select);
	
	switch (select){
	case 'A':
	case 'a':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 2.54;
	printf("\n\n%.2f Inches = %.2f Centimetres",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	case 'B':
	case 'b':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 30.48;
	printf("\n\n%.2f Feet = %.2f Centimetres",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	case 'C':
	case 'c':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 0.3048;
	printf("\n\n%.2f Feet = %.2f Meters",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	case 'D':
	case 'd':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 0.9144;
	printf("\n\n%.2f Yards = %.2f Meters",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	case 'E':
	case 'e':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 1.609344;
	printf("\n\n%.2f Miles = %.2f Kilometres",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	case 'F':
	case 'f':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 28.349523;
	printf("\n\n%.2f Ounces = %.2f Grams",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	case 'G':
	case 'g':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 0.453592;
	printf("\n\n%.2f Pounds = %.2f Kilograms",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	case 'H':
	case 'h':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 907.18474;
	printf("\n\n%.2f Tons = %.2f Kilograms",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	case 'I':
	case 'i':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 0.473163;
	printf("\n\n%.2f Pints = %.2f Litters",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	case 'J':
	case 'j':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 0.946326;
	printf("\n\n%.2f Quarts = %.2f Liters",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	case 'K':
	case 'k':
	printf("\n\nPlease enter value to convert: ");
	scanf("%f",&value);
	convert = value * 3.785306;
	printf("\n\n%.2f Gallons = %.2f Liters",value,convert);
	printf("\n\n-------- END OF PROGRAM --------");
	break;
	
	default:
		printf("\nYou enter the wrong choice!");
		printf("\n\n-------- END OF PROGRAM --------");
	}
	return 0;
}