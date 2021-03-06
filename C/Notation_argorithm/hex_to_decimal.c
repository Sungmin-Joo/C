#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
//Syntax to prevent "scanf" errors
#include <stdio.h>
#include <math.h>


int hex_to_deciaml(char A);

void main(void) {
	int decimal = 0;
	char hex[20] = { 0 };
	int val, i;
	printf("Enter the hex number :");
	gets(hex);

	val = strlen(hex) - 1;
	for (i = val; i >= 0; i--)
	{
		decimal += (hex_to_deciaml(hex[i]) * pow(16.0, val - i));
		//The process of converting from hex to decimal.
	}

	printf("---------------result----------------\n");
	printf("%d\n", decimal);
	printf("-------------------------------------\n");

	return 0;
}

int hex_to_deciaml(char A)
{
	switch (A)
	{
	case 'F':
	case 'f':
		return 15;
		break;
	case 'E':
	case 'e':
		return 14;
		break;
	case 'D':
	case 'd':
		return 13;
		break;
	case 'C':
	case 'c':
		return 12;
		break;
	case 'B':
	case 'b':
		return 11;
		break;
	case 'A':
	case 'a':
		return 10;
		break;
	default:
		return A - 48;
		break;
		//"A - 48" means "N - 48". if cha A = '3', then "A - 48" is "51 - 48". 
	}
}
8CD3
---------------result----------------
1019091
-------------------------------------
*/