#include <stdio.h>
#include <locale.h>



int main(){

setlocale(LC_ALL,"Portuguese");

    int minhaIdade;
    int paiIdade;
    int maeIdade;

    minhaIdade = 15;
    paiIdade = 40;
    maeIdade = 47;

printf("Eu tenho %d anos\n Minha mãe tem %d anos\n Meupai tem %d anos", minhaIdade, maeIdade,paiIdade);
}

//printf("Minha idade é=%i. Idade do Pai é = %i Idade da Mãe é =%i", minhaIdade);