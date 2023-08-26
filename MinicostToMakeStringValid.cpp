#include <bits/stdc++.h>
using namespace std;

int findMinimumCost(string str)
{
    if (str.length() % 2 == 1)
    {
        return -1;
    }
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '{')
        {
            st.push(str[i]);
        }
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(str[i]);
            }
        }
    }
    int a = 0;
    int b = 0;
    while (!st.empty())
    {
        if (st.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        st.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}

int main()
{
    string input;
    cout << "Enter a string of braces: ";
    cin >> input;

    int result = findMinimumCost(input);

    if (result == -1)
    {
        cout << "The input string cannot be balanced." << endl;
    }
    else
    {
        cout << "Minimum operations needed to balance the braces: " << result << endl;
    }

    return 0;
}
