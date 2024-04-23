#include <stdio.h>
#include <stdlib.h>

int cuadrado(int num){
   return num*num;

}
void cuadradoVoid(int num){
    printf("El cudrado del numero es %d\n", num*num);
}

void mostrarDatosVariables(int num){
  printf("Direccion:%p\n", &num);
  printf("Contenido:%d\n", num);

}

void invertir(int * a, int * b){
    int aux;
    aux= *a;
   *a = *b;
   *b= aux;
   
}

void orden(int *a, int *b){
    if (*b < *a)
    {
        invertir(a,b);
    }
    
}


int  main(){
    int n = 3;
    int *a= (int*)malloc(sizeof(int));
    int *b= (int*)malloc(sizeof(int));
    
    cuadradoVoid(n);
    mostrarDatosVariables(n);

    *a= 4;
    *b= 2;
    invertir(a,b);
    printf("A= %d  B= %d\n", *a,*b);

    orden(a,b);
    printf("A= %d B= %d\n", *a,*b);

    free(a);
    free(b);

    return 0;

}