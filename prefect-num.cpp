#include <iostream>
#include <vector>
#include <string>
#include<stdio.h>
using namespace std;
int m = 3;
int ma =1;
int main()
{
    cout << "请输入最小值：" ;
    cin >> m;
    cout << "请输入最大值：" ;
    cin >> ma;
    
    while (m < ma)
    {
        int i = 1;
        int s = 0;
        for (; i < m;)
        {
            int q = m % i;
            if (q == 0)
            {
                s = s + i;
                // cout << m << endl;
                i++;
            }
            else
            {
                i++;
            }
        }
        // cout << s << endl;
        if (s == m)
        {
            cout << s << endl;
        }
        m = m + 1;
        // cout << m << endl;
    }

    return 0;
}
