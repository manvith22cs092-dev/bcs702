#include <stdio.h>
#include <time.h>

int main() {
    long long n, i, sum = 0;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter a positive number: ");
    scanf("%lld", &n);


    start = clock();

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sum of first %lld numbers = %lld\n", n, sum);
    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}

