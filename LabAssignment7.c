// Vianna Huynh
// COP3502
// vi312472
// March 22 2023

 #include <stdio.h>
 #include <stdlib.h>
 
 
 void bubbleSort(int pData[], int n)
 {
    int i, j, temp, num_swaps;
    int iteration = 0;
    for (i = 0; i < n - 1 ; i ++)
    {
        iteration ++;
        num_swaps = 0;

        for (j = 0; j < n-i-1 ; j++)
        {
            if (pData[j]>pData[j+1])
            {
                temp = pData[j];
                pData[j]=pData[j+1];
                pData[j+1]= temp;
                num_swaps++;
            }
        }
         printf("Iteration #%d: %d\n", iteration, num_swaps);
    }
 }
 
 int main(void)
 {
    // array size
    int array [] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = 9;
    bubbleSort(array, n);
 }