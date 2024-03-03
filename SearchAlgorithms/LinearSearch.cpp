#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& data, int wanted) {
    for (int i = 0; i < data.size(); i++) {
        if (data[i] == wanted) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> data = {1, 3, 5, 7, 9};
    int wanted = 7;
    int indeks = linearSearch(data, wanted);

    if (indeks != -1) {
        std::cout << "Found the value you are looking for on the index: " << indeks << std::endl;
    } else {
        std::cout << "The value you are looking for was not found." << std::endl;
    }
}
