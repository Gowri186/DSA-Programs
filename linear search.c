#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);   // read array size and element to search
    
    int *A = (int*) malloc(N * sizeof(int));  // dynamically allocate array
    
    int found = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if (A[i] == X) {
            found = 1;
            break;
        }
    }
    
    if (found)
        printf("YES\n");
    else
        printf("NO\n");
    
    free(A);  // free allocated memory
    
    return 0;
}

