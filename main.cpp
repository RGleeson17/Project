#include <iostream>
#include "Team.h"
using namespace std;

int main(){
    Team team[5];
    
    team[0].set_Team_name("Team tesco");
    team[0].set_player_no(3);


    team[1].set_Team_name("Team cowboy");
    team[1].set_player_no(4);
    

    team[2].set_Team_name("Team lebron");
    team[2].set_player_no(4);
    
    team[3].set_Team_name("Team 67");
    team[3].set_player_no(4);
    

    team[4].set_Team_name("Team chicken roll");
    team[4].set_player_no(4);


    for(int i=0; i<5; i++){      //This is calling the leaderboard function for each team
        team[i].Leaderboard();
    }


    return 0;
};