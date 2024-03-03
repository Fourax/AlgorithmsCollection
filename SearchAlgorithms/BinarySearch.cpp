#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& data, int wanted) {
    int lewo = 0;
    int prawo = data.size() - 1;

    while (lewo <= prawo) {
        int srodek = lewo + (prawo - lewo) / 2;

        if (data[srodek] == wanted) {
            return srodek; 
        } else if (data[srodek] < wanted) {
            lewo = srodek + 1;
        } else {
            prawo = srodek - 1;
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
