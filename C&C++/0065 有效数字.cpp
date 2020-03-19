/*
请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。
例如，字符串"+100"、"5e2"、"-123"、"3.1416"、"0123"及"-1E-16"都表示数值，但"12e"、"1a3.14"、"1.2.3"、"+-5"及"12e+5.4"都不是。
*/

class Solution {
public:
    bool isNumber(string s) {
        s.erase(0, s.find_first_not_of(" ")); //去掉空格(什么骚测试用例))
        s.erase(s.find_last_not_of(" ") + 1);
        //根据e来划分底数和指数
        int e=s.find('e');
        //指数为空，判断底数
        if(e==string::npos) return judgeP(s);
        //指数不为空，判断底数和指数
        else return judgeP(s.substr(0,e))&&judgeS(s.substr(e+1));
    }

    bool judgeP(string s)//判断底数是否合法
    {
        bool result=false,point=false;
        int n=s.size();
        for(int i=0;i<n;++i)
        {
            if(s[i]=='+'||s[i]=='-'){//符号位不在第一位，返回false
                if(i!=0) return false;
            }
            else if(s[i]=='.'){
                if(point) return false;//有多个小数点，返回false
                point=true;
            }
            else if(s[i]<'0'||s[i]>'9') return false;
            else result=true;

        }
        return result;
    }

    bool judgeS(string s)//判断指数是否合法
    {   
        bool result=false;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='+'||s[i]=='-'){    //符号位不在第一位，返回false
                if(i!=0) return false;
            }
            else if(s[i]<'0'||s[i]>'9') return false; //除了符号位，其他地方必须纯数字
            else result=true;
        }
        return result;
    }
};
