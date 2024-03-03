#include<iostream>
#include<vector>

void selectionSort(std::vector<int>& arr) 
{
    for (size_t i = 0; i < arr.size() - 1; i++) 
    {
        size_t min_idx = i;
        for (size_t j = i + 1; j < arr.size(); j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        std::swap(arr[min_idx], arr[i]);
    }
}
 int main()
 {
    std::vector<int>numbers = {1,23,345,65475,788,324,60};

    selectionSort(numbers);
    std::cout << "Sorted vector: ";
    for(auto number:numbers)
    {
        std::cout << number << " ";
    }
 }