int searchInsert(int* nums, int numsSize, int target) {
    int i = 0; 
    int j = numsSize - 1; 
    int mid, ans = 0; 
    while ( i <= j)
    {   mid = (i + j)/2; 
        if(nums[mid] == target){ 
            return mid; 
        } 
        else if(nums[mid] > target){ 
            j = mid - 1; 
        } 
        else{ 
            i = mid + 1; 
            ans = mid;
        } 
    } 
    if(ans == 0 && nums[ans] > target)
        return ans;
    return ans + 1; 
}