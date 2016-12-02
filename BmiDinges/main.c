#include <stdio.h>
#include <stdlib.h>

float Calculate(float Gewicht, float Lengte)
        {
            float bmi = Gewicht / (Lengte * Lengte);
            bmi = roundf(bmi*10.0f)/10.0f;
            return bmi;
        }

int main()
{
    float Gewicht;
    float Lengte;
    float bmi;
    int Leeftijd;
    char naam[24];
    int repeatAnswer = 1;


    repeatAll:
while(1){//repeat until death
    printf("Wat is uw naam? \n");
    scanf(" %s", &naam);
    printf("hoe oud ben je %s ? \n", naam);
    scanf("%d", &Leeftijd);
    printf("Wat is uw gewicht in kg ? \n");
    scanf("%f", &Gewicht);
    printf("hoe lang bent u in meters? \n");
    scanf("%f", &Lengte);

    bmi = Calculate(Gewicht, Lengte);

    printf("%s je bent %d jaar oud en je bmi is %f",naam,Leeftijd, bmi);
    printf("\n");
    getchar();

    if(bmi < 18.5){
        printf("%s dit is een te laag gewicht voor jou", naam);
    }
    if(bmi > 18.5 && bmi < 30){
        printf("%s jij hebt echt een bloed mooi gewicht", naam);
    }
    if(bmi > 30 && bmi < 40){
        printf("%s jij bent echt een dikke gibz", naam);
    }
    if(bmi > 40){
        printf("%s ik hoop dat je van een fucking trap af valt en je er recht doorheen valt vies vuil kanker zwijn",naam);
    }
    printf("\n");
    printf("wilt u nog een bmi uitrekenen y(1)/n(0)? \n");
    scanf("%d", &repeatAnswer);
    if(repeatAnswer == 0){
         //
            break;
        }
    }
}


