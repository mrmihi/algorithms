#include <iostream>

template<typename T>
    void insertion_sort(T * array,int noOfElements){
        int key = 0;
        int j = 0;
        int size = noOfElements;
        for(int i = 1; i < size; ++i){
            key = array[i];
            j = i - 1; 
            while (j > -1 and array[j]> key){
                array[j + 1] = array[j];
                j -= 1;
                array[j+1] = key;
            }
        }
    }

int main (){
    int arr[5] = {5,4,3,2,1};
    insertion_sort<int>(arr,5);
    for (int i : arr){
        std::cout<<i<<std::endl;
    }
}