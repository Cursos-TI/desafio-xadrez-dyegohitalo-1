// Inclusão das bibliotecas padrão:
// stdio.h -> necessária para funções de entrada/saída (printf, etc.)
// stdlib.h -> biblioteca padrão de utilidades gerais (No momento ainda não usada, só para manter um padrão).
#include <stdio.h>
#include <stdlib.h>

// Faculdade Estácio de Sá.
// Aluno: Dyego Hitalo da Silva Cruz Matos.
// Desafio: Xadrez Nível Aventureiro.

// Obs.:
// A peça Bispo se move 5 casas (para cima e a direita) simulando uma diagonal nesse desafio.
// A peça Rainha se move 8 casas para a esquerda nesse desafio.
// A peça Torre se move 5 casas para direita nesse desafio.
// A peça Cavalo se 2 Casas Para Cima e Uma Para a Direita (Movimento em L).

// Função principal do programa, ponto de entrada da execução em C.
int main()
{
    // Declaração da variável inteira 'i' e inicialização com 0.
    // Ela servirá como contador nas estruturas de repetição seguintes.
    int i = 0;
    int movCavalo = 1; 
    // Declaração de outra variável inteira movCavalo, inicializada com 1.
    // Essa variável controlará quantas vezes o bloco do 'while' será executado.

    // Linha decorativa criada para organizar e separar visualmente cada peça do xadrez que movimentar.
    printf("-------------------------------------------------\n");
    // Título do cabeçalho que indica a simulação do movimento do Cavalo (2 Casas Para Cima e 1 Casa Para a Direita).
    printf(" Movimente o cavalo do Jogo de Xadrez em L! \n");
    // Linha de separação decorativa.
    printf("-------------------------------------------------\n");

    // Início do laço 'while'. A condição é movCavalo--, ou seja:
    // primeiro usa o valor atual de movCavalo (1) como condição, depois decrementa movCavalo para 0.
    // Como 1 é verdadeiro (não-zero), o corpo do while será executado uma única vez.

    while (movCavalo--) // Enquanto a variável movCavalo for diferente de zero, decrementa após cada iteração.
    { 
    // Estrutura de repetição com pós-decremento (movCavalo--):
    // Primeira verificação: movCavalo = 1, condição verdadeira (Entra no loop).
    // Após a verificação: movCavalo é decrementado para 0
    // Próxima verificação: movCavalo = 0, condição falsa (Encerra o loop).
    // Observação: O bloco while executa EXATAMENTE UMA VEZ.

        for (int i = 0; i < 2; i++)
        {
        // Início de um laço 'for' interno, com uma variável 'i' própria (local ao for).
        // Declara 'i' como 0, repete enquanto 'i < 2' e incrementa 'i' a cada iteração.
        // Loop for com variável local 'i' (escopo restrito a este bloco):
        // i = 0, Primeira iteração.
        // i = 1, Segunda iteração.
        // i = 2, Condição falsa, encerra o for.
        // Observação: Executa o bloco interno 2 vezes.

            printf("Cima... \n"); // Avanca Para Cima Duas Vezes.
            // Imprime Cima... com quebra de linha.
            // Como está dentro do for (2 iterações), será exibido 2x.
            // Executa duas vezes (quando i=0 e i=1).
        }

        printf("Direita... \n"); // Avanca Para Direita Uma Vez.
        // Imprime Direita...  com quebra de linha APÓS o for terminar.
        // Executa uma única vez após o término do laço 'for'.
    }

    // Linha decorativa criada para organizar e separar visualmente cada peça do xadrez que movimentar.
    printf("-------------------------------------------------\n");
    // Título do cabeçalho que indica a simulação do movimento da Torre (5 casas).
    printf(" Movimente a Torre do Jogo de Xadrez em 5 Casas! \n");
    // Linha de separação decorativa.
    printf("-------------------------------------------------\n");

    // Estrutura 'for' para executar 5 iterações.
    // Observação: a variável 'i' é declarada novamente aqui (int i = 0),
    // criando uma variável de escopo local que "sombreia" (shadow) a 'i' global do main.
    for (int i = 0; i < 5; i++)
    {
        // Imprime a direção do movimento da Torre a cada passo.
        printf("Direita... \n");
    }

    // Linha decorativa criada para organizar e separar visualmente cada peça do xadrez que movimentar.
    printf("-------------------------------------------------\n");
    // Título do cabeçalho que indica a simulação do movimento da Rainha (8 casas).
    printf(" Movimente a Rainha do Jogo de Xadrez em 8 Casas! \n");
    // Linha de separação decorativa.
    printf("-------------------------------------------------\n");

    // Reinicializa a variável 'i' original para 0 antes do próximo loop.
    i = 0;
    // Estrutura 'while': executa o bloco enquanto a condição (i < 8) for verdadeira.
    while (i < 8)
    {
        // Imprime a direção do movimento da Rainha.
        printf("Esquerda... \n");
        // Incrementa 'i' em 1 para controlar o número de repetições e evitar loop infinito.
        i++;
    }

    // Linha decorativa criada para organizar e separar visualmente cada peça do xadrez que movimentar.
    printf("-------------------------------------------------\n");
    // Título do cabeçalho que indica a simulação do movimento do Bispo (5 casas).
    printf(" Movimente o Bispo de Jogo de Xadrez em 5 Casas! \n");
    // Linha de separação decorativa.
    printf("-------------------------------------------------\n");

    // Reinicializa 'i' para 0 novamente.
    i = 0;
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

    } while (i < 5); // Condição de permanência do loop do-while

    // Linha decorativa criada para organizar e separar visualmente cada peça do xadrez que movimentar.
    printf("-------------------------------------------------\n");
    // Mensagem indicando o término da simulação e que acabaram-se os movimentos das peças.
    printf(" Acabaram-se os movimentos... \n");
    // Linha de separação decorativa.
    printf("-------------------------------------------------\n");

    // Retorna 0 ao sistema operacional, indicando que o programa foi finalizado com sucesso.
    return 0;
}
