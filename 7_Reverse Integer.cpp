
class Solution {
    public:
    int reverse(int x) {
        if (x==0) {
            return 0;
        }else{
            stringstream ss;
            ss<<x;
            string x_str = ss.str();
            string reverse_x="";
            int len = x_str.size();
            int flag = 0;
            for (int j = len - 1; j>0; j--) {
                if (x_str[j]!='0') {
                    flag = 1; // 找到第一个非零的数
                    reverse_x += x_str[j];
                }else{
                    if (flag==1){
                        reverse_x += x_str[j];
                    }
                }
            }
            if (x>0) {
                reverse_x += x_str[0];
            }
            stringstream reverse_ss;
            reverse_ss<<reverse_x;
            int result;
            reverse_ss>>result;
            if (x<0) {
                result = -result;
            }
            if (result==2147483647 || result==-2147483647) {
                return 0;
            }else{
                return result;
            }
            
        }
    }
};
