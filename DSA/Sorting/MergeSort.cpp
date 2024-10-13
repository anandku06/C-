#include <bits/stdc++.h>
using namespace std;

void merger(vector<int>& nums, int low, int mid, int high)
{
    int left = low, right = mid + 1;
    vector<int> temp;

    while (left <= mid && right < high)
    {
        if(nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }

    while (right < high)
    {
        temp.push_back(nums[right]);
        right++;
    }
    
    for (int i = low; i < high; i++)
    {
        nums[i] = temp[i - low];
    }
} 

void mergeSort(vector<int>& nums, int low, int high)
{
    if(low >= high) return;

    int mid = (low + high) / 2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);
    merger(nums, low, mid, high);
}

int main()
{
    vector<int> nums = {1,24,67,34,76,46,8};

    cout << "Before Sorting: " << endl;
    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    mergeSort(nums, 0, nums.size());

    cout << "\nAfter Sorting: " << endl;
    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}