class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         TLE Approach      
//         int maxProf = 0;
//         for(int i = 0; i < prices.size()-1; i++) {
//             for(int j = i+1; j < prices.size(); j++) {
//                 if((prices[j]-prices[i]) > maxProf) 
//                     maxProf = prices[j] - prices[i];
//             }
//         }
        
//         return maxProf;
        
        
//         Better Approach
        
        int lsf = INT_MAX;        // least so far
        int op = 0;         // overall profit
        int pist = 0;           // profit of the today;
        
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < lsf) {
                lsf = prices[i];
            }
            
            int pist = prices[i] - lsf;
            
            if(op < pist) {
                op = pist;
            }
        }
        
        return op;

    }
};