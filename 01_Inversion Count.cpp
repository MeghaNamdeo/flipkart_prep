//brute force 
int numberOfInversions(vector<int>&a, int n) {
    int c=0;
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(a[i]>a[j])c++;
       }
   }return c;
}
/* TC:O(n^2)
SC:O(1)
*/