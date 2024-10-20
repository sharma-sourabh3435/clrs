#include <iostream>
#include <vector>

template <typename T>
// pass by reference so that we can alter the original array
void insertion_sort(std::vector<T> & array)
{
    long long length = array.size();
    for (long long i = 1ll; i < length; i++) // from second element to end
    {
        long long key = array[i]; // current key to be entered in sorted part
        long long j = i-1; // end of the sorted part of array
        // find the right place for new element
        // move the bigger elements one place to right
        while ( j >= 0 && array[j] > key)
        {
            array[j+1] = array[j];
            j = j-1;
        }
        // put the new element in its place
        array[j+1] = key;
    }
}

int main()
{
    std::cout << "Type some numbers to sort. enter non number to STOP.\n";
    std::vector<long long> numbers;
    long long number;
    // take in numbers until a non number is added
    while (std::cin >> number)
    {
        numbers.push_back(number);
    }
    std::cin.clear(); // clears the error state because of entering non number

    insertion_sort(numbers);

    // for each loop to print the sorted array
    for (auto & num : numbers)
    {
        std::cout << num << " ";
    }

    return 0;
}