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

int findContacts(string name, vector<string> contacts)
{   int ctr = 0;
    for(int i =0; i<contacts.size();i++)
     {
        if(contacts[i].find(name))
            ctr++;
    }
    return ctr;
}    

void addContact(string name, vector<string> &contacts)
{
        contacts.insert(contacts.end(),name);
}

int main(){
    int n;
    cin >> n;
    vector<string> contacts;
    vector<int> answers;
    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;
        if(op.compare("add") == 0)
            addContact(contact, contacts);
        else
            answers.insert(answers.begin(),findContacts(contact, contacts));
            //cout<<findContacts(contact, contacts)<<"\n";
    }
    for(int i=0;i<answers.size();i++)
        cout<<answers[i]<<"\n";
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

int findContacts(string name, vector<string> contacts)
{   int ctr = 0;
    for(int i =0; i<contacts.size();i++)
     {
        if(contacts[i].find(name))
            ctr++;
    }
    return ctr;
}    

void addContact(string name, vector<string> &contacts)
{
        contacts.insert(contacts.end(),name);
}

int main(){
    int n;
    cin >> n;
    vector<string> contacts;
    vector<int> answers;
    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;
        if(op.compare("add") == 0)
            addContact(contact, contacts);
        else
            answers.insert(answers.begin(),findContacts(contact, contacts));
            //cout<<findContacts(contact, contacts)<<"\n";
    }
    for(int i=0;i<answers.size();i++)
        cout<<answers[i]<<"\n";
    return 0;
}
