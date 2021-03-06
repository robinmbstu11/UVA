#include <bits/stdc++.h>

using namespace std;

#define SYN ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int LLI;
typedef unsigned long long int ULLI;

#define debug(x)         cerr<<__LINE__<<" "<<#x<<" "<<x<<endl;
#define IMAX ((unsigned)1<<31)-1
#define eps 1e-11
#define fill(a,v) memset(a,v,sizeof (a))
#define SZ(X) ((int)X.size())
#define VI vector<int>
#define VS vector<string>
#define PB push_back
#define MSI map<string,int>
#define MSLI map<string,LLI>
#define MCI map<char,int>
#define PI acos(-1.0)
#define mk make_pair
#define pLLI pair<LLI,LLI>
#define xx first
#define yy second
#define st string

#define MOD 1000000007
#define MX 1000000
#define RADIANS(x)       (((1.0 * x * PI) / 180.0))
#define DEGREES(x)       (((x * 180.0) / (1.0 * PI)))


LLI fastExpo( LLI b, LLI p)
{
    LLI res=1,x=b;
    while(p)
    {
        if(p&1) res*=x;
        x*=x;
        p=p>>1;
    }
    return res;
}

LLI cnt=0,mx,cnt1=0,cnt2=0;

int fun(int val)
{
    // debug(val)
    if( val >= mx ) return 0;
    else cnt++;
    fun(val<<1);
    fun((val<<1)+1);
}

int main()
{
    int n,m,ar[100];
    while(cin>>n>>m)
    {
        for( int i=0; i<m; i++ ) cin>>ar[i];
        mx=fastExpo(2,n)-1;
        //cout<<mx<<endl;
        for( int i=0; i<m; i++ )
        {
            fun(ar[i]);
            cout<<cnt<<endl;
        }
    }
    return 0;
}
