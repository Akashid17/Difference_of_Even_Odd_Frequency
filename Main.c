#include<stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCount = 0;

    for(int j = 0; j < iLength; j++)
    {
        if(Arr[j] % 2 == 0)
        {
            iCount += 1;
        }
        else
        {
            iCount -= 1;
        }

        if(iCount < 0)
        {
            iCount = -iCount;
        }

        return iCount;
    }
}

int main()
{
    int iSize = 0, iResult = 0;
    int *p = NULL;

    printf("Enter Number of Elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Elements \n",iSize);

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    iResult = Difference(p,iSize);

    printf("Difference Between Even and Odd Frequency = %d\n",iResult);

    return 0;
}