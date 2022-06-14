class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
         Arrays.sort(nums);
    Set<List<Integer>> set = new HashSet<>();
    for(int i = 0; i < nums.length; i++){
        for(int j = i+1; j < nums.length; j++){
            int start = j+1;
            int end = nums.length-1;
            while(end > start){
                int sum = nums[i]+ nums[j] + nums[start] + nums[end];
                if(sum == target){
                    set.add(Arrays.asList(nums[i], nums[j], nums[start++], nums[end--]));
                }
                else if (sum > target) end --;
                else start++;
            }
        }
    }
      return new ArrayList<>(set);
        
    }
}