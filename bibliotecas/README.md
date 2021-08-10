# Bibliotecas.
## Como uma biblioteca é processada ?
#### Seguindo pelo mesmo caminho de como as aplicações C são criadas:
1. Os arquivos C são pré-processados. Diretivas como #define e #include são resolvidas.
2. Os arquivos de código pré-processados são compilados em Assembly.
   1. Os arquivos de montagem(assembly) são montados em arquivos objetos(binários).
   2. Os objetos binários são salvos no disco para processamento adicional. 
   3. Vários arquivos objetos podem ser copiados em um único arquivo de biblioteca. 
   4. Um arquivo de biblioteca não é nada mais que uma coleção de arquivo de objeto.
3. Arquivos de biblioteca podem ser criados, editados em objetos únicos. Quando o fornecimento de fontes não é desejado, é prática comum fornecer software como bibliotecas em arquivos de objeto. Por exemplo, se você colocar o código de nossa Função max() abaixo em um arquivo e compilar no Dev C++, haverá um erro no compilador, mas o arquivo de objeto .o será gerado e poderá ser chamado em outro código-fonte.
4. Dessa forma as funções da biblioteca, funções escritas em C, são compiladas e fornecidas juntamente com outros objetos. A biblioteca-padrão C é uma coleção de funções-padrão definidas na especificação da linguagem C. A biblioteca-padrão é normalmente fornecida junto com o conjunto de ferramentas do compilador. 


### Detalhes do resultado:
* **compilacao.i** -> Gerado pelo pré-processador
* **compilacao.s** -> Gerador pelo compilador
* **compilacao.o** -> Gerador pelo montador
* **compilacao** -> Gerado pelo linker(No linux)


## Processo de compilação:
### 1. Pré-processador:
O pré-processador é um SW(Software) que recebe o SC(Source Code) e executa as tarefas abaixo:
* Remove comentários do SC;
* Faz expansão dos arquivos de cabeçalho incluídos.
* Gera um arquivo temporário com a extensão **.i**. Após o pré-processamento, ele insere o conteúdo dos arquivos de cabeçalho no arquivo de código-fonte. O arquivo gerado pelo pré-processador é maior que o arquivo de origem original.

### 2. Compilador:
Ele recebe o arquivo pré-processado temporário **nome_do_arquivo.i** gerado pelo pré-processador e executa as seguintes tarefas:
* Verifica o programa C para erros de sintaxe.
* Traduz o arquivo em código intermediário, ou seja, em linguagem assembly.
* Otimiza, opcionalmente, o código traduzido para melhor desempenho.
* Gera um código intermediário na linguagem assembly, após a compilação, como **nome_do_arquivo.s**. É a versão de montagem do código-fonte.

### 3. Montador(Assembler)
O assembler aceita o código-fonte compilado **nome_do_arquivo.s** e o traduz em código de máquina de baixo nível. Após a montagem bem-sucedida, gera um arquivo **nome_do_arquivo.o**(No linux) ou **nome_do_arquivo.obj**(No windows) conhecido como arquivo objeto.

### 4. Vinculador (Linker)
Finalmente, o linker entra em ação e executa a tarefa final do processo de compilação. Aceita o arquivo intermediário nome_do_arquivo.o gerado pelo assembler.
Ele liga todas as chamadas de função com sua definição original. O que significa que a função printf () é vinculada à sua definição original. O vinculador gera o arquivo executável final.


## Especificadores de tipo de classe de armazenamento
São usados para informar ao compilador como a variável deve ser armazenada.
* Extern: Informa que as variáveis foram declaradas em outro lugar.
* Static: Não são reconhecidas fora de sua função/arquivo, mas seus valores são mantidos entre as chamadas.
* Register: Informa que a variável deve ser armazenada em um registrador da CPU, e não na memória. (Não é permitido variáveis globais)
