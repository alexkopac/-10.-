#include "function.h"

#define INTEGER

int main() {
    const int size = 5;

#ifdef INTEGER
    int arr[size];
    FillArray(arr, size);
    ShowArray(arr, size);
    std::cout << "Min: " << MinElement(arr, size) << std::endl;
    std::cout << "Max: " << MaxElement(arr, size) << std::endl;
    SortArray(arr, size);
    ShowArray(arr, size);
    EditElement(arr, 2, 10);
    ShowArray(arr, size);
#endif

#ifdef CHAR
    char arr[size];
    FillArray(arr, size);
    ShowArray(arr, size);
    cout << "Min: " << MinElement(arr, size) << endl;
    cout << "Max: " << MaxElement(arr, size) << endl;
    SortArray(arr, size);
    ShowArray(arr, size);
    EditElement(arr, 2, 'Z');
    ShowArray(arr, size);
#endif

#ifdef DOUBLE
    double arr[size];
    FillArray(arr, size);
    ShowArray(arr, size);
    cout << "Min: " << MinElement(arr, size) << endl;
    cout << "Max: " << MaxElement(arr, size) << endl;
    SortArray(arr, size);
    ShowArray(arr, size);
    EditElement(arr, 2, 15.5);
    ShowArray(arr, size);
#endif

    return 0;
}