#include <iostream>
using namespace std;

int findMaxElement(int* arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int numbers[] = {5, 9, 3, 7, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int maxElement = findMaxElement(numbers, size);
    cout << "The maximum element in the array is: " << maxElement << endl;
    return 0;
}
