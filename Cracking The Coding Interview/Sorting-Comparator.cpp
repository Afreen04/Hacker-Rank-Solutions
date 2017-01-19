#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
}; 

int compare(Player p1, Player p2)
{
    if(p1.score > p2.score)
        return -1;
    else if(p2.score > p1.score)
        return 1;
    else if(p1.score == p2.score)
        {
        int comp = p1.name.compare(p2.name);
        if(comp < 0)
            return -1;
        else if(comp > 0)
            return 1;
        else
            return 0;
    }
    return 0; 
}

vector<Player> comparator(vector<Player> players) {
    
    for(int i = 0; i < players.size(); i++){
            for(int j=0;j< players.size() - i -1;j++)
            {
                int comp = compare(players[j],players[j+1]);
                if(comp > 0)
                {
                    Player temp;
                    temp.score = players[j].score;
                    players[j].score = players[j+1].score;
                    players[j+1].score = temp.score;
                    temp.name = players[j].name;
                    players[j].name = players[j+1].name;
                    players[j+1].name = temp.name;
                    
                }
                
            }
    }
    return players;
}

int main() {
    
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    
    vector<Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
}; 

int compare(Player p1, Player p2)
{
    if(p1.score > p2.score)
        return -1;
    else if(p2.score > p1.score)
        return 1;
    else if(p1.score == p2.score)
        {
        int comp = p1.name.compare(p2.name);
        if(comp < 0)
            return -1;
        else if(comp > 0)
            return 1;
        else
            return 0;
    }
    return 0; 
}

vector<Player> comparator(vector<Player> players) {
    
    for(int i = 0; i < players.size(); i++){
            for(int j=0;j< players.size() - i -1;j++)
            {
                int comp = compare(players[j],players[j+1]);
                if(comp > 0)
                {
                    Player temp;
                    temp.score = players[j].score;
                    players[j].score = players[j+1].score;
                    players[j+1].score = temp.score;
                    temp.name = players[j].name;
                    players[j].name = players[j+1].name;
                    players[j+1].name = temp.name;
                    
                }
                
            }
    }
    return players;
}

int main() {
    
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    
    vector<Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}
