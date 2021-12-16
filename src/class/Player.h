#pragma once
#include <string>
#include "Pokimac.h"
#include "Player.h"
#include "Map.h"
#include "../../libs/consoleUtils.hpp"

using namespace std;

class Player {

  public:
    Player(Map *p_map);

    string getName();
    int getHealth();
    int getX();
    int getY();

    void setName(string username);
    void setHealth(int nbHealth);
    void setDamage(int nbDamage);

    void attack(Pokimac &pokimac);
    void move(char dir);
    
  private:
    string name;
    int health;
    Map *map;
    int x;
    int y;

    void clearCursor();
    void setCursor();
};