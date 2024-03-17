#pragma once
struct Sense {
    ConfigLoader* cl;
    Level* map;
    LocalPlayer* lp;
    std::vector<Player*>* players;

    Sense(ConfigLoader* configLoada, Level* level, LocalPlayer* localPlayer, std::vector<Player*>* all_players) {
        this->cl = configLoada;
        this->map = level;
        this->lp = localPlayer;
        this->players = all_players;
    }

    void update(int counter)
    {
        int senseMaxRange = 250;
        int senseMaxRangeOverWall = 250;
        if (!map->playable)
            return;
        
        for (int i = 0; i < players->size(); i++) {
            Player *p = players->at(i);
            if (!p->isValid())
                continue;
            
            if (p->friendly) {
                p->setGlowEnable(1);
                p->setGlowThroughWall(1);
                int healthShield = p->currentHealth + p->currentShields;
                p->setCustomGlow(healthShield, true, true);
                continue;
            }
            double distance = math::calculateDistanceInMeters(
                lp->localOrigin.x,
                lp->localOrigin.y, 
                lp->localOrigin.z,
                p->localOrigin.x,
                p->localOrigin.y,
                p->localOrigin.z);
            if (p->visible && !p->knocked && distance < senseMaxRange) {
                p->setGlowEnable(1);
                p->setGlowThroughWall(1);
                int healthShield = p->currentHealth + p->currentShields;
                p->setCustomGlow(healthShield, true, false);
            } 
            if (!p->visible && !p->knocked && distance < senseMaxRange){
                p->setGlowEnable(1);
                p->setGlowThroughWall(1);  
                int healthShield = p->currentHealth + p->currentShields; 
                p->setCustomGlow(healthShield, true, false);
            } 
            else if (distance < senseMaxRangeOverWall) {
                p->setGlowEnable(1);
                p->setGlowThroughWall(1);
                p->setCustomGlow(0, false, false);
            } else if (p->getGlowEnable() == 1 && p->getGlowThroughWall() == 1) {
                p->setGlowEnable(0);
                p->setGlowThroughWall(0);
            }
        }
    }
};








    