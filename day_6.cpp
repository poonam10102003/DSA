#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int row, int col)
{
    for(int row = 0; row<3; row++)
    {
        for(int col = 0; col<4 ;col++){
    
    if(arr[row][col]==key)
    {
        return true;
    }
    else{
        return false;
    }
}
}
}



void PrintSum(int arr[][4],int row, int col)
{
    int sum = 0;
    int max = arr[0][0];
    for(int row =0; row<3; row++)
    {
        for(int col = 0; col<4; col++)
        {
            sum += arr[row][col];
            if(arr[row][col]>max)
            {
                max = arr[row][col];
                // cout<<max;
            }

    
        }
        cout<<max;
        cout<<sum;
        cout<<endl;

    }
    

}



void wavePrint(int arr[][4], int col, int row)
{
    for(int col = 0; col<4; col++)
    {
        if(col%2 == 0)
        {
            for(int row =0; row<3; row++)
            {
                cout<<arr[row][col]<< " ";

            }
        }

        for(int row = 0; row<3; row++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}


void spiralPrint(int arr[][4], int row, int col)
{
    int topRow = 0, bottomRow = row - 1;
    int leftCol = 0 ,rightCol = col - 1;
    while(topRow <= bottomRow && leftCol <= rightCol)
    {
        //Print top row
        for(int i = leftCol; i <= rightCol; i++)
        {
            cout<< arr[topRow][i] << " ";
        }
        topRow++;


        //Print right col
        for(int i = topRow; i <= bottomRow; i++)
        {
            cout<<arr[i][rightCol]<<" ";
        }
        rightCol--;

        //Print bottom row
        for(int i = rightCol; i<= leftCol; i++)
        {
            cout<<arr[bottomRow][i]<<" ";
        }
        bottomRow--;

        //print left col
        for(int i = bottomRow; i<= topRow; i++)
        {
            cout<<arr[i][leftCol]<<" ";
        }
        leftCol++;
    }
}



int factorial(int n)
{
    if(n==0) return 1;
    else return n*factorial(n-1);
}



void Print(int n)
{
    if(n==0) return ;

    Print(n-1);
    cout<<n<<" ";
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
    // isPresent(arr,4,3,4);
    // PrintSum(arr,3,4);
    // wavePrint(arr,3,4);
    // spiralPrint(arr,3,4);
    cout<<factorial(5);
    Print(5);


}






















// //Binary Search ......time complexity is log n
// int BinarySearch(int arr[],int size,int key)
// {

//     int start = 0,end = size -1;
//     int mid = (start + end)/2;
//     while (start<=end)
//     {
//         if(arr[mid] == key)
//         {
//             return mid;
//         }
//         if(key>arr[mid])
//         {
//             start = mid + 1;

//         }
//         else{
//             end = mid -1;
//         }
//         mid = (start+end)/2;
        
//     }
    
//     return -1;
    
// }


// int FirstOccurance(int arr1[],int size,int key)
// {
//     int start = 0,end = size -1;
//     int mid = (start + end)/2;
//     int ans =-1;
//     while (start<=end)
//     {
//         if(arr1[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//             //return mid;
//         }
//         if(key>arr1[mid])
//         {
//             start = mid + 1;

//         }
//         else{
//             end = mid -1;
//         }
//         mid = (start+end)/2;
        
//     }
    
//     return ans;

// }



// int LastOccurance(int arr1[],int size,int key)
// {
//     int start = 0,end = size -1;
//     int mid = (start + end)/2;
//     int ans =-1;
//     while (start<=end)
//     {
//         if(arr1[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;
//             //return mid;
//         }
//         if(key>arr1[mid])
//         {
//             start = mid + 1;

//         }
//         else{
//             end = mid -1;
//         }
//         mid = (start+end)/2;
        
//     }
    
//     return ans;

// }

// int main()
// {
//     int arr1[] = {1,2,3,3,3,3,3,5,5,8,8};
//     cout<<"first : "<<FirstOccurance(arr1,11,3)<<endl;
//     cout<<"last : "<<LastOccurance(arr1,11,5)<<endl;
//     int arr[] ={5,4,6,8,3,1,9};
//     cout<<"Key is : "<<BinarySearch(arr,7,9)<<endl;


// }