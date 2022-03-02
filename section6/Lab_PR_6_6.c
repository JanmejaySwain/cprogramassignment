/* : Write a menu-based program that takes two linear arrays A and B as input and displays
the results of the following operations based on user’s choice.
1. Traverse A.
2. Traverse B.
3. Insert a new element in A (after insertion, the size of A should increase by 1).
4. Insert a new element in B (after insertion, the size of B should increase by 1).
5. Delete an element from A.
6. Delete an element from B.
7. Search an element in A.
8. Search an element in B.
9. Sort A (in ascending order).
10. Sort B (in ascending order).
11. Merge A and B to form a new array C. */
#include <stdio.h>

#include <conio.h>

void main()
{
    int A[100], B[100], C[1000], i, j, temp, num, position, size1, size2, x;
    printf("Enter the size of  array A: ");
    scanf("%d", &size1);
    printf("Enter the elements of array :\n");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nEnter the size of array B: \n");
    scanf("%d", &size2);
    printf("Enter the elements of array B :\n");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &B[i]);
    }
    printf("\n 1. Traverse A."); 
    printf("\n 2. Traverse B."); 
    printf("\n 3. Insert a new element in A (after insertion, the size of A should increase by 1)."); 
    printf("\n 4. Insert a new element in B (after insertion, the size of B should increase by 1)."); 
    printf("\n 5. Delete an element from A."); 
    printf("\n 6. Delete an element from B."); 
    printf("\n 7. Search an element in A."); 
    printf("\n 8. Search an element in B."); 
    printf("\n 9. Sort A (in ascending order)."); 
    printf("\n 10. Sort B (in ascending order)."); 
    printf("\n 11. Merge A and B to form a new array C.");
    
    while (1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            // 1. Traverse A.
            printf("\nThe elements in array A :\n");
            for (i = 0; i < size1; i++)
            {
                printf("%d ", A[i]);
            }
            break;
        case 2:
            // 2. Traverse B.
            printf("\nThe elements in array B:\n");
            for (i = 0; i < size2; i++)
            {
                printf("%d ", B[i]);
            }
            break;
        case 3:
            // 3. Insert a new element in A (after insertion, the size of A should increase by 1).
            printf("\nEnter a new number which you want to insert in array A:\n");
            scanf("%d", &num);
            printf("\nposition number in which the number is inserted :\n");
            scanf("%d", &position);
            if (position > 0 && position <= size1+1)
            {
                size1++;
                for (i = size1 - 1; i >= position; i--)
                {
                    A[i] = A[i - 1];
                }
                A[position - 1] = num;
                printf("\nAfter insert a number,Elements in array A are :\n");
                for (i = 0; i < size1; i++)
                {
                    printf("%d\t", A[i]);
                }
            }
            else
            {
                printf("You entered a invalid position for array A");
            }
            break;
        case 4:
            // 4. Insert a new element in B (after insertion, the size of B should increase by 1).
            printf("\nEnter a new number which you want to insert in array B :\n");
            scanf("%d", &num);
            printf("\nposition number in which the number is inserted :\n");
            scanf("%d", &position);
            if (position > 0 && position <= size2+1)
            {
                size2++;
                for (i = size2 - 1; i >= position; i--)
                {
                    B[i] = B[i - 1];
                }
                B[position - 1] = num;
                printf("\nAfter insert a number,Elements in array B are :\n");
                for (i = 0; i < size2; i++)
                {
                    printf("%d\t", B[i]);
                }
            }
            else
            {
                printf("You entered a invalid position for array B");
            }
            break;

        case 5:
            // 5. Delete an element from A.
            printf("Enter the position of number ,which you want to delete from array A: \n");
            scanf("%d", &position);
            if (position > 0 && position <= size1)
            {
                A[position - 1] = ' ';
                for (i = position; i < size1; i++)
                {
                    A[i - 1] = A[i];
                }
                size1--;
                printf("\nAfter deleting the elements the elements in array A :\n");
                for (i = 0; i < size1; i++)
                {
                    printf("%d\t", A[i]);
                }
            }
            break;
        case 6:
            // 6. Delete an element from B.
            printf("Enter the position of number ,which you want to delete from array B: \n");
            scanf("%d", &position);
            if (position > 0 && position <= size2)
            {
                A[position - 1] = ' ';
                for (i = position; i < size2; i++)
                {
                    B[i - 1] = B[i];
                }
                size2--;
                printf("\nAfter deleting the elements the elements in array B :\n");
                for (i = 0; i < size2; i++)
                {
                    printf("%d\t", B[i]);
                }
            }
            break;
        case 7:
            // 7. Search an element in A.
            printf("Enter the element which you want to search inarray A:\n");
            scanf("%d", &num);
            for (i = 0; i < size1; i++)
            {
                if (A[i] == num)
                {
                    printf("%d is present in %d position at index %d\n", num, i + 1, i);
                }
            }
            break;
        case 8:
            // 8. Search an element in B.
            printf("Enter the element which you want to search inarray B:\n");
            scanf("%d", &num);
            for (i = 0; i < size2; i++)
            {
                if (B[i] == num)
                {
                    printf("%d is present in %d position at index %d\n", num, i + 1, i);
                }
            }
            break;

        case 9:
            // 9. Sort A (in ascending order).
            for (i = 0; i < size1; i++)
            {
                for (j = i + 1; j < size1; j++)
                {
                    if (A[i] > A[j])
                    {
                        temp = A[i];
                        A[i] = A[j];
                        A[j] = temp;
                    }
                }
            }
            printf("The elements of array A in ascending order : \n");
            for (i = 0; i < size1; i++)
            {
                printf("%d\t", A[i]);
            }
            break;
        case 10:
            // 10. Sort B (in ascending order).
            for (i = 0; i < size2; i++)
            {
                for (j = i + 1; j < size2; j++)
                {
                    if (B[i] > B[j])
                    {
                        temp = B[i];
                        B[i] = B[j];
                        B[j] = temp;
                    }
                }
            }
            printf("The elements of array B in ascending order : \n");
            for (i = 0; i < size2; i++)
            {
                printf("%d\t", B[i]);
            }
            break;

        case 11:
            // 11. Merge A and B to form a new array C.
            for ((i = 0, j = 0); i < size1; i++)
            {

                C[i] = A[i];
                j++;
            }
            for (i = 0; i < size1 + size2; i++)
            {
                C[j] = B[i];
                j++;
            }
            printf("After merging array A and array B , The elements in new array C :\n");
            for (i = 0; i < size1 + size2; i++)
            {
                printf("%d\t", C[i]);
            }
            break;
        default:
            printf("You have entered wrong choice");
        }
    }

    getch();
}