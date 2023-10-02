#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 20;
    int arr[size];
 
    srand(static_cast<unsigned>(time(0)));
    
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    std::cout << "Arreglo aleatorio antes de ordenar:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::sort(arr, arr + size);  

    std::cout << "Arreglo aleatorio ordenado en Quicksort:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}