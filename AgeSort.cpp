#include <bits/stdc++.h>

using namespace std;

int main()
	{
		int n, k, i, j, temp;
		int data [20];
		cin>>n;

		for(k=0;k<n;k++)
        {
            cin>>data[k];
        }


		for ( i = 0; i < n; i++)
		{
		  j = i;

            while (j > 0 && data[j] < data[j-1])
			{
				temp = data[j];
				data[j] = data[j-1];
				data[j-1] = temp;
				j--;
			}
		}

        for(i=0; i<n; i++)
		{
		   cout<< data[i] ;
		}
	}



