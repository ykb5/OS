#include <stdio.h>
#include <stdlib.h>

void fcfs(int arr[], int n, int head)
{
    int seek = 0, dist, curr;

    for(int i=0; i<n; i++) {
        curr = arr[i];
        dist = abs(curr - head);
        seek = seek + dist;
        head = curr;
    }
    printf("\nTotal number of seek operations performed: %d", seek);
    printf("\nSeeking Sequence: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return;
}
int main() {
    
    int n;
    printf("\nEnter the size: ");
    scanf("%d", &n);
    int arr[n], head;
    printf("\nEnter the elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the head: ");
    scanf("%d", &head);
    fcfs(arr, n, head);

    return 0;
}