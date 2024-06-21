#pragma once
#include "GameConsole.h"

class Ps5:public GameConsole{
public:
	//GameConsol‚Ì’†‚É‚ ‚éŠÖ”‚ğŒÄ‚Ño‚·
	void SwitchOn() override;
	void Game() override;
	void SwitchOff() override;
};