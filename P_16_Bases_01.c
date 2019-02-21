#include<stdio.h>


void convertir(n, b)
{
	int r, i;
	int A[30];
	printf("\n\tEl numero convertido a base %d es: \n",b);
	printf("\t\t");
	i=0;
	do{
		r = n % b;
		n = n / b;
		A[i]=r;
		i++;
	}while(n>=b);
	A[i]=n;
	if(b==16)
	{
		for(i=i; i>=0; i--)
		{
			if(A[i]==10)
			{
				printf(" A");
			}
			else if(A[i]==11)
			{
				printf(" B");
			}
			else if(A[i]==12)
			{
				printf(" C");
			}
			else if(A[i]==13)
			{
				printf(" D");
			}
			else if(A[i]==14)
			{
				printf(" E");
			}
			else if(A[i]==15)
			{
				printf(" F");
			}
			if(A[i]<10)
			{
				printf(" %d",A[i]);
			}
		}
	}
	if(b==20)
	{
		for(i=i; i>=0; i--)
		{
			if(A[i]==10)
			{
				printf(" A");
			}
			else if(A[i]==11)
			{
				printf(" B");
			}
			else if(A[i]==12)
			{
				printf(" C");
			}
			else if(A[i]==13)
			{
				printf(" D");
			}
			else if(A[i]==14)
			{
				printf(" E");
			}
			else if(A[i]==15)
			{
				printf(" F");
			}
			else if(A[i]==16)
			{
				printf(" G");
			}
			else if(A[i]==17)
			{
				printf(" H");
			}
			else if(A[i]==18)
			{
				printf(" I");
			}
			else if(A[i]==19)
			{
				printf(" J");
			}
			else if(A[i]==20)
			{
				printf(" k");
			}
			if(A[i]<10)
			{
				printf(" %d",A[i]);
			}
		}
	}
	for(i=i; i>=0; i--)
	{
		printf(" %d",A[i]);
	}
	
}


int main()
{
	system("color f4");
	printf("\n\t\t\tPrograma 16 Bases");
	printf("\n\t\t\t_________________");
	printf("\n\t\tEste programa te ayudara a transformar");
	printf("\n\t\tun numero entero en base 10 a cualquier");
	printf("\n\t\tbase que escojas del menu.\n\n\n");

	system("pause");
	system("cls");
	int n, b, o, u;
	do{
	
		do{
			printf("\tQue numero quieres converir?\n\t");
			scanf("%d",&n);
			while(n<=0)
			{
				printf("\tPor lo menos debe ser mayor que cero.\n");
		 		printf("\tQue numero quieres converir?\n\t");
			    scanf("%d",&n);
			}
			do{	
				printf("\tA que base lo deseas convertir?\n");
				printf("\t2\t5\t8\t16\t20\n\t");
				scanf("%d",&b);
				while(b!=2 && b!=5 && b!=8 && b!=16 && b!=20)
				{
					printf("Esta opcion no esta en el menu.\n");
					printf("Intentalo de nuevo.\n");
					printf("\tA que base lo deseas convertir?\n");
				    printf("\t2\t5\t8\t16\t20\n\t");
				    scanf("%d",&b);
				}
				printf("\tEl numero en base 10 es:\n");
				printf("\t\t%d",n);
				convertir(n, b);
				printf("\nDeseas hacer otra convercion?.\n");
				printf("\tSi=1\tNo=0\t");
			    scanf("%d",&o);
				while (o!=0 && o!=1)
				{
				    printf("Opcion no valida intente de nuevo.\n");
				    printf("Desea hacer otra convercion?\n");
				    printf("\tSi=1\tNo=0\t");
				    scanf("%d",&o);
				}
				u=0;
				if (o==1)
			    {
			    	
				    printf("Desea introducir nuevos datos o continuar con los mismos?\n");
				    printf("\tNuevos=1\tMismos=2\t");
				    scanf("%d",&u);
				    while (u!=1 && u!=2)
				    {
				    	printf("Opcion no valida intente de nuevo.\n");
				    	printf("\tNuevos=1\tMismos=2\t");
				        scanf("%d",&u);
				    }
			    }
			    system("cls");
		    }while(u==2);
		}while(u==1);
	}while(0==1);
	return 0;
}
