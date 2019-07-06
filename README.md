# MultPrinter
MultPrinter
CDAS comercio@cdas.com.br  
www.cdas.com.br

Projeto de uma multiimpressora capaz de imprimir diretamente nos objetos
A Multiprinter pode ser usada com varios tipos de tintas
A Multiprinter UV pode imprimir diretamente em varios ojetos sem necessidade de tratamento quimico
A impressora possui um controlador baseado no arduino mega com bluetooth 
O sistema e capaz de controlar uma mesa com dois eixos, o eixo x usado para mover uma esteira 
o y e usado para subir e descer a impressora até a altura do objeto
O objeto colocado na esteira e detectado por um sensor a laser que junto com um sensor ultrason determina a altura de trabalho
A impressora e comandada pelo celular, neste temos a opção de enviar comandos manuais e atuomaticos 
No sistema do celular possui uma serie de variaveis que podem ser modificadas para atender a varios tipos de maquinas
O sistema possui controles manuais que são monitorados pelo arduino. Durante o monitoramento o arduino determina os pontos criticos não permitindo ultrapassar.
A multiprinter possui controles para Ligar a impressora, ejetar o objeto, Limpeza, e cancelamento da impressão via comando celular.
A multiprinter no modo automatico detectada o objeto e inicia a impressão , a impressão pode ser feita em duas passadas caso utilize tinta branca. A multiprinter no modo manual permiti subir e descer a maquina até a altura desejada,  permiti tambem movimentar a esteira para frente e para tras para se ter o melhor possicionamento do objeto, apos corretamente definida a possição basta uim click no botão select a impressora armazena a posição e ficara nela até que seja alterada podendo imprimir uma seguencia de objetos. 

O codigo da Multiprinter para o celular e o arquivo com extensão .apk e para o Arduivo o .ino 
