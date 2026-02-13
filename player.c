typedef struct Player Player; 
Player* player_create(const char* name);
void player_destroy(Player* p);