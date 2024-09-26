#include <stdio.h>



void bubblesort(int array[9])
{
    for (int step = 0; step < 8; ++step)
    {
        for (int i = 0; i < 8 - step; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

int arraychecker(int array[9])
{
    bubblesort(array);
    for (int i = 0; i < 9; i++)
    {
        if (array[i] != i+1)
        {
            return 0;
        }
    }
    return 1;
}

int rowchecker(int board[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        int arr[9];
        for (int j = 0; j < 9; j++)
        {
            arr[j] = board[i][j];
        }
        if (arraychecker(arr) == 0)
        {
            return 0;
        }
    }
    return 1;
}
int colchecker(int board[9][9])
{
    for (int j = 0; j < 9; j++)
    {
        int arr[9];
        for (int i = 0; i < 9; i++)
        {
            arr[i]=board[i][j];
        }
        if (arraychecker(arr) == 0)
        {
            return 0;
        }

    }
    return 1;
}
int boxchecker(int board[9][9])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int arr[9];
            int index = 0;
            for (int a = 0; a < 3; a++)
            {
                for(int b = 0; b < 3; b++)
                {
                    arr[index] = board[i*3+a][j*3+b];
                    index++;
                }

            }
            if (arraychecker(arr) == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}




int main()
{
    int board [9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int num, a, b, c, rem1;
            if (scanf("%d", &num) != 1)
            {
                return 1;
            }
            a= num/100;
            rem1=num%100;
            b=rem1/10;
            c=rem1%10;

            board[i][j*3]=a;
            board[i][j*3+1]=b;
            board[i][j*3+2]=c;
        }
    }



if (colchecker(board)==0 && boxchecker(board) == 0 && rowchecker(board)==0)
{
    printf("Invalid\n");
}
else
{
    printf("Valid\n");
}

return 0;
}
