//UVA 280

#include <bits/stdc++.h>

using namespace std;

bool reach[105][105];

int main()
{
    int n;
    while (cin >> n,n)
    {
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=n;j++)
                reach[i][j] = false;
        }

        int start;

        while (cin >> start,start)
        {
            int next;
            while (cin >> next,next)
                reach[start][next] = true;
        }


        for (int k=1;k<=n;k++)
            for (int i=1;i<=n;i++)
                for (int j=1;j<=n;j++)
                    reach[i][j] |= reach[i][k] && reach[k][j];


        int p;
        cin >> p;
        while (p--)
        {
            int q;
            cin >> q;

            int count = 0;
            for (int i=1;i<=n;i++)
                if (!reach[q][i])
                    count++;

            cout << count;
            for (int i=1;i<=n;i++)
                if (!reach[q][i])
                    cout << ' ' << i;

            cout << '\n';
        }
    }
}
