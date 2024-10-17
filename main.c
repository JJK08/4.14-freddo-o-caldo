#include <stdio.h>

int main(){
    float temperatura;
    int aumenta=0;
    int diminuisce=0;
    float temp_preccedente;
    int giorno;
    for(giorno=0;giorno<10;giorno++) {
        printf("inserisci la temperatura del giorno %d: ",giorno+1);
        scanf("%f",&temperatura);
        if(temperatura>temp_preccedente) {
            aumenta++;
        }else {
            diminuisce++;
        }
        temp_preccedente=temperatura;
    }
    printf("numero di aunti %d\n",aumenta);
    printf("numero di diminuzione %d\n ",diminuisce);
    return 0;
}
