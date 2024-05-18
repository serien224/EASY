class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char>ss;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') ss.push(s[i]);
            else if(s[i]=='[') ss.push(s[i]);
            else if(s[i]=='{') ss.push(s[i]);
            else if(s[i]==')'&&!ss.empty()&&ss.top()=='(') ss.pop();
            else if(s[i]==']'&&!ss.empty()&&ss.top()=='[') ss.pop();
            else if(s[i]=='}'&&!ss.empty()&&ss.top()=='{') ss.pop();
            else ss.push(s[i]);
        }
        if(ss.empty()) return true;
        else return false;
    }
};
