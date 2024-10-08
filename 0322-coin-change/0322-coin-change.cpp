class Solution {
public:
    int knapsack(vector<int>&coins,int amt)
    {
        int n=coins.size();

        int dp[n+1][amt+1];

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=amt;j++)
            {
                if(i==0)
                {
                    dp[i][j]=INT_MAX-1;
                }

                if(j==0)
                {
                    dp[i][j]=0;
                }

                if(i==1)
                {
                    if(j%coins[i-1]==0)
                    {
                        dp[i][j]=j/coins[i-1];
                    }
                    else
                    {
                        dp[i][j]=INT_MAX-1;
                    }
                }
            }
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amt;j++)
            {
                if(coins[i-1]<=j)
                {
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }

        if(dp[n][amt]==INT_MAX-1)
        {
            return -1;
        }
        return dp[n][amt];
    }
    int coinChange(vector<int>& coins, int amount) {
        return knapsack(coins,amount);
    }
};