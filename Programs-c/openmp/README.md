# Program OPENmp


Program that makes use of the OPENmp library, where in one process it does addition and in another multiplication.
The way to compile is as follows:
```bash
  gcc 1°\ program.c -o programMP -fopenmp

```

And to execute it is as follows: **`OMP_NUM_THREADS=4 ./programa_openmp`**
```bash
  OMP_NUM_THREADS=4 ./programa_openmp

```

Where the number **`OMP_NUM_THREADS=4`** refers to the processes to use