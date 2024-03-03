#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) 
{
    for (size_t i = 0; i < arr.size() - 1; i++) {
        for (size_t j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main ()
{
    std::vector<int> numbers = {3,12,54,75,788,324,60};
  
    bubbleSort(numbers);
    
    std::cout << "Sorted vector: ";
    for(auto number:numbers)
    {
        std::cout << number << " ";
    }
}