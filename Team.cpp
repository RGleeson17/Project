#include "Team.h"
#include <iostream>
using namespace std;

Team::Team()
{
    Team_name = "Undefined";
    player_no = 0;
    points = 0;
}

void Team::set_player_no(int val)
{
    if (val > 4){
        cout << "The maximun allowed players per team is 4" << endl;
    }
    else {
        player_no = val;
        cout << "Players set to " << val << endl;
    }
}

void Team::set_Team_name(string val)
{
    Team_name = val;
    cout << "Team name is set to " << val << endl;
}

void Team::add_points()
{
    points = points + 1;
}

void Team::Leaderboard()
{
    cout << get_Team_name() << " has " << get_points() << " points." << endl;
   
}

void Team::Bot_Counter()
{
    srand(time(0));

    int num = rand() % 5+1;
    points = points + num; 
}
