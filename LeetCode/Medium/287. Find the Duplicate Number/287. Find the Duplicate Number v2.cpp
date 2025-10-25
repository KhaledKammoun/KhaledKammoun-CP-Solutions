class Solution {
public:
    // This problem is solved using Floyd's Tortoise and Hare (Cycle Detection) approach
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0] ;

        // Phase 1: Move slow by 1 step and fast by 2 steps
        // They will meet somewhere inside the cycle
        do {
            slow = nums[slow] ;
            fast = nums[nums[fast]] ;
        } while (slow != fast) ;


        // Phase 2: Find the entry point of the cycle (the duplicate)
        // Move slow to the start of the array, then move both pointers 1 step at a time
        slow = nums[0] ;

        while (slow != fast) {
            slow = nums[slow] ;
            fast = nums[fast] ;
        }

        return slow ;
     }
};
