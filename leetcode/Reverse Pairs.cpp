class Solution {
public:
    int merge(vector<int>& nums, int l, int mid, int r)
    {
        int pair=0;
        int i = l;
        int j = mid+1;
        int k=0;
        int a[r-l+1];
        while(i<=mid and j<=r)
        {
            if((long)nums[i]>(2*(long)nums[j]))
            {
                pair+=mid-i+1;
                j++;
            }
            else
            {
                i++;
            }
        }
        i = l;
        j = mid+1;
        while(i<=mid and j<=r)
        {
            if(nums[i]<=nums[j])
            {
                a[k] = nums[i];
                k++;
                i++;
            }
            else
            {
                a[k] = nums[j];
                k++;
                j++;
            }
        }
        while(i<=mid)
        {
            a[k] = nums[i];
            k++;
            i++;
        }
        while(j<=r)
        {
            a[k] = nums[j];
            k++;
            j++;
        }
        k=0;
        for(i=l;i<=r;i++)
        {
            nums[i] = a[k++];
        }
        return pair;
    }
    int mergeSort(vector<int>& nums, int l, int r)
    {
        int pair = 0;
        if(l<r)
        {
            int mid = (l+r)/2;
            pair+=mergeSort(nums,l,mid);
            pair+=mergeSort(nums,mid+1,r);
            pair+=merge(nums,l,mid,r);
        }
        return pair;
    }
    int reversePairs(vector<int>& nums) 
    {
        int n = nums.size();
        return mergeSort(nums,0,n-1);
    }
};