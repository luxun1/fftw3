/* not worth copyrighting */

#include "bench.h"

/* A = alpha * A  (in place) */
void ascale(bench_real *A, int n, bench_real alpha)
{
     int i;

     for (i = 0; i < n; ++i) {
	  A[i] *= alpha;
     }
}
