#include <stdio.h>

int main(){
    float salario=0,inss=0,ir=0,total=0;

    printf("Digite seu salario bruto: ");
    scanf("%f",&salario);
//----------------CALCULO TAIXA INSS---------------------{
    if (salario<=1693.72){
        inss=salario*0.08;

    }else if (salario>=1693.73 && salario<=2822.90){
        inss=salario*0.09;

    }else if (salario>=2822.91 && salario<=5646,80){
        inss=salario*0.11;

    }else{
        inss=621.04;
    }
//--------------------------------------------------------}    
    if (salario<=1903.98){
        ir=0.0;
        printf("\n\nNao possui taxa de IR\n");

    }else if (salario>=1903.99 && salario<=2826.65){
        ir=salario*0.075;
    }else if (salario>=2826.66 && salario<=3751.05){
        ir=salario*0.15;
    }else if (salario>=3751.06 && salario<=4664.68){
        ir=salario*0.225;
    }else{
        ir=salario*0.275;
    }
    
    total=salario-(ir+inss);

    printf("INSS: %2.f\n",inss);
    printf("IR: %2.f\n",ir);
    printf("Seu salario com os descontos do INSS e IR e: %2.f\n",total);

}
