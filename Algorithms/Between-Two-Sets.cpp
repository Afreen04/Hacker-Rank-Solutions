#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
bool factorB(int x, vector<int> b)
    {
    for(int i =0 ;i< b.size();i++)
     {
      if(b[i] % x)
          return false;
    }
    return true;
}

bool factorA(int x, vector<int> a)
    {
    for(int i =0 ;i< a.size();i++)
     {
      if(x % a[i])
          return false;
    }
    return true;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    int min =-1,max =101;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        {cin >> a[a_i];
            if(min < a[a_i])
               min = a[a_i]; 
        }
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
        {cin >> b[b_i];
            if(max > b[b_i])
                max = b[b_i];
        }
    }
    int ctr = 0;
    for(int i=min;i<=max;i++)
        {
        if(factorA(i,a))
            if(factorB(i,b))
                ctr++;
    }
    cout<<ctr;
    return 0;
}
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
bool factorB(int x, vector<int> b)
    {
    for(int i =0 ;i< b.size();i++)
     {
      if(b[i] % x)
          return false;
    }
    return true;
}

bool factorA(int x, vector<int> a)
    {
    for(int i =0 ;i< a.size();i++)
     {
      if(x % a[i])
          return false;
    }
    return true;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    int min =-1,max =101;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        {cin >> a[a_i];
            if(min < a[a_i])
               min = a[a_i]; 
        }
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
        {cin >> b[b_i];
            if(max > b[b_i])
                max = b[b_i];
        }
    }
    int ctr = 0;
    for(int i=min;i<=max;i++)
        {
        if(factorA(i,a))
            if(factorB(i,b))
                ctr++;
    }
    cout<<ctr;
    return 0;
}
