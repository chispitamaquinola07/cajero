#include <stdio.h>
int main(void){
    int b1=1;
    int cb1=0;
    int b5=5;
    int cb5=0;
    int b10=10;
    int cb10=0;
    int b20=20;
    int cb20=0;
    int b50=50;
    int cb50=0;
    int b100=100;
    int cb100=0;
    int total;
    int monto;
    printf ("inserte monto \n");
    scanf("%d", &monto);
    printf ("monto aceptado \n");
    for (total=0; total < monto ; total+=b100){
        cb100=cb100+1;
    }
    if (total>monto){
        total=total-100;
        cb100=cb100-1;
    }
    printf("billetes de 100 pesos usados:%d \n", cb100);
    for (total=total; total < monto; total+=b50){
        cb50=cb50+1;
    }
    if (total>monto){
        total=total-50;
        cb50=cb50-1;
    }
    printf("billetes de 50 pesos usados:%d \n", cb50);
    for (total=total; total < monto; total+=b20){
        cb20=cb20+1;
    }
    if (total>monto){
        total=total-20;
        cb20=cb20-1;
    }
    printf("billetes de 20 pesos usados:%d \n", cb20);
    for (total=total; total < monto; total+=b10){
        cb10=cb10+1;
    }
    if (total>monto){
        total=total-10;
        cb10=cb10-1;
    }
    printf("billetes de 10 pesos usados:%d \n", cb10);
    for (total=total; total < monto; total+=b5){
        cb5=cb5+1;
    }
    if (total>monto){
        total=total-5;
        cb5=cb5-1;
    }
    printf("billetes de 5 pesos usados:%d \n", cb5);
    for (total=total; total < monto; total+=b1){
        cb1=cb1+1;
    }
    if (total>monto){
        total=total-1;
        cb1=cb1-1;
    }
    printf("billetes de 1 peso usados: %d\n", cb1);
    if (total<20){
        printf ("monto inválido, intente de nuevo");
        return 1;
    }
    if (total>5000){
        printf ("monto invàlido, intente de nuevo");
        return 2;
    }
    
    
    return 0;
    
}