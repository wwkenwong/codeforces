#include <cstdio>  
#include <cstring>  
#include <algorithm>  
using namespace std;  
#define LL __int64  
const int MAXN = 100017;  
LL c[MAXN], dp[MAXN];  
void init()  
{  
    memset(dp,0,sizeof(dp));  
    memset(c,0,sizeof(c));  
}  
int main()  
{  
    LL n;  
    LL tt;  
    int i, j;  
    while(~scanf("%I64d",&n))  
    {  
        init();  
        int maxx = 0;  
        for(i = 1; i <= n; i++)  
        {  
            scanf("%I64d",&tt);  
            if(tt > maxx)  
                maxx = tt;  
            c[tt]++;  
        }  
        dp[0] = 0, dp[1] = c[1];  
        for(i = 2; i <= maxx; i++)  
        {  
            dp[i] = max(dp[i-1],dp[i-2]+c[i]*i);  
        }  
        printf("%I64d\n",dp[maxx]);  
    }  
    return 0;  
}  
