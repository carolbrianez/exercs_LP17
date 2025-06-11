#include <stdio.h>

void inicio(void) {
    printf( "Content-type: text/html\n\n" );
    printf("<html>");
    printf("<head>");
    printf("<meta charset=\"UTF-8\">");
}

void meio(void) {
    printf("</head>");
    printf("<body>");
}

void fim(void) {
    printf("</body>");
    printf("</html>");
}

void aba(char *texto) {
    printf("<title>%s</title>", texto);
}

void titulo(char *texto) {
    printf("<h1>%s</h1>", texto);
}

int main (void) {
    inicio();
    meio();
    aba("Segunda página");
    titulo("Usando argumentos");
    fim();
    return 0;
}