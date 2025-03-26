class Solution {
    public:
        int minimumSum(int n, int k) {
            if (n <= k/2) {
                return SeriesSum(1, 1, n);
            } else {
                return SeriesSum(1,1,k/2) + SeriesSum(k,1,n -k/2);
            }
        }
    private:
        // Sn = n(a1+an)/2
        int SeriesSum(int a1, int d, int n){
            return (a1 +a1+ (n -1) *d) * n/2;
        }
    
    };