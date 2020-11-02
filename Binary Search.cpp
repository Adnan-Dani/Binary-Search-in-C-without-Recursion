/**
 *  @file    Binary_Search.cpp
 *  @author  Muhammad Adnan, Szabist university isb
 *  @date    02/10/2020
 *
 *  @brief Binary Search Algorithm Implementation.
*/

#include <iostream>
using namespace std;

int main()
{
	int target;
    int A[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    
    cout<<"Enter Number that You want to Find:  ";
    cin>>target;
	int first = 0;
	int last  = (sizeof(A)/sizeof(int))-1;  //-1 bcz array start from zero
	
	
	while(last>=first){
	int middle = (first+last)/2;
        if(A[middle] == target){
            cout << "The value is found.\nThe index is: " << middle <<", value is: "  << A[middle] << endl;
            break;
        } else if(target > A[middle] ){
            first = middle+1;
        } else{
            last = middle-1;
        }
    }

    if(first > last){
        cout << "The value is not found." << endl;
    }

    return 0;
}
