int removeDuplicates(int* nums, int numsSize){
    int c=0;
for(int i=0;i<numsSize;i++){
    if(nums[c]!=nums[i]){c++;
    nums[c]=nums[i];
    }
}
return c+1;
}
