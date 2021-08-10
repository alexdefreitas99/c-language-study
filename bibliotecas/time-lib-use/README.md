## Biblioteca TIME

### Funções/métodos:
* **setdate():** Modifica a data do sistema.
* **getdate():** Obtém a hora da CPU.
* **clock():** Obtém a hora corrente do sistema.
* **time():** Obtém a hora corrente do sistema como estrutura. Esta chamada de sistema fornece a quantidade de segundos desde zero hora de 1º de janeiro de 1970.
* **difftime():** Fornece a diferença entre duas horas dadas.
* **strftime():** Modifica o formato da hora atual.
* **mktime():** Converte data e hora do formato tm para o formato time_t (inteiro longo).
* **localtime():** Recebe um tempo em segundos de uma variável do tipo time_t, converte para o tempo local, armazena os dados na struct e retorna um ponteiro para uma struct do tipo tm com os dados locais.
* **gmtime():** Converte um valor time_t para uma estrutura tm como o relógio universal (UTC).
* **ctime():** Retorna uma string que contém informações de data e hora.
* **asctime():** Converte tm para uma string no formato Www Mmm dd hh:mm:ss yyyy, em que: Www é o dia da semana; Mmm, o mês, em letras; dd, o dia do mês; hh:mm:ss, a hora; e yyyy, o ano. 