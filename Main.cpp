#include <iostream>

using namespace std;

class MathematicsX
{
    public:
        int Diffrence(int*,int);   
};

int MathematicsX::Diffrence(int* iArr,int iLength)
{
    int iCount = 0;

    for(int j = 0; j < iLength; j++)
    {
        if(iArr[j] % 2 == 0)
        {
            iCount += 1;
        }
        else
        {
            iCount -= 1;
        }
    }

    if(iCount < 0)
    {
        iCount = -iCount;
    }

    return iCount;
}

int main()
{
    int iSize = 0;
    int *p = NULL;

    cout<<"Enter Number of Elements"<<endl;
    cin>>iSize;

    p = new int[iSize];

    if (p == NULL)
    {
        cout<<"Unable ot allocate memory"<<endl;
        return -1;
    }

    cout<<"Enter "<<iSize<<" Elements"<<endl;

    for(int i = 0; i < iSize; i++)
    {
        cin>>p[i];
    }

    MathematicsX mobj;

    int iResult = mobj.Diffrence(p,iSize);

    cout<<"Difference Between Even and Odd Frequency = "<<iResult<<endl;

    delete(p);

    return 0;
}   