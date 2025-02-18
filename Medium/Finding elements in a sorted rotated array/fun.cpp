#include <iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0]) { // Corrected condition
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start; // Returns the pivot index
}

int SearchingElement(int arr[], int start, int end, int target) {
    while (start <= end) { // Corrected boundary condition
        int mid = start + (end - start) / 2;
        if (target == arr[mid]) {
            return mid; // Target found
        } else if (target > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {7, 9, 0, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int target = 9;

    int pivot = findPivot(arr, n);

    // Determine the correct half to search in
    if (target >= arr[pivot] && target <= arr[n - 1]) {
        cout << SearchingElement(arr, pivot, n - 1, target);
    } else {
        cout << SearchingElement(arr, 0, pivot - 1, target);
    }

    return 0;
}
