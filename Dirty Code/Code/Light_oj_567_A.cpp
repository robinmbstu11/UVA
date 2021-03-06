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
#define RADIANS(x)       (((1.0 * x * PI) / 180.0))
#define DEGREES(x)       (((x * 180.0) / (1.0 * PI)))

template<class T> LLI toBinary(T n)
{
    LLI ret=0;
    while(n)
    {
        if(n%2==1) ret++;
        //else ret+='0';
        n>>=1;
    }
    //reverse(ret.begin(),ret.end());
    return ret;
}

main()
{
    LLI n,T,p;
    scanf("%lld",&T);
    for( LLI t=1; t<=T; t++ )
    {
        scanf("%lld",&n);
        LLI p=toBinary(n);
        p+=1;
        if( p% 2 == 0) printf("Case %lld: Even\n",t);
        else if( p %2 == 1) printf("Case %lld: Odd\n",t);
        //cout<<p<<endl;
    }
}
