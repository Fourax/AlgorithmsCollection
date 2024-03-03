#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& data, int wanted) {
    int left = 0;
    int  right = data.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (data[middle] == wanted) {
            return middle; 
        } else if (data[middle] < wanted) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1; 
}

int main() {
    std::vector<int> data = {1, 3, 5, 7, 9};
    int wanted = 7;
    int indeks = binarySearch(data, wanted);

    if (indeks != -1) {
        std::cout << "Found the value you are looking for on the index: " << indeks << std::endl;
    } else {
        std::cout << "No value found." << std::endl;
    }
}
