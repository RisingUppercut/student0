#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim1, lim2, lim3;
    getrlimit(RLIMIT_STACK, &lim1);
    getrlimit(RLIMIT_NPROC, &lim2);
    getrlimit(RLIMIT_NOFILE, &lim3);
    printf("stack size: %ld\n", lim1.rlim_cur);
    printf("process limit: %ld\n", lim2.rlim_cur);
    printf("max file descriptors: %ld\n", lim3.rlim_cur);
    return 0;
}
