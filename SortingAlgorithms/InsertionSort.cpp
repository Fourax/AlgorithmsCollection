#include<iostream>
#include<vector>

void insertionSort(std::vector<int>& arr) 
{
    for (size_t i = 1; i < arr.size(); i++) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main ()
{
    std::vector<int>numbers = {1,23,345,654,76,89,74,987};

    insertionSort(numbers);
    
    std::cout << "Sorted vector: ";
    for(auto number:numbers)
    {
        std::cout << number << " ";
    }

}