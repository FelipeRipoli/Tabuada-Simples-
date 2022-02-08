#include <stdio.h>

int main(){
    int cont, valor, multiplica;
    int cont2 = 1;

    while (cont2 == 1) {
        printf("Digite um valor entre 1 e 20 para descobrir sua tabuada: ");
        scanf("%d", &valor);

        if(valor>=1 && valor <=20){
            for(cont=1; cont<=10; cont++){
                multiplica = valor * cont;
                printf("%d x %d = %d \n",valor,cont,multiplica);
            }

        }else{
            printf("Valor informado não é válido.");
            cont2=0;
        }
    }

    return 0;
}
