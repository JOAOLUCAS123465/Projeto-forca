Jogo da Forca
Este repositório contém uma implementação do Jogo da Forca em C. O objetivo do jogo é adivinhar uma palavra secreta, tentando letras uma a uma. 
O jogador tem um número limitado de tentativas para acertar a palavra.


Regras do Jogo
O jogo escolhe aleatoriamente uma palavra de uma lista predefinida.
O jogador deve tentar adivinhar a palavra, letra por letra.
A cada erro, o número de tentativas diminui.
O jogo termina quando o jogador adivinha a palavra ou quando as tentativas se esgotam.
O jogador pode ver quais letras já foram tentadas.
Como Jogar
O jogo começa com uma palavra secreta e o jogador deve tentar adivinhar a palavra uma letra de cada vez.
O número de tentativas é limitado a 5.
Se o jogador acertar a letra, ela é revelada na palavra. Caso contrário, uma tentativa é perdida.
O jogo exibe as letras já tentadas e o número de tentativas restantes.
Quando o jogador adivinhar a palavra, ele ganha o jogo. Caso contrário, ele perde e a palavra secreta é revelada.

Como Rodar o Jogo
Para rodar o jogo, siga os seguintes passos:

Pré-requisitos
Certifique-se de ter um compilador C, como o gcc (GNU Compiler Collection), instalado em seu sistema.

Compilando o Código
Clone este repositório ou baixe o arquivo forca.c.

Abra o terminal e navegue até a pasta onde o arquivo forca.c está localizado.

Compile o código com o seguinte comando:

Copiar código
gcc -o forca forca.c
Execute o programa:

bash
Copiar código
./forca
Jogo Interativo
O jogo irá solicitar que você adivinhe uma letra e, a cada tentativa, informará se a letra está correta ou não, além de exibir o número de tentativas restantes. Se você adivinhar a palavra antes de perder todas as tentativas, você vence! Caso contrário, a palavra será revelada.

Funções do Código
exibirpalavra()
Exibe a palavra secreta com as letras adivinhadas até o momento. As letras não adivinhadas são exibidas como -.

chutarletra()
Verifica se a letra chutada faz parte da palavra secreta e, em caso afirmativo, a revela na palavra.

main()
Controla o fluxo do jogo, gerencia as tentativas e as letras já tentadas, e verifica se o jogador venceu ou perdeu.

Lista de Palavras
O jogo seleciona aleatoriamente uma palavra de uma lista de 10 palavras:
teclado
monitor
algoritmo
processador
programacao
desktop
hardware
internet
firewall
software

Contribuindo
Se você deseja contribuir para melhorar o jogo ou adicionar novas funcionalidades, fique à vontade para fazer um fork deste repositório e enviar um pull request com suas melhorias.
