#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int>& nums, int low, int high)
{
    int pt = nums[low];
    int i = low, j = high;

    while (i < j)
    {
        while (nums[i] <= pt && i <= high)
        {
            i++;
        }
        
        while (nums[j] > pt && j >= low)
        {
            j--;
        }
        
        if(i < j) swap(nums[i], nums[j]);
    }
    swap(nums[low], nums[j]);
    
    return j;
}

void quickSort(vector<int>& nums, int low, int high)
{
    if(low < high)
    {
        int pIndex = pivot(nums, low, high);
        quickSort(nums, low, pIndex - 1);
        quickSort(nums, pIndex + 1, high);
    }
}

int main()
{
    vector<int> nums = {1, 3, 2, 4, 7, 9 ,5 ,6};

    quickSort(nums, 0, nums.size() - 1);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    
    return 0;
}