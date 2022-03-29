void rFilter(char *s) {
    // Your code goes here
    //*(s) = '_';
   // *(s + 1) = '\0';
    int n =strlen(s);
    for (int i=n-1;i>=0;i--)
    {
        if (!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z'))
        {
          s[i] = '_';
        }
        
        else break;
    }
    
   
}