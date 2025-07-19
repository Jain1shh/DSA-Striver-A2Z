class Solution {
public:
    bool isPalindrome(int x) {
       long int rem,rev=0;
        int t=x;
        if(x<0)
        {
            return false;
        }
      while(x>0)
      {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
      }  
      if(rev==t)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
};