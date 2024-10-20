// solution to exercise 2.1-5
#include <iostream>
#include <vector>

void bit_adder(std::vector<int> & a, std::vector<int> & b, std::vector<int> & res)
{
    int carry = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int sum = a[i] + b[i] + carry;

        res[i] = sum % 2;
        carry = sum / 2;
    }
    if (carry == 1)
    {
        res[a.size()] = 1;
    }
}
int main()
{
    std::vector<int> a = {1, 1, 1, 1, 1, 1};
    std::vector<int> b = {1, 1, 1, 1, 1, 1};
    std::vector<int> res(a.size()+1, 0); // (length, val)
    
    bit_adder(a, b, res);
    
    for (auto & num : res)
    {
        std::cout << num << " ";
    }
    return 0;
}