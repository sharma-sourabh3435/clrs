// solution to exercise 2.1-5
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a = {0, 1, 1, 1, 0, 1};
    std::vector<int> b = {1, 1, 1, 1, 1, 1};
    std::vector<int> res(a.size()+1, 0); // (length, val)
    int carry = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (carry == 0)
        {
            if (a[i] == 1 || b[i] == 1)
            {
                res[i] = 1;
            }
            if ( a[i] == 1 && b[i] == 1)
            {
                carry = 1;
            }
            continue;
        }
        if (carry == 1)
        {
            if (a[i] == 0 && b[i] == 0)
            {
                res[i] == 1;
                carry = 0;
            }
            if (a[i] == 1 && b[i] == 1)
            {
                res[i] == 1;
            }
        }
    }
    if (carry == 1)
    {
        res[a.size()] = 1;
    }
    for (auto & num : res)
    {
        std::cout << num << " ";
    }
    return 0;
}