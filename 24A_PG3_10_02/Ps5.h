#pragma once
#include "GameConsole.h"

class Ps5:public GameConsole{
public:
	

	void SwitchOn() override;
	void Game() override;
	void SwitchOff() override;
};