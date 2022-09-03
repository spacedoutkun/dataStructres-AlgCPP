/******************************************************************************

Ravi is playing a game in which he recieves a score in each level. There are N levels in the game and Ravi's score in these N levels is already given to you. You are then provided with Q queries each containing a single integer b, and you need to tell the total of Ravi's scores till level b for each query.

Input Format

The first line contains a single integer N, the number of levels in the game.

• Next N lines contain single integer each, the scores in the levels

• Next line contains a single integerQ, the number of queries.

• Next Q lines contain single integer each, the query value.

Evaluation Parameters

⚫ Sample Input

3
1
4
2
2
1
3


⚫ Sample Output

1

7

*******************************************************************************/
#include <stdio.h>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

class Sol
{
    public:
    vector<int> Solution(vector<int> scores,vector<int> queries)
    {
        vector<int> c=scores;
                        

        
        for (auto x=queries.begin();x!=queries.end();++x)
        {
            auto m=0;
            if(x>queries.begin())
            {
                auto m=*x;

                auto c=accumulate(scores.begin()+1,scores.begin()+m+1,0);
                cout<<"c "<<c<<endl;
            }
        }
        return scores;
    }
};
int main()
{
    Sol od;
    vector<int> c=od.Solution({3,1,4,2},{2,1,3});
    return 0;
}
