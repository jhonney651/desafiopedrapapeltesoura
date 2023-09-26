#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaUsuario, escolhaMaquina;
    char reiniciar;

    do {
        srand(time(NULL));
        escolhaMaquina = rand() % 3;

        printf("\n--Bem-vindo ao Pedra, Papel e Tesoura--\n");
        printf("Escolha o que deseja jogar:\n0 - Pedra\n1 - Papel\n2 - Tesoura\n");
        scanf("%d", &escolhaUsuario);

        if (escolhaUsuario < 0 || escolhaUsuario > 2) {
            printf("Essa opção não existe, por favor selecione apenas um dos números válidos.\n");
            continue;
        }

        if (escolhaUsuario == escolhaMaquina) {
            printf("O jogo empatou!\n");
        } else if ((escolhaUsuario == 0 && escolhaMaquina == 2) || (escolhaUsuario == 1 && escolhaMaquina == 0) || (escolhaUsuario == 2 && escolhaMaquina == 1)) {
            printf("Você ganhou!\n");
        } else {
            printf("O maquina ganhou!\n");
        }

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &reiniciar);
    } while (reiniciar == 's' || reiniciar == 'S');

    return 0;
}
