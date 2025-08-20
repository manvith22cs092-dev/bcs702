#include <stdio.h>
#include <omp.h>   // for omp_get_wtime()

int main() {
    long long n, i, sum = 0;
    double start, end, cpu_time_used;

    printf("Enter a positive number: ");
    scanf("%lld", &n);

    // Start measuring time
    start = omp_get_wtime();

    // Perform a simple computation (sum of first n numbers)
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // End measuring time
    end = omp_get_wtime();

    cpu_time_used = end - start;

    printf("Sum of first %lld numbers = %lld\n", n, sum);
    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}
