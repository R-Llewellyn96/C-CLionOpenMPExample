/*
 * Author: Ryan Llewellyn
 * Date: 07/08/2020
 * Program name: CLionOpenMPExample
 * Description: Demonstration of OpenMP implementation in CLion
 */

// Must include omp.h to access OpenMP functions and pragmas
#include <stdio.h>
#include <omp.h>

// Main method, used in this example to quickly test OpenMP
int main() {

    // Set OpenMP Pragma
    #pragma omp parallel default(none)
    { // Parallel Section
        // Lists number of threads and prints thread number currently executing print command
        printf("There are %d threads. Hello from thread %d\n", omp_get_num_threads(), omp_get_thread_num());
    }
    /*end of Parallel Section */

    // Return to master thread
    printf("\nHello from the master thread\n");

    // Program Exit
    return 0;
}