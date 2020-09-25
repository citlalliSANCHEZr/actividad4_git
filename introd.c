#include<stdio.h>

void mostrar(int n,char cadena[])
{
    for(size_t i=0;i<n;i++)
    {
        printf("%s",cadena);
    }
}

void capturarEnteros()
{
    int enteros[5];
    float promedio;
    int suma=0;
    for(size_t i =0;i<5;i++)
    {
        scanf("%i",&enteros[i]);
    }
    for(size_t i =0;i<5;i++)
    {
        printf("%i\n",enteros[i]);
    }
    for(size_t i =0;i<5;i++)
    {
        suma=suma+enteros[i];
    }
   printf("suma = %i\n",suma);
   printf("promedio = %.2f\n",suma/5.0);

}
int main()
{
    int op;
    char cadena[20];
    int n;
    do{
        printf("1)capturar enteros\n");
        printf("2)mostrar cadena n veces\n");
        printf("3)agregar personaje\n");
        printf("4)mostrar personaje\n");
        printf("0)salir\n");
        scanf("%i",&op);
        fflush(stdin);
        switch(op)
        {
            case 1:
                capturarEnteros();
                break;
            case 2:
                printf("escribe la cadena de hasta 20 caracteres\n");
                fflush(stdin);
                fgets(cadena,sizeof(cadena),stdin);
                printf("n:\n");
                scanf("%i",&n);
                mostrar(n,cadena);

                break;
            case 3:
                

                break;
            case 4:
                
                break;
            default:
                break;

        }

    }while(op!=0);
}
