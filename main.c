#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n,  c;
    scanf("%d", &n);
    if(n < 3)
    {
        printf("-1");
        return 0;
    }
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
            c = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = c;
            }
        }
    }
    /*for(int i = 0; i < n; i++)
    {
     printf("%d \n",arr[i]);
    }*/
    printf("%d \n", arr[2]);
    return 0;
}
