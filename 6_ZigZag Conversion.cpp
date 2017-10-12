class Solution {
    public:
    string convert(string s, int numRows) {
        vector<vector<int> > str_idx;
        int len = s.size();
        string result = "";
        int t = 0;
        if (numRows>1) {
            t = 2*numRows-2; // 周期
        }else{
            t = 1;
        }
        if (len>0) {
            int set_num_min = floor(double(len)/double(t));
            int set_num_max = ceil(double(len)/double(t));
            // 分组
            for (int i=0; i<set_num_min; i++) {
                vector<int> idx;
                for (int j=0; j<t; j++) {
                    idx.push_back(i*t+j);
                }
                str_idx.push_back(idx);
            }
            vector<int> idx;
            for (int i=set_num_min*t; i<len; i++) {
                idx.push_back(i);
            }
            str_idx.push_back(idx);
            
            // 输出
            
            for (int i=0; i<set_num_max; i++) {
                result+=s[str_idx[i][0]];
            }
            if (len>=numRows) {
                for (int i=1; i<numRows; i++) {
                    for (int j=0; j<set_num_max; j++) {
                        if (i!=numRows-1) {
                            if (j*t+i<len) {
                                result+=s[str_idx[j][i]];
                            }
                            if (j*t+(t-i)<len) {
                                result+=s[str_idx[j][t-i]];
                            }
                        }else{
                            if (j*t+i<len) {
                                result+=s[str_idx[j][i]];
                            }
                        }
                    }
                }
            }else{
                for (int i=1; i<len; i++) {
                    for (int j=0; j<set_num_max; j++) {
                        if (i!=numRows-1) {
                            if (j*t+i<len) {
                                result+=s[str_idx[j][i]];
                            }
                            if (j*t+(t-i)<len) {
                                result+=s[str_idx[j][t-i]];
                            }
                        }else{
                            if (j*t+i<len) {
                                result+=s[str_idx[j][i]];
                            }
                        }
                    }
                }
            }
            
            return result;
        }else{
            return result;
        }
    }
};
