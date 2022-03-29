void reverse(char *s) {

    //*(s) = 's';
    //*(s + 1) = '\0';
    // Your code goes here
    int n = strlen(s);
    for (int i=0;i<n/2;i++)
    {
        char temp;
        temp =s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }

    
}