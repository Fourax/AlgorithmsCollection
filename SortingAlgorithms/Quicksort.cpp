#include<iostream>
#include<vector>

int division(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = division(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main ()
{
    std::vector<int> numbers = {10, 7, 8, 9, 1, 5};
    int n = numbers.size();
    
    quickSort(numbers, 0, n-1); 

    std::cout << "Sorted vector: ";
    for (auto number:numbers)
    {
        std::cout << number << " ";
    }
}