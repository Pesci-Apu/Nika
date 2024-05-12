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
    
    void update(int counter){
        if (!map->playable)
            return;
        if(!cl->FEATURE_SENSE_ON)
            return;
        for (std::size_t i = 0; i < players->size(); i++) {
            Player *p = players->at(i);
            if (!p->isValid())
                continue;
            if (p->friendly) 
                continue;
            
            double distance = math::calculateDistanceInMeters(
                lp->localOrigin.x,
                lp->localOrigin.y, 
                lp->localOrigin.z,
                p->localOrigin.x,
                p->localOrigin.y,
                p->localOrigin.z);
            if (!p->visible && !p->knocked && distance < cl->SENSE_MAXRANGE) {
                p->setGlowEnable(1);
                p->setGlowThroughWall(1);
                int healthShield = p->currentHealth + p->currentShields;
                p->setCustomGlow(healthShield, true, false);
            } else if (distance <  cl->SENSE_MAXRANGE) {
                p->setGlowEnable(1);
                p->setGlowThroughWall(1);
                p->setCustomGlow(0, false, false);
            } else if (p->getGlowEnable() == 1 && p->getGlowThroughWall() == 1) {
                p->setGlowEnable(0);
                p->setGlowThroughWall(0);
            }
        }
    }
    
    void itemGlow(int counter){
        if (!map->playable)
            return;
        if (!cl->FEATURE_ITEM_GLOW_ON)
            return;
        for (int highlightId = 15; highlightId < 65; highlightId++) {
            const GlowMode newGlowMode = { 137,0,0,127 };
            const GlowMode oldGlowMode = mem::Read<GlowMode>(lp->highlightSettingsPtr + (HIGHLIGHT_TYPE_SIZE * highlightId) + 0, "Player oldGlowMode");
            if (newGlowMode != oldGlowMode)
                mem::Write<GlowMode>(lp->highlightSettingsPtr + (HIGHLIGHT_TYPE_SIZE * highlightId) + 0, newGlowMode);
        }         
    }
};








    
