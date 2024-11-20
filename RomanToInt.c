int romanToInt(char* s) {
    int naux[10]={0};
    int n[10]={0};
    int i =0;
    while (*s != '\0')
    {
       char c= *s;
       printf("while:%c\n",c);
       switch (c)
       {
       case 'I':
        naux[i]=1;
        break;
       case 'V':
       naux[i]=5;
       break;
       case 'X':
       naux[i]=10;
       break;
       case 'L':
       naux[i]=50;
       break;
       case 'C':
       naux[i]=100;
       break;
       case 'D':
       naux[i]=500;
       break;
       case 'M':
       naux[i]=1000;
       break;
       } 
        
       s++;
       i++; 
    }
    for (int  j=0; j < 10; j++)
    {
        if (j>0 && naux[j]>naux[j-1])
        {
            
            
           
                n[j]=naux[j]-naux[j-1];
                n[j-1]=0;
            
            
        }
        else
        {
          n[j]=naux[j];
        }
        
    }
    int fim=0;
    for (int k = 0; k < 10; k++)
    {
      fim+=n[k];
      
    }
    return fim;
}
