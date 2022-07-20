#include <iostream>
#include <vector>

using namespace std;
//iterative approach
 int Search(vector<int>nums,int target)
    {
        int l,h,mid;
        l=0;
        h=nums.size()-1;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;

        }
        return -1;

    }
//recursive approach
int BinarySearch(int vec[] ,int l,int h,int target)
{
 int mid;
 if(l<=h)
 {
     mid=(l+h)/2;
     if(vec[mid]==target)
        return mid;
     else if(vec[mid]<target)
        return BinarySearch(vec,mid+1,h,target);
     else
        return BinarySearch(vec,l,mid-1,target);
 }
 return -1;
}
int main()
{
int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
int result=BinarySearch(arr,0,n-1,x);
if(result==-1)
    cout<<"Element not found";
else
    cout<<"Element found at "<<result<<" index"<<endl;
vector<int> vec ={1,2,3,4,5};
int b=Search(vec,5);
if(b==-1)
    cout<<"Not Found";
else
    cout<<"Found at "<<b<<" index";



    return 0;
}
