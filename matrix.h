#ifndef MATRIX_H
#define MATRIX_H

#include <stdbool.h>
#include <stdio.h>

typedef double scalar;

typedef struct matrix {
  unsigned n1, n2;
  bool ok;
  scalar *data;
} matrix;

matrix matrix_create(unsigned n1, unsigned n2, scalar v);
void matrix_destroy(matrix m);
matrix matrix_identity(unsigned n);
scalar *matrix_get(matrix m, unsigned i, unsigned j);
matrix matrix_add(matrix m, matrix n);
void matrix_print(FILE *f, matrix m);

scalar matrix_trace(matrix m) ;
matrix matrix_transp(matrix m);

matrix prod_matrix(matrix m, matrix n);
matrix puiss_matrix(matrix m, unsigned n);

matrix scale_matrix(matrix m, scalar a);
#endif /* MATRIX_H */
