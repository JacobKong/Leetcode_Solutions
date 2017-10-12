
class Solution {
    public:
    bool isPalindrome(int x) {
        stringstream ss;
        ss<<x;
        string x_str;
        ss>>x_str;
        int len = x_str.size();
        if (len==1) return true; // 单个数字都为正
        else{
            if(x>0){ // 正数
                if(len%2==0){ // 偶数
                    int n=1;
                    for(int i=len/2-1; i>=0; i--){
                        if(x_str[i] == x_str[i+n]) {n+=2; continue;}
                        else return false;
                    }
                    return true;
                }else{ // 奇数个
                    int n=2;
                    for(int i=len/2-1; i>=0; i--){
                        if(x_str[i] == x_str[i+n]) {n+=2; continue;}
                        else return false;
                    }
                    return true;
                }
            }else{ // 负数
                return false;
            }
        }
        
    }
};
