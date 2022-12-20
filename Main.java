import java.lang.*;
import java.util.*;

class MathematicsX
{
	public

		int Difference(int iArr[])
		{
			int iCount = 0;

			for(int j = 0; j < iArr.length; j++)
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
}

class Main
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Number of Elements");
		int iSize = sobj.nextInt();

		int iElement[] = new int[iSize];

		if(iElement.length == 0)
		{
			System.out.println("Unable to allocate memory");

			return;
		}

		System.out.println("Enter "+iSize+" Elements");

		for(int i = 0; i < iSize; i++)
		{
			iElement[i] = sobj.nextInt();
		}

		MathematicsX mobj = new MathematicsX();

		int iResult = mobj.Difference(iElement);

		System.out.println("Difference Between Even and Odd Frequency = "+iResult);
	}
}