#include <iostream>

template<typename T>
    void insertion_sort(T * array){
        int key = 0;
        int j = 0;
        int size = sizeof(array)/sizeof(T);
        for(int i = 1; i < size; ++i){
            key = array[i];
            j = i;
            while (j > 0 and array[i]> key){
                array[j + 1] = array[j];
                j -= 1;
                array[j+1] = key;
            }
        }
    }

int main (){
    int arr[5] = {5,4,3,2,1};
    insertion_sort<int>(arr);
    for (int i : arr){
        std::cout<<i<<std::endl;
    }
}