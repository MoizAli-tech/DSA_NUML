#include <iostream>
#include <cmath>
#include <string>
#include "DBLL.h"

using namespace std;


template <class T>
class Hashmap{
    T* arr;
    int size;
    public:
    Hashmap(int s=5){
        size=s;
        arr = new T(size);
        for(int i=0;i<size;i++){
            arr[i] = 0;
        }
    }


    //hashing functions

    int division(T element){
        return element % size;
    }

    int multiply(T element){
        double mul = element*0.8;
        return floor(size*( fmod(mul,1.0)));
    }


    void insert (T element){
        int key = multiply(element);

        if(arr[key] == 0){
           arr[key] = element;
        }else{
           int i=0;
            
            while(arr[key]!=0 && i<size){
                i++;
                key++;
            }


            if(arr[key]==0){
                arr[key] = element;
            }else if(i>=size){
                int i=0;
                while(i<key && arr[i] !=0){
                    i++;
                }
                 if(arr[i]==0){
                    arr[i] = element;
                }else{
                    cout<<"no space avaliable "<<endl;
                }
            }else{
                cout<<"element not found "<<endl;
            }
            
        }

        //quadratic probing

        // if(arr[key] ==0){
        //     arr[key]= element;
        // }else{
        //    int i=0;
        //    while(i<size && arr[key] !=0){
        //       key = (element + i*i)%size;
        //       i++;
        //    }

        //    arr[key]= element;
           
        // }


        //separate channing
        
        

        
    }

    void traversel(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }

    void search(T element){
         int key = multiply(element);

        if(arr[key] == 0){
           arr[key] = element;
        }else{
           int i=0;
            
            while(arr[key]!=element && i<size){
                i++;
                key++;
            }


            if(arr[key]==element){
               cout<<"element found at "<<key<<endl;
            }else if(i>=size){
                int i=0;
                while(i<key && arr[i] !=element){
                    i++;
                }
                 if(arr[i]==element){
                    cout<<"element found at "<<i<<endl;
                }else{
                    cout<<"element not found"<<endl;
                }
            }else{
                cout<<"element not found "<<endl;
            }
        }
    }
    // int mid_square(T element){
    //     int sq = element * element;
    //     string number = to_string(sq);
    //     int length = number.length();

    // // Check if the length of the number is odd or even
    // if (length % 2 == 1) {
    //     int middleIndex = length / 2;
    //     char middleDigit = number[middleIndex];
    //     int num = stoi(string(1,middleDigit))
    //     int ascii = middleDigit - "O";
    //     return num;
    // } else {
    //     int middleIndex1 = length / 2 - 1;
    //     int middleIndex2 = length / 2;
    //     char middleDigit1 = number[middleIndex1];
    //     char middleDigit2 = number[middleIndex2];

    //     cout << "Middle digits: " << middleDigit1 << middleDigit2 << endl;
    // }

    
};