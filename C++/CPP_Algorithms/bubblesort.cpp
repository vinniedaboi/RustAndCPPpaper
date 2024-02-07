#include <iostream>





void bubbleSortArray(int array[], unsigned int length)  {

    bool changed;

    length -= 1;

    for (int i = 0; i < length; i++) { 

        changed = false; 

        for (int j = 0; j < length - i; j++) { 

            if (array[j] > array[j + 1]) {
 
                std::swap(array[j], array[j+1]);            
                changed = true; 
            } 
        } 

        if (changed == false)
            return;
    } 
}

int main() {  
    int array[5] = {120,40,32,10,5};
    bubbleSortArray(array,5);
    for(int i = 0; i < 5; i++){
        std::cout << array[i];
    }
    return 0;
}