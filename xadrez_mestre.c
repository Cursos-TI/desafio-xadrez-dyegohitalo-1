// Inclusão das bibliotecas padrão:
// stdio.h -> necessária para funções de entrada/saída (printf, etc.)
// stdlib.h -> biblioteca padrão de utilidades gerais (No momento ainda não usada, só para manter um padrão).
#include <stdio.h>
#include <stdlib.h>

// Faculdade Estácio de Sá.
// Aluno: Dyego Hitalo da Silva Cruz Matos.
// Desafio: Xadrez Nível Mestre.

// Obs.:
// A peça Bispo se move 5 casas (para cima e a direita) simulando uma diagonal nesse desafio.
// A peça Rainha se move 8 casas para a esquerda nesse desafio.
// A peça Torre se move 5 casas para direita nesse desafio.
// A peça Cavalo se 2 Casas Para Cima e Uma Para a Direita (Movimento em L).

// Função para mover a peça Torre.
// Utiliza recursividade para imprimir a direção o número de vezes desejado.
void moverTorre(int casas)
{
// Caso base: a recursão só continua se o número de casas for maior que 0.
// Verifica se ainda há casas para mover.
    if (casas > 0)
    {
        printf("Direita \n"); // Imprime o movimento da peça Torre para a direita.
        moverTorre(casas - 1); // Chamada recursiva: a função chama a si mesma passando (casas - 1).
        // Isso garante que o loop pare quando 'casas' chegar a 0.
    }
}
// Função para mover a peça Rainha.
// Utiliza recursividade para imprimir a direção o número de vezes desejado.
void moverRainha(int casas)
{
    // Caso base: a recursão só continua se o número de casas for maior que 0.
    // Verifica se ainda há casas para mover.
    if (casas > 0)
    {
        printf("Esquerda... \n"); // Imprime o movimento da peça Rainha para a esquerda.
        moverRainha(casas - 1); // Diminui o contador de casas a cada execução.
    }
}
// Função para mover a peça Bispo.
// Utiliza recursividade para imprimir a direção o número de vezes desejado.
void moverBispo(int casas)
{
    // Reinicializa 'i' para 0 novamente.
    int i = 0;
    // Estrutura 'do...while': garante que o bloco seja executado pelo menos uma vez,
    // e repete enquanto a condição ao final (i < 5) for verdadeira.
    do
    {
        // Estrutura 'switch' que escolhe a ação com base no valor atual de 'i'.
        switch (i)
        {
        case 0:
            // Quando i vale 0, imprime movimento para cima.
            printf("Cima... \n");
            break; // Interrompe a execução do switch para não cair nos casos seguintes.
        case 1:
            // Quando i vale 1, imprime movimento para a direita.
            printf("Direita... \n");
            break;
        case 2:
            // Quando i vale 2, imprime movimento para cima novamente.
            printf("Cima... \n");
            break;
        case 3:
            // Quando i vale 3, imprime movimento para a direita novamente.
            printf("Direita... \n");
            break;
        case 4:
            // Quando i vale 4, imprime o último movimento para cima.
            printf("Cima... \n");
            break;
        }
        // Incrementa 'i' para avançar ao próximo caso na próxima iteração do loop.
        i++;

    } while (i < casas); // Condição de permanência do loop do-while.
}

// Função para mover a peça Cavalo.
// Utiliza recursividade para imprimir a direção o número de vezes desejado.
// Função que simula o movimento do cavalo usando loops for.
void moverCavalo(int casas) {
    // Loop Externo: Controla a execução do movimento completo do cavalo.
    for (int i = 1; i <= casas; i++) {
        
        // Loop Interno: Responsável pelos movimentos verticais (Cima).
        for (int j = 1; j <= 10; j++) { // Limite alto proposital para usar o break.
            
            // Exemplo de CONTINUE: Se j for ímpar e não for o primeiro movimento, 
            // poderíamos saltar, mas aqui vamos apenas ilustrar a sintaxe.
            if (j > 2) {
                // BREAK: Interrompe o loop interno após atingir 2 movimentos para cima.
                break; 
            }
            
            if (j == 0) {
                // CONTINUE: Salta o restante do código deste loop e volta para o próximo 'j'.
                continue;
            }

            printf("Cima...\n"); // Avanca Para Cima Duas Vezes.
            // Imprime Cima... com quebra de linha.
        }

        // Após os movimentos para cima, fazemos o movimento lateral.
        printf("Direita...\n");

        // BREAK no loop externo: Garante que o cavalo faça apenas UM "L" completo.
        // Se não tivéssemos isso, ele repetiria o "L" com base no parâmetro 'casas'.
        break; 
    }
}
// Função principal do programa, ponto de entrada da execução em C.
int main()
{
    // Linha decorativa criada para organizar e separar visualmente cada peça do xadrez que movimentar.
    printf("-------------------------------------------------\n");
    // Título do cabeçalho que indica a simulação do movimento da Torre (5 casas).
    printf(" Movimente a Torre do Jogo de Xadrez em 5 Casas! \n");
    // Linha de separação decorativa.
    printf("-------------------------------------------------\n");
    // Chama a função da Torre para mover 5 casas para a Direita.
    moverTorre(5);

    // Linha decorativa criada para organizar e separar visualmente cada peça do xadrez que movimentar.
    printf("-------------------------------------------------\n");
    // Título do cabeçalho que indica a simulação do movimento da Rainha (8 casas).
    printf(" Movimente a Rainha do Jogo de Xadrez em 8 Casas! \n");
    // Linha de separação decorativa.
    printf("-------------------------------------------------\n");
    // Chama a função da Rainha para mover 8 casas para a Esquerda.
    moverRainha(8);

    // Linha decorativa criada para organizar e separar visualmente cada peça do xadrez que movimentar.
    printf("-------------------------------------------------\n");
    // Título do cabeçalho que indica a simulação do movimento do Bispo (5 casas).
    printf(" Movimente o Bispo de Jogo de Xadrez em 5 Casas! \n");
    // Linha de separação decorativa.
    printf("-------------------------------------------------\n");
    // Chama a função da Rainha para mover 5 casas (para cima e a direita) simulando uma diagonal nesse desafio.
    moverBispo(5);

    // Linha decorativa criada para organizar e separar visualmente cada peça do xadrez que movimentar.
    printf("-------------------------------------------------\n");
    // Título do cabeçalho que indica a simulação do movimento do Cavalo (2 Casas Para Cima e 1 Casa Para a Direita).
    printf(" Movimente o cavalo do Jogo de Xadrez em L! \n");
    // Linha de separação decorativa.
    printf("-------------------------------------------------\n");
    // Chama a função passando o valor 3 (que define os limites dos loops).
    moverCavalo(3);

    // Linha decorativa criada para organizar e separar visualmente cada peça do xadrez que movimentar.
    printf("-------------------------------------------------\n");
    // Mensagem indicando o término da simulação e que acabaram-se os movimentos das peças.
    printf(" Acabaram-se os movimentos... \n");
    // Linha de separação decorativa.
    printf("-------------------------------------------------\n");
    // Retorna 0 indicando que o programa finalizou com sucesso.
    return 0;
}
