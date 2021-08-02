# Compilação.
## Comando utilizado para compilar o arquivo inicial nomeado como 'compilacao' em C: 
`$ gcc -save-temps compilacao.c -o compilacao`
  
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
