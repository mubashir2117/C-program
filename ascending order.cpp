    #include <stdio.h>
    int main()
    {
 
        int a[5],i,j,temp;
        printf("Enter the numbers \n");
        for (i = 0; i < 5; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < 5; i++) 
        {
 
            for (j = i + 1; j < 5; j++)
            {
 
                if (a[i] > a[j]) 
                {
 
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < 5; i++)
        {
            printf("%d\n", a[i]);
        }
        return 0;
    }

