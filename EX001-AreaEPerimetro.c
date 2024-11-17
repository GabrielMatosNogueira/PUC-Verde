#include <stdio.h>
#include <math.h>
float CalculoArea(float);
float CalculoPerimetro(float);
int main(){
    float raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("O valor da area do circulo e: %.2f\n", CalculoArea(raio));
    printf("O valor do perimetro do circulo e: %.2f", CalculoPerimetro(raio));
    return 0;
}

   float CalculoArea(float raio){
        return 3.1415 * pow(raio,2);
   }

   float CalculoPerimetro(float raio){
        return raio * 2 * 3.1415;
   }