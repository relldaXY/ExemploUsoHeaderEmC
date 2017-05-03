#ifndef FOOBAR_H   // guardas de cabeçalho, impedem inclusões cíclicas
#define FOOBAR_H
#include "foobar.c"//essa classe que faz a magica

extern int baz;    // declaração de uma variável global
                   // como é global, valor inicial é zero.

int foo(long arg); // declaração de uma função
int bar(void);     // outra

#endif
