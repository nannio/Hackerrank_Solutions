#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int minimumDistances(int a_size, int* a) {
    int i,j,d,min=a_size;
    for(i=0;i<a_size;i++)
    {
        for(j=i+1;j<a_size;j++)
        {
            
            if(a[i]==a[j])
            {
                d=j-i;
                if(d<min)
            {
                min=d;
            }
            }
            
        }
    }
    if(min==a_size)
    {
        return -1;
    }
    
    return min;
    // Complete this function
}

int main() {
    int n; 
    scanf("%i", &n);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int result = minimumDistances(n, a);
    printf("%d\n", result);
    return 0;
}
