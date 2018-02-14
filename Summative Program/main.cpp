/* Ramzi Yakan
   Pyramid Treasure Game
   A game where the objective is to traverse through a pyramid to find sufficient supplies needed to defeat the boss at the center.
   Jan 2017
   */          //Header

#include <cstdlib>             //Libraries
#include <iostream>

using namespace std;

struct Explorer
{
       string name;
       string gender;
       int health;        //Explorer structure with the explorer variables initializers.
       int strength;
       int coins;
       bool shield;
};

struct Monster
{
       int health;        //Monster structure with the monster variables initializers.
       int strength;
};

Explorer initialize (Explorer _explorer, string _name, string _gender, int _health, int _strength, int _coins, bool _shield)
{
     _explorer.name=_name;
     _explorer.gender=_gender;
     _explorer.health=_health;
     _explorer.strength=_strength;    //Initializes the explorer with their name, gender ("He" or "She"), health (100), strength (10), coin counter (0), and shield determiner (no/false).
     _explorer.coins=_coins;
     _explorer.shield=_shield;
     return _explorer;
}

Monster initialize (Monster _monster, int _health, int _strength)
{
     _monster.health=_health;
     _monster.strength=_strength;     //Initializes the monster with his health (280) and strength (6).
     return _monster;
}

Explorer intersection1(Explorer _theExplorer)
{
    int choice=0;    //Creates the variable "choice", which allows the user to choose an answer (hence the variable name) for the following...
    cout<<_theExplorer.name<<" starts exploring the pyramid, but very quickly bumps into an intersection."<<endl;   //First use of the initialized explorer name variable.
    cout<<_theExplorer.gender<<" has a choice between 3 different paths."<<endl;       //First use of the initialized explorer gender variable.
    cout<<"Should "<<_theExplorer.name<<" take Path #1, Path #2, or Path #3?"<<endl;      //Question for the user to choose an answer to.
    cout<<"(Answer with either 1, 2, or 3.)"<<endl;
    while (choice!=1)    //While the user doesn't have "1" inputed as their choice...
          {
                      cin>>choice;      //User inputs their choice.
                      switch(choice)
                           {
                                 case 1:   //If the user chose the number "1" as their answer to the question...
                                         cout<<endl<<endl;   //The explorer and user have found their way to the next intersection.
                                         break;
                                 case 2:   //If the user chose the number "2" as their answer to the question...
                                         if (_theExplorer.strength!=15)  //If the explorer does not currently have a strength of 15 (which means that the user hasn't been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has found a mace lying on the ground."<<endl;
                                                cout<<_theExplorer.name<<"'s strength has increased from "<<_theExplorer.strength<<" to 15."<<endl;   //First use of the initialized explorer strength variable.
                                                _theExplorer.strength=15;   //The explorer's strength is offically set to 15.
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, or Path #3?"<<endl;  //The user has to choose another path, since their explorer is still stuck at the same intersection (paths that don't lead to the next intersection lead to a dead end).
                                                cout<<"(Answer with either 1, 2, or 3.)"<<endl;

                                            }
                                        else   //If the explorer has a strength of 15 already (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                        break;
                                 case 3:    //If the user chose the number "3" as their answer to the question...
                                         if (_theExplorer.coins==0)   //If the explorer does not yet have a coin (which means that the user hasn't been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has found a gold coin."<<endl;
                                                _theExplorer.coins++;   //First use of the initialized explorer coin variable. Also, the explorer has now offically collected their coin.
                                                cout<<_theExplorer.gender<<" has now found "<<_theExplorer.coins<<" out of 5 gold coins hidden throughout the pyramid."<<endl;
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, or Path #3?"<<endl;   //The user has to choose another path.
                                                cout<<"(Answer with either 1, 2, or 3.)"<<endl;
                                            }
                                         else   //If the explorer has a coin already (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 default:   //If the user chooses a path that does not exist...
                                         cout<<endl;
                                         cout<<"This path does not exist. Try again!"<<endl;
                                         break;
                           }
          }
    return _theExplorer;
}

Explorer intersection2(Explorer _theExplorer)
{
    int choice=0;   //Creates the variable "choice", which allows the user to choose an answer (hence the variable name) for the following...
    bool coinCollected=false;  //Creates the variable "coinCollected" to determine whether the user has obtained a coin from one of the paths leading from this intersection.
    cout<<_theExplorer.name<<" seems to have gone the right path and has now reached another intersection."<<endl;
    cout<<"This intersection also has 3 paths to choose from."<<endl;
    cout<<"Should "<<_theExplorer.name<<" take Path #1, Path #2, or Path #3?"<<endl;   //Question for the user to choose an answer to.
    cout<<"(Answer with either 1, 2, or 3.)"<<endl;
    while (choice!=2)    //While the user doesn't have "2" inputed as their choice...
          {
                      cin>>choice;   //User inputs their choice.
                      switch(choice)
                           {
                                 case 1:   //If the user chose the number "1" as their answer to the question...
                                         if (coinCollected==false)    //If the explorer has not recieved a coin from this particular path (which means that the user hasn't been down it)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has found a gold coin."<<endl;
                                                _theExplorer.coins++;   //The explorer has now offically collected their coin.
                                                coinCollected=true;
                                                cout<<_theExplorer.gender<<" has now found "<<_theExplorer.coins<<" out of 5 gold coins hidden throughout the pyramid."<<endl;
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, or Path #3?"<<endl;   //The user has to choose another path, since their explorer is still stuck at the same intersection (paths that don't lead to the next intersection lead to a dead end).
                                                cout<<"(Answer with either 1, 2, or 3.)"<<endl;
                                            }
                                         else   //If the explorer has recieved a coin from this particular path (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 case 2:   //If the user chose the number "2" as their answer to the question...
                                         cout<<endl<<endl;   //The explorer and user have found their way to the next intersection.
                                         break;
                                 case 3:   //If the user chose the number "3" as their answer to the question...
                                         if (_theExplorer.health!=90)   //If the explorer does not currently have 90 health remaining (which means that the user hasn't been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has stepped on something sharp."<<endl;
                                                cout<<_theExplorer.gender<<" loses 10 health."<<endl;
                                                _theExplorer.health=_theExplorer.health-10;    //First use of the initialized explorer health variable. Also, the explorer has now offically lost 10 health and has 90 remaining.
                                                cout<<_theExplorer.name<<" has "<<_theExplorer.health<<" health remaining."<<endl;
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, or Path #3?"<<endl;  //The user has to choose another path.
                                                cout<<"(Answer with either 1, 2, or 3.)"<<endl;
                                            }
                                         else    //If the explorer has 90 health remaining already (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 default:   //If the user chooses a path that does not exist...
                                         cout<<endl;
                                         cout<<"This path does not exist. Try again!"<<endl;
                                         break;
                           }
          }
    return _theExplorer;
}

Explorer intersection3(Explorer _theExplorer)
{
    int choice=0;   //Creates the variable "choice", which allows the user to choose an answer (hence the variable name) for the following...
    bool coinCollected=false;   //Creates the variable "coinCollected" to determine whether the user has obtained a coin from one of the paths leading from this intersection.
    int damageRecieved=false;   //Creates the variable "damageRecieved" to determine whether the explorer has taken damage from one of the paths leading from this intersection.
    cout<<_theExplorer.name<<" seems to have gone the right path again and has now reached yet another intersection."<<endl;
    cout<<"This time, "<<_theExplorer.gender<<" has a choice between 4 different paths."<<endl;
    cout<<"Should "<<_theExplorer.name<<" take Path #1, Path #2, Path #3, or Path #4?"<<endl;   //Question for the user to choose an answer to.
    cout<<"(Answer with either 1, 2, 3, or 4.)"<<endl;
    while (choice!=3)   //While the user doesn't have "3" inputed as their choice...
          {
                      cin>>choice;    //User inputs their choice.
                      switch(choice)
                           {
                                 case 1:   //If the user chose the number "1" as their answer to the question...
                                         if (_theExplorer.strength!=25)  //If the explorer does not currently have a strength of 25 (which means that the user hasn't been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has found a dagger lying on the ground."<<endl;
                                                cout<<_theExplorer.name<<"'s strength has increased from "<<_theExplorer.strength<<" to 25."<<endl;
                                                _theExplorer.strength=25;   //The explorer's strength is offically set to 25.
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, Path #3?, or Path #4?"<<endl;   //The user has to choose another path, since their explorer is still stuck at the same intersection (paths that don't lead to the next intersection lead to a dead end).
                                                cout<<"(Answer with either 1, 2, 3, or 4.)"<<endl;
                                            }
                                         else   //If the explorer has a strength of 25 already (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 case 2:   //If the user chose the number "2" as their answer to the question...
                                         if (coinCollected==false)   //If the explorer has not recieved a coin from this particular path (which means that the user hasn't been down it)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has found a gold coin."<<endl;
                                                _theExplorer.coins++;
                                                coinCollected=true;
                                                cout<<_theExplorer.gender<<" has now found "<<_theExplorer.coins<<" out of 5 gold coins hidden throughout the pyramid."<<endl;
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, or Path #3?"<<endl;   //The user has to choose another path.
                                                cout<<"(Answer with either 1, 2, or 3.)"<<endl;
                                            }
                                         else   //If the explorer has recieved a coin from this particular path (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 case 3:   //If the user chose the number "3" as their answer to the question...
                                         cout<<endl<<endl;   //The explorer and user have found their way to the next intersection.
                                         break;
                                 case 4:   //If the user chose the number "4" as their answer to the question...
                                         if (damageRecieved==false)   //If the explorer did not recieve damage from this particular path (which means that the user hasn't been down it)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" did not notice a pyramid brick on the ground below."<<endl;
                                                cout<<_theExplorer.name<<" trips on the brick onto the ground and suffers a significantly-sized cut."<<endl;
                                                cout<<_theExplorer.name<<" loses 15 health."<<endl;
                                                _theExplorer.health=_theExplorer.health-15;    //The explorer has now offically lost (15) health.
                                                damageRecieved=true;
                                                cout<<_theExplorer.name<<" has "<<_theExplorer.health<<" health remaining."<<endl;
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, Path #3?, or Path #4?"<<endl;   //The user has to choose another path.
                                                cout<<"(Answer with either 1, 2, 3, or 4.)"<<endl;
                                            }
                                         else  //If the explorer recieved damage from this particular path already (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 default:   //If the user chooses a path that does not exist...
                                         cout<<endl;
                                         cout<<"This path does not exist. Try again!"<<endl;
                                         break;
                           }
          }
    return _theExplorer;
}

Explorer intersection4(Explorer _theExplorer)
{
    int choice=0;   //Creates the variable "choice", which allows the user to choose an answer (hence the variable name) for the following...
    bool coinCollected=false;   //Creates the variable "coinCollected" to determine whether the user has obtained a coin from one of the paths leading from this intersection.
    int damageRecieved=false;   //Creates the variable "damageRecieved" to determine whether the explorer has taken damage from one of the paths leading from this intersection.
    cout<<_theExplorer.name<<" seems to have gone the right path again and has now reached yet another intersection."<<endl;
    cout<<"This intersection also has 4 paths to choose from."<<endl;
    cout<<"Should "<<_theExplorer.name<<" take Path #1, Path #2, Path #3, or Path #4?"<<endl;  //Question for the user to choose an answer to.
    cout<<"(Answer with either 1, 2, 3, or 4.)"<<endl;
    while (choice!=2)   //While the user doesn't have "2" inputed as their choice...
          {
                      cin>>choice;    //User inputs their choice.
                      switch(choice)
                          {
                                 case 1:   //If the user chose the number "1" as their answer to the question...
                                         if (coinCollected==false)   //If the explorer has not recieved a coin from this particular path (which means that the user hasn't been down it)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has found a gold coin."<<endl;
                                                _theExplorer.coins++;
                                                coinCollected=true;
                                                cout<<_theExplorer.gender<<" has now found "<<_theExplorer.coins<<" out of 5 gold coins hidden throughout the pyramid."<<endl;
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, Path #3?, or Path #4?"<<endl;   //The user has to choose another path, since their explorer is still stuck at the same intersection (paths that don't lead to the next intersection lead to a dead end).
                                                cout<<"(Answer with either 1, 2, 3, or 4.)"<<endl;
                                            }
                                         else   //If the explorer has recieved a coin from this particular path (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 case 2:   //If the user chose the number "2" as their answer to the question...
                                         cout<<endl<<endl;   //The explorer and user have found their way to the next intersection.
                                         break;
                                 case 3:   //If the user chose the number "3" as their answer to the question...
                                         if (_theExplorer.strength!=40)   //If the explorer does not currently have a strength of 40 (which means that the user hasn't been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has found a battleaxe lying on the ground."<<endl;
                                                cout<<_theExplorer.name<<"'s strength has increased from "<<_theExplorer.strength<<" to 40."<<endl;
                                                _theExplorer.strength=40;   //The explorer's strength is offically set to 40.
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, Path #3?, or Path #4?"<<endl;   //The user has to choose another path.
                                                cout<<"(Answer with either 1, 2, 3, or 4.)"<<endl;
                                            }
                                         else   //If the explorer has a strength of 40 already (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 case 4:   //If the user chose the number "4" as their answer to the question...
                                         if (damageRecieved==false)   //If the explorer did not recieve damage from this particular path (which means that the user hasn't been down it)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has triggered a trap."<<endl;
                                                cout<<"A huge pile of sand falls on "<<_theExplorer.name<<", burning "<<_theExplorer.name<<"'s eyes."<<endl;
                                                cout<<_theExplorer.gender<<" loses 20 health."<<endl;
                                                _theExplorer.health=_theExplorer.health-20;  //The explorer has now offically lost (20) health.
                                                damageRecieved=true;
                                                cout<<_theExplorer.name<<" has "<<_theExplorer.health<<" health remaining."<<endl;
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, Path #3?, or Path #4?"<<endl;   //The user has to choose another path.
                                                cout<<"(Answer with either 1, 2, 3, or 4.)"<<endl;
                                            }
                                         else   //If the explorer recieved damage from this particular path already (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 default:   //If the user chooses a path that does not exist...
                                         cout<<endl;
                                         cout<<"This path does not exist. Try again!"<<endl;
                                         break;
                          }
          }
    return _theExplorer;
}

Explorer intersection5(Explorer _theExplorer)
{
    int choice=0;  //Creates the variable "choice", which allows the user to choose an answer (hence the variable name) for the following...
    bool coinCollected=false;   //Creates the variable "coinCollected" to determine whether the user has obtained a coin from one of the paths leading from this intersection.
    bool completeHealChecker=false;   //Creates the variable "completeHealChecker" to determine whether the user has completely restored their explorer's health from one of the paths leading from this intersection.
    cout<<_theExplorer.name<<" seems to have gone the right path again and has now reached yet another intersection."<<endl;
    cout<<"This time, "<<_theExplorer.gender<<" has a choice between 5 different paths."<<endl;
    cout<<"Should "<<_theExplorer.name<<" take Path #1, Path #2, Path #3, Path #4, or Path #5?"<<endl;  //Question for the user to choose an answer to.
    cout<<"(Answer with either 1, 2, 3, 4, or 5.)"<<endl;
    while (choice!=4)    //While the user doesn't have "4" inputed as their choice...
          {
                      cin>>choice;   //User inputs their choice.
                      switch(choice)
                          {
                                 case 1:   //If the user chose the number "1" as their answer to the question...
                                         if (_theExplorer.shield!=true)  //If the explorer does not currently have a shield equipped (which means that the user hasn't been down this path).../First use of the initialized explorer shield variable.
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has found a shield lying on the ground."<<endl;
                                                cout<<"Interesting..."<<endl;
                                                _theExplorer.shield=true;  //The user has now officially equipped the shield.
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, Path #3?, Path #4, or Path #5?"<<endl;  //The user has to choose another path, since their explorer is still stuck at the same intersection (paths that don't lead to the next intersection lead to a dead end).
                                                cout<<"(Answer with either 1, 2, 3, 4, or 5.)"<<endl;
                                            }
                                         else   //If the explorer already has a shield equipped (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 case 2:   //If the user chose the number "2" as their answer to the question...
                                         if (coinCollected==false)   //If the explorer has not recieved a coin from this particular path (which means that the user hasn't been down it)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has found a gold coin."<<endl;
                                                _theExplorer.coins++;
                                                coinCollected=true;
                                                cout<<_theExplorer.gender<<" has now found "<<_theExplorer.coins<<" out of 5 gold coins hidden throughout the pyramid."<<endl;
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, Path #3?, Path #4, or Path #5?"<<endl;   //The user has to choose another path.
                                                cout<<"(Answer with either 1, 2, 3, 4, or 5.)"<<endl;
                                            }
                                         else   //If the explorer has recieved a coin from this particular path (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 case 3:   //If the user chose the number "3" as their answer to the question...
                                         if (completeHealChecker==false)   //If the explorer has not drinken a potion that completely restores their health (which means that the user hasn't been down this path).
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has found a mini-chest."<<endl;
                                                cout<<"It contains an ancient potion that when consumed, completely heals the user."<<endl;
                                                cout<<_theExplorer.name<<" drinks the potion and restores all lost health."<<endl;
                                                _theExplorer.health=100;   //The explorer has offically replenished (all of) their health.
                                                completeHealChecker=true;
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, Path #3?, Path #4, or Path #5?"<<endl;   //The user has to choose another path.
                                                cout<<"(Answer with either 1, 2, 3, 4, or 5.)"<<endl;
                                            }
                                         else     //If the explorer already drank the potion (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 case 4:    //If the user chose the number "4" as their answer to the question...
                                         cout<<endl<<endl;   //The explorer and user have found their way to the next intersection.
                                         break;
                                 case 5:    //If the user chose the number "5" as their answer to the question...
                                         if (_theExplorer.health!=20)   //If the explorer does not currently have 20 health remaining (which means that the user hasn't been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has been bitten by a scorpion, who caused immense harm to "<<_theExplorer.name<<"."<<endl;
                                                cout<<_theExplorer.name<<" now has only 20 health remaining!"<<endl;
                                                _theExplorer.health=20;   //The explorer now offically has 20 health remaining.
                                                cout<<endl;
                                                cout<<"Which path should "<<_theExplorer.name<<" take now: Path #1, Path #2, Path #3?, Path #4, or Path #5?"<<endl;   //The user has to choose another path.
                                                cout<<"(Answer with either 1, 2, 3, 4, or 5.)"<<endl;
                                            }
                                         else   //If the explorer has 90 health remaining already (which means that the user has been down this path)...
                                            {
                                                cout<<endl;
                                                cout<<_theExplorer.name<<" has already gone down this path."<<endl;
                                                cout<<"Why would "<<_theExplorer.name<<" go down it again?"<<endl<<endl;
                                                cout<<"Please choose a different path."<<endl;
                                            }
                                         break;
                                 default:   //If the user chooses a path that does not exist...
                                         cout<<endl;
                                         cout<<"This path does not exist. Try again!"<<endl;
                                         break;
                          }
          }
    return _theExplorer;
}

Explorer monsterFight(Explorer _theExplorer)
{
    Monster theMonster;   //The actual monster is created.
    int healthOfMonster=280;   //Creates a variable that represents the health of the monster (280 to start).
    int strengthOfMonster=6;   //Creates a variable that represents the strength of the monster (6 to start).
    int decision=0;    //Creates the variable "decision", which allows the user to make a decision (hence the variable name) for the upcoming battle questions.
    int round=1;  //Creates a variable that keeps track of what battle cycle round the user is on.
    theMonster=initialize(theMonster, healthOfMonster, strengthOfMonster);   //Calls the function that initializes the monster with his health and strength.
    cout<<_theExplorer.name<<" seems to have gone the right path..."<<endl<<endl;
    cout<<_theExplorer.name<<" is now in a large hollow room."<<endl;
    cout<<"In the middle of the room lies a huge chest with tons of treasure."<<endl;   //Monster Introduction
    cout<<"However, before "<<_theExplorer.name<<" could get to the chest, the statue that was also in the room came to life."<<endl;
    cout<<"He wanted to fight and protect his treasures..."<<endl<<endl;
    while ((theMonster.health>0) and (_theExplorer.health>0))   //While the monster or the explorer is not dead...
        {
            cout<<endl;
            if (round==1)  //If the explorer has just seen the monster come to life (and therefore hasn't battled it yet and the user is at round 1)...
                {
                    cout<<_theExplorer.name<<" is now faced with an enemy that has an intent of killing."<<endl;
                    cout<<_theExplorer.name<<" currently has "<<_theExplorer.health<<" health."<<endl;
                    cout<<_theExplorer.name<<" also has "<<_theExplorer.strength<<" strength."<<endl;
                    cout<<"What will "<<_theExplorer.name<<" do?"<<endl;  //First question for the user to make a battle decision for.
                }
            else     //If the explorer has attacked the monster before (and therefore the user isn't on round 1 anymore...
                {
                    decision=0;   //The "decision" variable is reset to 0.
                    cout<<"Now what will "<<_theExplorer.name<<" do?"<<endl;   //Other question for the user to make a battle decision for.
                }
            cout<<"1. Attack"<<endl;
            if (_theExplorer.shield==true)  //If the explorer has a shield equipped...
                {
                    cout<<"2. Attack with shield"<<endl;
                }
            if (_theExplorer.health<=10)   //If the explorer has 10 or less health remaining...
                {
                    cout<<"3. Flee"<<endl;
                }
            cout<<"(Once again use the numbers to answer.)"<<endl;
            while ((decision!=1) and (decision!=2) and (decision!=3))   //While the user does not make a valid battle decision...
                {
                    cin>>decision;    //...get the user to input their battle decision.
                    switch(decision)
                        {
                            case 1:   //If the user decided to pick option #1...
                                    cout<<endl;
                                    cout<<_theExplorer.name<<" just hit the enemy for "<<_theExplorer.strength<<" damage."<<endl;
                                    theMonster.health=theMonster.health-_theExplorer.strength;   //The monster has offically lost health.
                                    cout<<"The enemy now has "<<theMonster.health<<" health remaining."<<endl;
                                    if (theMonster.health>0)  //If the monster is not yet dead...
                                        {
                                            cout<<"The enemy deals "<<theMonster.strength<<" damage to "<<_theExplorer.name<<"."<<endl;
                                            _theExplorer.health=_theExplorer.health-theMonster.strength;   //The explorer has offically lost health.
                                            theMonster.strength=theMonster.strength+6;
                                            if (_theExplorer.health>0)   //If the explorer is not yet dead...
                                                {
                                                    cout<<_theExplorer.name<<" now has "<<_theExplorer.health<<" health remaining."<<endl;
                                                }
                                            round++;  //A new battle round begins.
                                        }
                                    else
                                        {
                                            break;
                                        }
                                    break;
                            case 2:  //If the user decided to pick option #2...
                                    if (_theExplorer.shield==true)   //...and has a shield to do so...
                                        {
                                            cout<<endl;
                                            cout<<_theExplorer.name<<" just hit the enemy for "<<_theExplorer.strength<<" damage."<<endl;
                                            theMonster.health=theMonster.health-_theExplorer.strength;   //The monster has offically lost health.
                                            cout<<"The enemy now has "<<theMonster.health<<" health remaining."<<endl;
                                            cout<<_theExplorer.name<<" also used a shield that negated "<<theMonster.strength<<" damage from the enemy..."<<endl;
                                            cout<<"...but then it breaks because it is made out of a very crappy material."<<endl;
                                            _theExplorer.shield=false;   //The explorer offically no longer has a shield.
                                            theMonster.strength=theMonster.strength+6;
                                            round++;
                                        }
                                    else    //...regardless of them not having a shield to do so...
                                        {
                                            cout<<endl;
                                            cout<<"Not a valid option. Try again!"<<endl;
                                        }
                                    break;
                            case 3:  //If the user decided to pick option #3...
                                    if (_theExplorer.health<=10)   //...and has 10 or less health remaining to do so...
                                        {
                                            cout<<endl;
                                            cout<<_theExplorer.name<<" tries to flee, but finds out that the only exit is now shut."<<endl;
                                            cout<<_theExplorer.name<<" is also not able to attack the enemy before the enemy strikes a lethal blow."<<endl;
                                            cout<<"The enemy deals "<<theMonster.strength<<" damage to "<<_theExplorer.name<<"."<<endl;
                                            _theExplorer.health=_theExplorer.health-theMonster.strength;
                                        }
                                    else   //...regardless of them not having 10 or less health remaining to do so...
                                        {
                                            cout<<endl;
                                            cout<<"Not a valid option. Try again!"<<endl;
                                        }
                                    break;
                            default:    //If the user's decision is not valid (which means it doesn't even exist)...
                                    cout<<endl;
                                    cout<<"Not a valid option. Try again!"<<endl;
                                    break;
                        }
                }
        }
    return _theExplorer;
}


int main(int argc, char *argv[])
{
    string game="y";
    while ((game=="y") or (game=="Y") or (game=="yes") or (game=="Yes"))   //While the user wants to play the game...
          {
              Explorer theExplorer;    //The actual explorer is created.
              string nameOfExplorer;    //Creates a variable that represents the name of the explorer (which the user inputs).
              string genderOfExplorer;    //Creates a variable that represents the gender of the explorer (which the user also inputs).
              int healthOfExplorer=100;    //Creates a variable that represents the health of the explorer (100 to start).
              int strengthOfExplorer=10;    //Creates a variable that represents the strength of the explorer (10 to start).
              int coins=0;   //Creates a variable that represents the number of gold coins the explorer has collected throughout their adventure (out of the 5 gold coins hidden around the pyramid)(0 to start, obviously).
              bool shield=false;    //Creates a variable that represents whether or not the explorer has a shield equipped (the explorer does not have a shield to start).
              cout<<endl<<endl<<endl<<endl;
              cout<<"Welcome to the Pyramid Treasure Game."<<endl<<endl<<endl;   //Introduction
              cout<<"Backstory:"<<endl;
              cout<<"An explorer in Egypt has just discovered an ancient pyramid."<<endl;
              cout<<"They translate the hieroglyphics written on the outside of the pyramid."<<endl;
              cout<<"The hieroglyphics say that a chest full of golden bracelets, rings, and more is hidden inside the pyramid."<<endl;
              cout<<"The explorer decides to investigate further..."<<endl<<endl<<endl;
              cout<<"Please enter the name and gender (male or female) of the explorer."<<endl;
              cout<<"Name: ";
              cin>>nameOfExplorer;    //User inputs desired explorer name.
              while ((genderOfExplorer!="male") and (genderOfExplorer!="Male") and (genderOfExplorer!="m") and (genderOfExplorer!="M") and (genderOfExplorer!="female") and (genderOfExplorer!="Female") and (genderOfExplorer!="f") and (genderOfExplorer!="F"))   //While the user does not input male or female...
                    {
                        cout<<"Gender: ";
                        cin>>genderOfExplorer;  //User inputs their explorer's gender.
                        if ((genderOfExplorer!="male") and (genderOfExplorer!="Male") and (genderOfExplorer!="m") and (genderOfExplorer!="M") and (genderOfExplorer!="female") and (genderOfExplorer!="Female") and (genderOfExplorer!="f") and (genderOfExplorer!="F"))  //If the user does not input male or female...
                           {
                               cout<<endl;
                               cout<<"Not a valid answer. Try again!"<<endl;
                           }
                    }
              if ((genderOfExplorer=="male") or (genderOfExplorer=="Male") or (genderOfExplorer=="m") or (genderOfExplorer=="M"))
                    {
                        genderOfExplorer="He";
                    }
              else                                      //Changes to the gender variable so that it can be inserted into a proper grammatical sentence ("He" for male, "She" for female).
                    {
                        genderOfExplorer="She";
                    }
              cout<<endl<<endl;
              theExplorer=initialize(theExplorer, nameOfExplorer, genderOfExplorer, healthOfExplorer, strengthOfExplorer, coins, shield);   //Calls the function that initializes the explorer with their name, gender ("He" or "She"), health, strength, coin counter, and shield determiner.
              theExplorer=intersection1(theExplorer);   //Calls the function that is responsible for the things that happen in the first intersection of paths, giving it the initialized explorer's name, gender ("He" or "She"), current health (100), strength (10), number of coins (0), and whether or not they have a shield equipped (no/false).
              theExplorer=intersection2(theExplorer);   //Calls the function that is responsible for the things that happen in the second intersection of paths, giving it the initialized explorer's name, gender ("He" or "She"), current health, strength, number of coins, and whether or not they have a shield equipped (no/false).
              theExplorer=intersection3(theExplorer);   //Calls the function that is responsible for the things that happen in the third intersection of paths, giving it the initialized explorer's name, gender ("He" or "She"), current health, strength, number of coins, and whether or not they have a shield equipped (no/false).
              theExplorer=intersection4(theExplorer);   //Calls the function that is responsible for the things that happen in the fourth intersection of paths, giving it the initialized explorer's name, gender ("He" or "She"), current health, strength, number of coins, and whether or not they have a shield equipped (no/false).
              theExplorer=intersection5(theExplorer);   //Calls the function that is responsible for the things that happen in the fifth intersection of paths, giving it the initialized explorer's name, gender ("He" or "She"), current health, strength, number of coins, and whether or not they have a shield equipped (no/false).
              theExplorer=monsterFight(theExplorer);    //Calls the function that is responsible for the things that happen in the monster room, giving it the initialized explorer's name, gender ("He" or "She"), current health, strength, number of coins, and whether or not they have a shield equipped.
              if (theExplorer.health<=0)   //If the explorer dies...
                    {
                        cout<<endl<<endl;
                        cout<<theExplorer.name<<" is now dead."<<endl;
                        cout<<"You have lost the game."<<endl;
                        cout<<"Try again? y/n"<<endl;
                    }
              else   //If the explorer is still alive (which means that he killed the monster)...
                    {
                        cout<<endl<<endl;
                        cout<<theExplorer.name<<" has defeated the enemy."<<endl;
                        cout<<theExplorer.gender<<" now goes back to civilization to tell the world about his discovery of the ancient pyramid and the treasures inside."<<endl;
                        cout<<theExplorer.name<<" has now become famous."<<endl;
                        if (theExplorer.coins>0)   //If the explorer also collected any coins...
                            {
                                cout<<endl;
                                cout<<theExplorer.name<<" also found "<<theExplorer.coins<<" out of the 5 golden coins hidden inside the pyramid."<<endl;
                                cout<<"Each gold coin ended up being worth $1 million."<<endl;
                                cout<<"Therefore, on top of his discoveries, he made "<<theExplorer.coins<<" million dollars!"<<endl;
                            }
                        cout<<endl;
                        cout<<"You have won the game."<<endl;
                        cout<<"Play again? y/n"<<endl;
                    }
                cin>>game;  //The user answers the question with yes or no.
          }                  //If the user chose to play the game again, the game restarts from the beginning (the introduction).
    cout<<endl<<endl;         //If the user chose to not play the game again, the game exits.
    return EXIT_SUCCESS;
}
