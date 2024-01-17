#include <stdio.h>
struct process
{
    int at, bt, ct, tat, wt, rt;
};

// void input(struct P[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         printf("\nEnter Arrival Time for Process P[%d]: ", i+1);
//         scanf("%d", P[i].at);
//     }
// }

int main()
{
    int n;
    printf("\nEnter the number of process: ");
    scanf("%d", &n);
    struct process P[n];
    int atat, awt, cu;
    // input (P, n);
    for(int i=0; i<n; i++)
    {
        printf("\nEnter Arrival Time for Process P[%d]: ", i+1);
        scanf("%d", P[i].at);
        printf("\nEnter Burst Time for Process P[%d]: ", i+1);
        scanf("%d", P[i].bt);
    }
    

    //calcution
    for(int i=0; i<n; i++)
    {
        P[i].ct = 0;
    }
    //tat
    for(int i=0; i<n; i++)
        P[i].tat = P[i].ct - P[i].rt;
    
    //wt
    for(int i=0; i<n; i++)
        P[i].wt = P[i].tat - P[i].bt;
    
    //atat
    //awt
    //cu
    
    //printing output
    for(int i=0; i<n; i++)
    {
        printf("%d", P[i].at);
    }

    return 0;
}