#include<iostream>

using namespace std;

int main(){


    int arr1[100];

    for(int i = 0; i < 100; i++){
        arr1[i] = i+1;
    }

    for(int i = 0; i < 100; i++){

        cout << i << "-----" << arr1[i] << endl;

    }

}