	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int end = S.length()-1;
	    int start = 0;
	    while(start<=end)
	    {
	        if(S[start++]!=S[end--])
	        {
	            return 0;
	        }
	    }
	    return 1;
	}

};

https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
