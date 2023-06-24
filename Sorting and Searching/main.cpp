#include <iostream>
using namespace std;

int linearSearch(int* a,int s,int e);
int* arrayMaker(int s);
int binarySearch(int arr[],int s ,int e);
void selectionSort(int arr[],int s);
void bubbleSort(int arr[],int s);
void insertionSort(int arr[],int s);


int main(){

    int arr[5] = {5,1,3,2,9};
    // linearSearch(arr,5,5);
    // binarySearch( arr,5,6);

    // selectionSort(arr,5);
    // bubbleSort(arr,5);

       insertionSort(arr,5);



    return 0;
}

int* arrayMaker(int s){
    int *array = new int[s];
    for(int i=0;i<s;i++){
        cout<<"enter element data "<<endl;
        cin>>array[i];
    }
    return array;
}

int linearSearch(int arr[],int s,int e){
    int i=0;
    while(arr[i] !=e && i<s){
        i++;
    }

    if(arr[i]!=e){
        cout<<"element not found "<<endl;
    }else{
        cout<<"element found at "<<i<<endl;
    }
}

int binarySearch(int arr[],int s ,int e){

    int beg = 0;
    int end = s-1;
    int mid = (beg+end)/2;

    while(beg<=end && arr[mid]!=e){
        if(arr[mid]<e){
            beg = mid+1;
        }else{
            end = mid-1;
        }

        mid = (beg+end)/2;
    }

    if(arr[mid]==e){
        cout<<"element found at "<<mid<<endl;
    }else{
        cout<<"element not found "<<endl;
    }
}

void selectionSort(int arr[],int s){
    
    
    for(int i=0;i<s-1;i++){
        int min = i;
        for(int j=i+1;j<s;j++){
            
            if(arr[min]>arr[j]){
                    min = j;
                    
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 


    }

    for(int k=0;k<s;k++){
        cout<<"element at "<<k <<"is "<< arr[k]<<endl;
    }
}

void bubbleSort(int arr[],int s){
    for(int i=0;i<s-1;i++){
        bool swapped = true;
        for(int j=0;j<s-i;j++){
            if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp; 
                    swapped = false;
            }
        }
        if(swapped){
            break;
        }
           
    }

      for(int k=0;k<s;k++){
        cout<<"element at "<<k <<"is "<< arr[k]<<endl;
    }
}



void insertionSort(int arr[], int n) {

    for (int i=0;i < n-1;i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j-1] ;
            arr[j-1] = arr[j];
            arr[j]=temp;
            
            j--;
        }
        
    }

     for(int k=0;k<n;k++){
        cout<<"element at "<<k <<"is "<< arr[k]<<endl;
    }
}
