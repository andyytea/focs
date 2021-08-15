#include <stdio.h>

#define swap(a,b) {int temp = *a; *a = *b; *b = temp;}
#define MAX_SIZE 50

void printarr(int arr[], int len)
{
    for (int i = 0; i < len; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void selection_sort(int arr[], int len)
{
    int min;
    int comparisons = 0;
    int swaps = 0;
    for (int i = 0; i < len; ++i) {
        min = i;
        for (int j = i+1; j < len; ++j, ++comparisons)
            if (arr[j] < arr[min]) min = j;
        swap(&arr[i],&arr[min]);
        ++swaps;
    }
    printf("\ncomparisons: %d\nswaps: %d\n", comparisons, swaps);
}

int main(void)
{
    int arr[MAX_SIZE] = {0};
    int len = 0;
    int c;
    while ((c = getchar()) != EOF) {
       if (c >= '0' && c <= '9' && len < MAX_SIZE)
           arr[len++] = c - '0';
       else if (c == ' ' || c == '\t')
           continue;
       else if (c == '\n')
           break;
       else
           return 0;
    }
    selection_sort(arr, len);
    printarr(arr, len);
    return 0;
}
