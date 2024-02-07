#include <iostream>


int Max(int Arr[], int N) {
    int max = Arr[0];
    for (int i = 1; i < N; i++)
        if (Arr[i] > max)
            max = Arr[i];
    return max;
}

int Min(int Arr[], int N) {
    int min = Arr[0];
    for (int i = 1; i < N; i++)
        if (Arr[i] < min)
            min = Arr[i];
    return min;
}

int *Counting_Sort(int Arr[], int N) {
    int max = Max(Arr, N);
    int min = Min(Arr, N);
    int *Sorted_Arr = new int[N];

    int *Count = new int[max - min + 1];

    for (int i = 0; i < N; i++) Count[Arr[i] - min]++;

    for (int i = 1; i < (max - min + 1); i++) Count[i] += Count[i - 1];

    for (int i = N - 1; i >= 0; i--) {
        Sorted_Arr[Count[Arr[i] - min] - 1] = Arr[i];
        Count[Arr[i] - min]--;
    }

    return Sorted_Arr;
}

int main() {
    int Arr[] = {47, 65, 20, 66, 25, 53, 64, 69, 72, 22,
                 74, 25, 53, 15, 42, 36, 4,  69, 86, 19},
        N = 20;
    int *Sorted_Arr = Counting_Sort(Arr,N);
    for(int i = 0; i < 20; i++){
        std::cout << Sorted_Arr[i] << " ";
    }
}

// gtime -f "real %es\nuser %Us \nsys  %Ss \nMemory Used:%MKB \ncpu %P" g++ -std=c++17 main.cpp