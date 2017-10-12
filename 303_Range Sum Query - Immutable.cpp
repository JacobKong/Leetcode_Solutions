
class NumArray {
    public:
    // vector<vector<int> > nums_sum_vec;
    // int** nums_sum_vec;
    int* nums_sum_vec;
    NumArray(vector<int> nums) {
        
        int nums_size = nums.size();
        // nums_sum_vec = new int*[nums_size];
        nums_sum_vec = new int[nums_size+1];
        for (int i=0; i<nums_size; i++){
            nums_sum_vec[i+1] = nums[i]+nums_sum_vec[i];
        }
        //         // 将vector全部初始化为0
        //         for (int i=0; i<nums_size; i++){
        //             nums_sum_vec[i] = new int[nums_size];
        //             // vector<int> tmp;
        //             // for(int j=0; j<nums_size; j++){
        //             //    tmp.push_back(0);
        //             // }
        //             // nums_sum_vec.push_back(tmp);
        //         }
        //         // 初始化i=j的情况
        //         for (int i=0; i<nums_size; i++){
        //             nums_sum_vec[i][i] = nums[i];
        //         }
        
        //         // 进行其他位置的计算
        //         for(int i=0; i<nums_size; i++){
        //             for(int j=i+1; j<nums_size; j++){
        //                 nums_sum_vec[i][j] = nums_sum_vec[i][j-1] + nums_sum_vec[j][j];
        //             }
        //         }
    }
    
    int sumRange(int i, int j) {
        return nums_sum_vec[j+1]-nums_sum_vec[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
