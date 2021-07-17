#include <iostream>
using namespace std;

int *apply_all(int array1[], size_t size1, int array2[] ,size_t size2){
    int position{0};
    int *my_array{nullptr};
    my_array = new int[size1*size2];
    for(int i=0;i<size2;i++){
        for(int j=0;j<size1;j++){
            my_array[position] = array1[j]*array2[i];
            position++;
        }
    }
    return my_array;
    
}
void print(int *this_array, size_t size4){
    cout << "[";
    for(int i=0;i<size4;i++){
        cout << *(this_array +i) << " ";  
    }
    cout << "]" << endl;
}

int main(){
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    print(array1, 5);
    print(array2,3);
    
    int * matrix_array = apply_all(array1,5,array2,3);
    print(matrix_array,15);
}