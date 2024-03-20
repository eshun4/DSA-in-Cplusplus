#include <iostream>

int binarySearch(int array[], int size, int target){
    int low = 0;
    int high = size;
    while(low <= high){
        int mid = (low + high) / 2;
        if(target == array[mid]){
            return mid;
        }else if(target < array[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    
    // Test Case 1: Target found in the array
    int target1 = 9;
    int result1 = binarySearch(array1, size1, target1);
    std::cout << "Target 9 found at index: " << result1 << std::endl;
    
    // Test Case 2: Target not found in the array
    int target2 = 100;
    int result2 = binarySearch(array1, size1, target2);
    if (result2 == -1) {
        std::cout << "Target 100 not found in the array" << std::endl;
    }
    
    // Test Case 3: Empty array
    int emptyArray[] = {};
    int sizeEmpty = sizeof(emptyArray) / sizeof(emptyArray[0]);
    int target3 = 5;
    int result3 = binarySearch(emptyArray, sizeEmpty, target3);
    if (result3 == -1) {
        std::cout << "Target 5 not found in the empty array" << std::endl;
    }
    
    // Test Case 4: Array with one element
    int singleElementArray[] = {10};
    int sizeSingle = sizeof(singleElementArray) / sizeof(singleElementArray[0]);
    int target4 = 10;
    int result4 = binarySearch(singleElementArray, sizeSingle, target4);
    std::cout << "Target 10 found at index: " << result4 << std::endl;
    
    // Test Case 5: Array with all elements less than target
    int array2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int target5 = 10;
    int result5 = binarySearch(array2, size2, target5);
    if (result5 == -1) {
        std::cout << "Target 10 not found in the array with all elements less than target" << std::endl;
    }
    
    // Test Case 6: Array with all elements greater than target
    int array3[] = {15, 20, 25, 30};
    int size3 = sizeof(array3) / sizeof(array3[0]);
    int target6 = 10;
    int result6 = binarySearch(array3, size3, target6);
    if (result6 == -1) {
        std::cout << "Target 10 not found in the array with all elements greater than target" << std::endl;
    }
    
    return 0;
}