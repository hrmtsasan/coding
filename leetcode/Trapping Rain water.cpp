class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size()==0)
            return 0;

        int size = height.size();
        vector<int> maxL(size);
        vector<int> maxR(size);
        maxL[0] = height[0];
        for(int i=1;i<size;i++)
        {
            maxL[i] = max(maxL[i-1],height[i]);
        }
        maxR[size-1] = height[size-1];
        for(int i=size-2;i>=0;i--)
        {
            maxR[i] = max(maxR[i+1],height[i]);
        }
        vector<int> water(size);
        for(int i=0;i<size;i++)
        {
            water[i] = min(maxL[i],maxR[i])-height[i];
        }
       return accumulate(water.begin(),water.end(),0);
    }
};