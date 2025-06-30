#include<iostream>
using namespace std;


bool isPresent(int arr[][4], int key, int row, int col)
{
    if(arr[3][4]==key)
    {
        return true;
    }
    else{
        return false;
    }
}


int factorial(int n)
{
    if(n==0) return 1;
    else return n*factorial(n-1);
}

int main()
{
    //creating a 2d array
    // int arr[3][4];
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{5,9,7,5}};          //inserting element
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};             //inserting element



    //taking user input
    // for(int row = 0; row<3; row++)
    // {
    //     for(int col = 0; col<4; col++)
    //     {
    //         cin>>arr[row][col];
    //     }
    // }



    // for(int col = 0; col<4; col++)
    //     {
    //         for(int row = 0; row<3; row++)
    // {
    //      cin>>arr[row][col];
    //     }
    // }

    // for(int r = 0; r<3; r++)
    // {
    //     for(int c = 0; c<4; c++)
    //     {
    
    //         cout<<arr[r][c]<<" ";

    //     }
    //     cout<<endl;
    // } 
    isPresent(arr,4,3,4);
    factorial(5);


}

