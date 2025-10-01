class Solution {
public:
    int repeatedStringMatch(string a, string b) {

    if(a.size() <= b.size())
    {
    int ans = -1 , i = 0 , j = 0 ;
    while(b[0] != a[i] and i < a.size())
    {
        i++;
    }   
    if(i == a.size())return -1 ;
    int n = b.size()/a.size();
    if(i)n++;
    ;
    string s = a ;
    while(j < n)
    {
        j++;
        a += s ;
    }
    j = 0 ;
    while(j < b.size())
    {
        if(a[i] !=  b[j])
        {
            return -1 ;
        }
        j++;
        i++;
    }
    return n ;
    }else{
      int ans = -1 , i = 0 , j = 0 ;
    while(a[0] != b[i] and i < b.size())
    {
        i++;
    }   
    if(i == b.size())return -1 ;
    int n = a.size()/b.size();
    if(i)n++;
    n--;
    string s = b ;
    while(j < n)
    {
        j++;
        b += s ;
    }
    j = 0 ;
    while(j < b.size())
    {
        if(a[i] !=  b[j])
        {
            return -1 ;
        }
        j++;
        i++;
    }
    return n ;   
    }
    }
};