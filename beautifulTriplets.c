#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int beautifulTriplets(int d, int arr_size, int* arr) {
    int i,j,k,count=0,temp;
    for(i=0;i<arr_size;i++)
    {
        for(j=i+1;j<arr_size;j++)
        {
            if(arr[j]-arr[i]==d)
            {
                temp=arr[i];
                for(k=0;k<arr_size;k++)
                {
                    if(temp-arr[k]==d)
                    {
                        count++;
                    }
                }
            }
        }
    }
    return count;
    // Complete this function
}

int main() {
    int n; 
    int d; 
    scanf("%i %i", &n, &d);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    int result = beautifulTriplets(d, n, arr);
    printf("%d\n", result);
    return 0;
}
