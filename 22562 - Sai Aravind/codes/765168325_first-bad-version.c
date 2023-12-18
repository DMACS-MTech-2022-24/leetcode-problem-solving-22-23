// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int l=1,r=n;
    while(l<r)
    {
        int m=l+((r-l)>>1);
        if(isBadVersion(m))
        {
            if(isBadVersion(m+1))
            {
               r=m;
            }
            else
            {
                return m;
            }
        }
        else
        {
            l=m+1;
        }
    }
    return l;
}