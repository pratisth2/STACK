#include<bits/stdc++.h>
using namespace std;
class great
{
public:
    vector<int>  greater(vector<int>&v1)
    {
        stack<int>st;
        vector<int>v2;
        for (int i = 0; i < v1.size(); i++)
        {
            if (st.empty())
            {
                v2.push_back(-1);

            }
            else if (st.size() > 0 && st.top() > v1[i])
            {
                v2.push_back(st.top());
            }
            else if (st.size() > 0 && st.top() <= v1[i])
            {
                while (st.size() > 0 && st.top() <= v1[i])
                {
                    st.pop();
                }
                if (st.size() == 0)
                {
                    v2.push_back(-1);
                }
                else
                {
                    v2.push_back(st.top());
                }
            }
            st.push(v1[i]);

        }

        return v2;
    }
};

int main()
{
    int size;
    cin >> size;
    vector<int>v1(size);
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }
    great ob;
    vector<int>res = ob.greater(v1);
    for (int i : res)
    {
        cout << i << endl;
    }
    return 0;
}