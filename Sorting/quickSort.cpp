// #include <iostream>
#include <vector>
#include <iostream>
// using namespace std;

int partition(std::vector<int>& array, int left, int right ){
    int pivot = array[right];
    int i = left;
    for (int j = left; j < right; j++){
        if(array[j] <= pivot){
            std::swap(array[j], array[i]);
            i ++;           
        }
        
    }
    std::swap(array[i], array[right]);
    return i;
}

std::vector<int> quicksort(std::vector<int>& array, int left, int right){
    if ((right - left) > 1){
        int pivot = partition(array, left, right);
        quicksort(array, left, pivot - 1);
        quicksort(array, pivot + 1, right);
    }
    return array;
}


int main(){
    std::vector <int> data {5,6,43,23,78,99,1,79,88};
    int left = 0;
    std::vector<int>::size_type right = data.size() - 1;
    std::vector <int> sorted = quicksort(data, left, right);
    // std::cout<<sorted<<std::endl;
    for(std::vector<int>::size_type  i = 0; i < sorted.size(); i++) {
        std::cout << sorted[i] << " ";
    }
    std::cout << std::endl;

    std::cout<< "Test Case 2"<<std::endl;

    std::vector <int> data2 {-7,-6,-43,23,-78,99,-1,79,88};
    int left2 = 0;
    std::vector<int>::size_type right2 = data.size() - 1;
    std::vector <int> sorted2 = quicksort(data2, left2, right2);
    // std::cout<<sorted<<std::endl;
    for(std::vector<int>::size_type  i = 0; i < sorted2.size(); i++) {
        std::cout << sorted2[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

