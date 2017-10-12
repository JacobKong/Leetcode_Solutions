
class Solution {
    public:
    int myAtoi(string str) {
        int len = str.size();
        if (len==0 || (len==1 && str[0]=='0')) {
            return 0;
        }else{
            stringstream ss;
            string str_int = "";
            int flag = 0;
            for (int i=0; i<len; i++) {
                if (str[i] != '0') {
                    flag = 1;
                    str_int+=str[i];
                }else{
                    if (flag == 1) {
                        str_int+=str[i];
                    }
                }
            }
            ss<<str_int;
            int result;
            ss>>result;
            return result;
        }
    }
};
