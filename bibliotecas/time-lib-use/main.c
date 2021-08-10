#include <stdio.h>

#include <time.h>

#define LEN 150

void numeroDeHorasDesdeJaneiro() {
    time_t seg;

    seg = time (NULL);

    printf ("O número de horas desde 1º de janeiro de 1970 é %d \n", seg / 3600);
}

void minhaHoraComCtime() {
    time_t minha_hora;

    minha_hora = time(NULL);

    printf(ctime(&minha_hora));
}

void usandoFuncoesDistintas() {
    char buf[LEN];

    time_t curtime;

    struct tm *loc_time;

    //obtém hora corrente do sistema

    curtime = time (NULL);

    //converte para a hora local

    loc_time = localtime (&curtime);

    //mostra hora e data no formato-padrão

    printf("%s", asctime (loc_time));

    strftime (buf, LEN, "Hoje eh %A, %b %d.\n", loc_time);

    fputs (buf, stdout);

    strftime (buf, LEN, "A hora eh %I:%M:%S %p.\n", loc_time);

    fputs (buf, stdout);
}

void usingMkTime() {
    struct tm str_time;

    time_t hora_do_dia;

    str_time.tm_year = 2019-1900;

    str_time.tm_mon = 7;

    str_time.tm_mday = 24;

    str_time.tm_hour = 10;

    str_time.tm_min = 3;

    str_time.tm_sec = 5;

    str_time.tm_isdst = 0;

    hora_do_dia = mktime(&str_time);

    printf(ctime(&hora_do_dia));
}

void usingDiffTime() {
    time_t start,end;

    volatile long unsigned contador;

    start = time(NULL);

    for(contador = 0; contador < 500000000; contador++)

        ; /* Não executa nada */

        end = time(NULL);

        printf("O loop for usa %f segundos.\n", difftime(end, start));
}

int main () {
    numeroDeHorasDesdeJaneiro();
    minhaHoraComCtime();
    usandoFuncoesDistintas();
    usingMkTime();
    usingDiffTime();
    return 0;
}