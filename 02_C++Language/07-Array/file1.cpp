#include <iostream>
using namespace std;
    // function creation
    int total_num(int arr[], int size) {
        int total = 0;
        for (int i = 0; i < size; i++)
        {
            total += arr[i];
        }
        return total;
    }
    int* printnum(int nums){
        int* total = new int[nums];
        for (int i = 0; i < nums; i++)
        {
            total[i] = i+1;
        }
        return total;
    }
int main() {
    int roll_num[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        cout << roll_num[i] << " ";
    }
    cout << endl;
    cout << " the first roll number is: " << roll_num[0] <<endl;
    cout << " the first roll number is: " << roll_num[1] <<endl;
    cout << " the first roll number is: " << roll_num[2] <<endl;
    cout << " the first roll number is: " << roll_num[3] <<endl;
    cout << " the first roll number is: " << roll_num[4] <<endl;
    
    int num[8] = {500,42,12,6,5,88,456,58};
    int ans = total_num(num , 8);
    cout << ans << endl;
    int nums = 9;
    int* ans2 = printnum(nums);
    for (int i = 0; i < nums; i++)
    {
        cout << ans2[i] <<endl;
    }
    delete[] ans2;

    int twodarr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    for (int i = 0; i < 3; i++)
    {
        cout << "row is " << i+1 <<endl;
        for (int j = 0; j < 3; j++)
        {
            cout << " value are " << twodarr[i][j] <<endl;
        }
        
    }
    
    return 0;
}