/*
 * Este programa esta hecho para definir tu porcentaje de
 * grasa dependiendo tu altura y peso
 *
 * Autora: Yasmin Alvarado Lee
 * correo: yazminalvlee@gmail.com
 * fecha:14 de septiembre del 2018
 */


#include <stdio.h>

//Aqui calculamos las medidas metricas que es el kilogramo para peso y el metro para altura
double Calculate_metric_IBM(double kg, double m){
    double result;
    result= kg/(m*m);//OPERACIONES
    return  result;
}
//Aqui utlizaremos lo que es la libra para el peso y los pies de altura
double Calculate_imperial_IBM(double pound, double ft){
    double result,kg,m;
    kg=pound*0.453592;
    m=ft*0.3048;
    result=kg/(m*m);//OPERACIONES
    return  result;
}
//Aqui utilizaremos las libras para el peso y pulgadas para la altura
double Calculate_imperial_IBM_2(double pound, double inc){
    double result,kg,m;
    kg=pound*0.453592;
    m=inc*12.00;
    result=kg/(m*m);//OPERACIONES
    return  result;
}


double IBM_Categories(double IBM){
    if (IBM<18.50){
    printf("Algo no anda bien..Ve al doctor pesas muy poco");
    }
    else if(IBM>= 18.50 && IBM<25.00){
    printf("Todo en orden ;)");
    }
    else if (IBM>=25.00 && IBM<30.00){
    printf("AGUAS! TIENES SOBREPESO!");
    }
    else if (IBM>=35.00 && IBM<40){
    printf("Tienes obesidad :(, CUIDATEE!!!");
    }
}
int main() {
    unsigned short int option=0;
    double w=0.0, h=0.0, IBM;

    printf("Te ayudaremos a sacar tu BMI");
    printf("¿Que sistema quieres usar? \n  1 Para usar KG Y M \n  2 Para usar PIES(FT) y LIBRAS(POUND) \n  3 Para usar PULGADAS(IN) Y LIBRAS(POUND) ) \n");
    scanf("%i",&option);
    switch(option){
        case 1:
            do {
                printf("\nDime tu altura: ");
                scanf("%lf", &h);
            }while(h<=0);
                 printf("\nDime tu peso: ");
                 scanf("%lf",&w);
                 IBM=Calculate_metric_IBM(w,h);
                 printf("\nYour IBM is: %lf \n",IBM);
                 IBM_Categories(IBM);
            break;

        case 2:
            do {
                printf("\nDime tu altura: ");
                scanf("%lf", &h);
            }while(h<=0);
            printf("\nDime tu peso: ");
            scanf("%lf",&w);

            IBM=Calculate_imperial_IBM(w,h);
            printf("\nYour IBM is: %lf \n",IBM);
            IBM_Categories(IBM);
            break;

        case 3:
            do {
                printf("\nDime tu altura: ");
                scanf("%lf", &h);
            }while(h<=0);
            printf("\nDime tu peso: ");
            scanf("%lf",&w);

            IBM=Calculate_imperial_IBM_2(w,h);
            printf("\nYour IBM is: %lf \n",IBM);
            IBM_Categories(IBM);
            break;

        default:
            printf("ERROR");
            break;

    }

    return 0;
}