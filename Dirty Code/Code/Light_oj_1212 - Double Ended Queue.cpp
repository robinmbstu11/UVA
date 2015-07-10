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
#define MLLI map<LLI,LLI>
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


int main()
{
    LLI val,T;
    scanf("%lld",&T);
    for( int t=1; t<=T; t++ )
    {
        int s,E;
        scanf("%d%d",&s,&E);
        printf("Case %d:\n",t);
        string str;
        deque<LLI>de;
        for( int i=0; i<E; i++ )
        {
            cin>>str;
            if( str == "pushLeft" || str == "pushRight" )
            {
                scanf("%lld",&val);
            }
            if( str == "pushLeft" )
            {
                if( de.size()+1 > s ) printf("The queue is full\n");
                else
                {
                    de.push_front(val);
                    printf("Pushed in left: %lld\n",val);
                }
            }
            else if( str == "pushRight" )
            {
                if(de.size()+1 > s ) printf("The queue is full\n");
                else
                {
                    de.push_back(val);
                    printf("Pushed in right: %lld\n",val);
                }
            }
            else if( str == "popLeft" )
            {
                if(de.empty()) printf("The queue is empty\n");
                else
                {
                    printf("Popped from left: %lld\n",de.front());
                    de.pop_front();
                }
            }
            else if( str == "popRight" )
            {
                if( de.empty()) printf("The queue is empty\n");
                else
                {
                    printf("Popped from right: %lld\n",de.back());
                    de.pop_back();
                }
            }
            //printf("%lld\n",de.size());
        }
    }
    return 0;
}