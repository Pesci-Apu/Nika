#pragma once
constexpr int WEAPON_HANDS = 115;
//Sniper ammo weapons
constexpr int WEAPON_SENTINEL = 1;
constexpr int WEAPON_CHARGE_RIFLE = 83;
constexpr int WEAPON_LONGBOW = 85;
//Shotgun ammo weapons
constexpr int WEAPON_MOZAMBIQUE = 97;
constexpr int WEAPON_EVA8 = 88;
constexpr int WEAPON_PEACEKEEPER = 104;
constexpr int WEAPON_MASTIFF = 96;
//Light ammo weapons
constexpr int WEAPON_P2020 = 106;
constexpr int WEAPON_RE45 = 81;
constexpr int WEAPON_ALTERNATOR = 80;
constexpr int WEAPON_R99 = 105;
constexpr int WEAPON_R301 = 0;
constexpr int WEAPON_SPITFIRE = 107;
constexpr int WEAPON_G7 = 90;
//Heavy ammo weapons
constexpr int WEAPON_CAR = 113;
constexpr int WEAPON_RAMPAGE = 21;
constexpr int WEAPON_3030 = 112;
constexpr int WEAPON_HEMLOCK = 91;
constexpr int WEAPON_FLATLINE = 89;
//Energy ammo weapons
constexpr int WEAPON_NEMESIS = 114;
constexpr int WEAPON_VOLT = 111;
constexpr int WEAPON_TRIPLE_TAKE = 108;
constexpr int WEAPON_LSTAR = 94;
constexpr int WEAPON_DEVOTION = 84;
constexpr int WEAPON_HAVOC = 86;
//Legendary ammo weapons
constexpr int WEAPON_WINGMAN = 110; 
constexpr int WEAPON_PROWLER = 102;
constexpr int WEAPON_BOCEK = 2;
constexpr int WEAPON_KRABER = 93;
constexpr int WEAPON_THROWING_KNIFE = 166;
constexpr int WEAPON_THERMITE_GRENADE = 164;

// Define a reverse mapping from integer values to string names
std::unordered_map<int, std::string> intToStringMap = {
    {WEAPON_HANDS,"WEAPON_HANDS"},
    {WEAPON_SENTINEL,"WEAPON_SENTINEL"},
    {WEAPON_CHARGE_RIFLE,"WEAPON_CHARGE_RIFLE"},
    {WEAPON_LONGBOW ,"WEAPON_LONGBOW"},
    {WEAPON_MOZAMBIQUE,"WEAPON_MOZAMBIQUE"},
    {WEAPON_EVA8,"WEAPON_EVA8"},
    {WEAPON_PEACEKEEPER,"WEAPON_PEACEKEEPER"},
    {WEAPON_MASTIFF,"WEAPON_MASTIFF"},
    {WEAPON_P2020,"WEAPON_P2020"},
    {WEAPON_RE45,"WEAPON_RE45"},
    {WEAPON_ALTERNATOR,"WEAPON_ALTERNATOR"},
    {WEAPON_R99 ,"WEAPON_R99"},
    {WEAPON_R301,"WEAPON_R301"},
    {WEAPON_SPITFIRE,"WEAPON_SPITFIRE"},
    {WEAPON_G7,"WEAPON_G7"},
    {WEAPON_CAR,"WEAPON_CAR"},
    {WEAPON_RAMPAGE,"WEAPON_RAMPAGE"},
    {WEAPON_3030,"WEAPON_3030"},
    {WEAPON_HEMLOCK,"WEAPON_HEMLOCK"},
    {WEAPON_FLATLINE,"WEAPON_FLATLINE"},
    {WEAPON_NEMESIS,"WEAPON_NEMESIS"},
    {WEAPON_VOLT,"WEAPON_VOLT"},
    {WEAPON_TRIPLE_TAKE,"WEAPON_TRIPLE_TAKE"},
    {WEAPON_LSTAR,"WEAPON_LSTAR"},
    {WEAPON_DEVOTION ,"WEAPON_DEVOTION"},
    {WEAPON_HAVOC ,"WEAPON_HAVOC"},
    {WEAPON_WINGMAN ,"WEAPON_WINGMAN"},
    {WEAPON_PROWLER ,"WEAPON_PROWLER"},
    {WEAPON_BOCEK ,"WEAPON_BOCEK"},
    {WEAPON_KRABER ,"WEAPON_KRABER"} ,
    {WEAPON_THROWING_KNIFE,"WEAPON_THROWING_KNIFE"}, 
    {WEAPON_THERMITE_GRENADE,"WEAPON_THERMITE_GRENADE"},
    };

std::string WeaponName(int weaponId) {
    auto it = intToStringMap.find(weaponId);
    if (it != intToStringMap.end())
        return it->second;
    return "UNKNOWN! NEED WEAPONID UPDATE!?";
}


