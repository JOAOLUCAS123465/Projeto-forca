#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void exibirpalavra(char palavra[], int tamanho){
    int i;
    printf("[");
    for (i = 0; i < tamanho; i++){
        printf("%c", palavra[i]);
    }
    printf("]\n");
}

int chutarletra(const char resposta[], char palavra[], int tamanho, char letra){
    int i;
    int acertou = 0;
    for(i = 0; i < tamanho; i++){
        if(resposta[i] == letra){
            palavra[i] = letra;
            acertou = 1;
        }
    }
    return acertou;
}

int main(){
    const char* palavras[] = {"teclado", "monitor", "algoritmo", "processador", "programacao", 
                                "desktop", "hardware", "internet", "firewall", "software"};
    int totaldepalavras = 10;
    int acertos = 0, tentativas = 5;
    
    srand(time(NULL));
    const char* resposta = palavras[rand() % totaldepalavras];
    int tamanho = strlen(resposta);
    char palavra[tamanho + 1], letrastentadas[26] = {'\0'}, letra;
    int i, x = 0;
    
    printf("Bem-vindo ao Jogo da Forca!\n");
    printf("Tente adivinhar a palavra secreta uma letra de cada vez.\n");
    printf("Boa sorte!\n");

    for (i = 0; i < tamanho; i++){
        palavra[i] = '-';
    }
    palavra[tamanho] = '\0'; 

    exibirpalavra(palavra, tamanho);
    
    while(tentativas > 0 && strcmp(palavra, resposta) != 0){
        printf("Letras ja digitadas: ");
        for(i = 0; i < 26; i++){
            if(letrastentadas[i] != 0){
                printf("%c ", letrastentadas[i]);
            }
        }
        printf("\n");
        printf("Numero de tentativas: %d \n", tentativas);
        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        letra = tolower(letra);
        
        if (!isalpha(letra)){
            printf("Entrada invalida. Por favor, digite uma letra.\n");
            continue;
        }
        
        if (strchr(letrastentadas, letra)){
            printf("Você ja tentou essa letra!\n");
            continue;
        }
        
        letrastentadas[x] = letra;
        x++;
        
        if(chutarletra(resposta, palavra, tamanho, letra) == 0){
            tentativas--;
        }
        exibirpalavra(palavra, tamanho);
    }
    
    if(strcmp(palavra, resposta) == 0){
        printf("Parabens! Voce ganhou!\n");
    } else {
        printf("Que pena! Voce perdeu! A palavra era '%s'.\n", resposta);
    }

    return 0;
}

