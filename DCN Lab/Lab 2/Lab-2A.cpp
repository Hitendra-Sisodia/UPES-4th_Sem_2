#include<iostream>
using namespace std;
int main()
{
    int bits;
    cout<<"Enter the Total number of bits: ";
    cin>>bits;
    int arr[100];
    bool val = true;
    for(int i = 0; i < bits ; i++){
        cout<<"Enter the "<<i+1<<"ith bits: ";
        int input = 0;
        cin>>input;
        if(input == 1 || input == 0){
            arr[i] = input;
        }
        else{
            cout<<"Please enter valid bits";
            val = false;
            break;
        }
    }
    int count = 0;
    for(int i = 0 ; i < bits ; i++) {
        if(arr[i] == 1){
            count++;
        }
        else if(arr[i] == 0){
            count = 0;
        }
        if(count == 5 && arr[i+1] == 1){
            for(int j = bits ; j > i ; j--){
                arr[j+1] = arr[j];
            }
        }
        arr[i] = 0;
        bits++;
        count = 0;
    }
    // loop for display
    if(val){
        for(int i = 0 ; i < bits ; i++){
            cout<<arr[i];
        }
    }
}