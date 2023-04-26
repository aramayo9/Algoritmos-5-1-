#include<stdio.h>
int numero; main()
{
	printf("ingrese un numero");
	scanf("%d", &numero);
	
	do		
	{
		if(numero%2 == 0)
		{
			numero=numero/2;
		}
		
		if(numero!=1 && numero%2 != 0)
		{
			numero=(numero*3)+1;
		}
		
		printf("sucesion= %d\n", numero);
	
	}while(numero!=1);
}
