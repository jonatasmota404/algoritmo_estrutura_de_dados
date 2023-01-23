#include <stdio.h>

int busca_binaria(int* arr, int tamanho, int elemento) {
    int esquerda = 0;
    int direita = tamanho - 1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (arr[meio] == elemento) {
            return meio;
        }
        if (arr[meio] < elemento) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1;
}


int main(){
    int array[20];
    for (int i = 0; i < 20; i++)
    {
        array[i] = i;
    }
    
    int posicao = busca_binaria(array, sizeof(array)/sizeof(int), 3);
    printf("%d", posicao);
    return 0;
}