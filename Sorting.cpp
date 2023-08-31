#include<stdio.h>
#include<stdlib.h>
    int main()
    {
 
        int i, j, a, n, number[30],*ptr;
        printf("Enter the number of integers to be sorted  N \n");
        scanf("%d", &n);
        ptr=(int*)malloc(n*sizeof(int));
        if(ptr==NULL)
        {
        	printf("No memory is allocated");
		}
		else
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i){ 
		
            scanf("%d", &number[i]);}
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i){
            printf("%d\n", number[i]);}
            
            return 0;
 
    }
