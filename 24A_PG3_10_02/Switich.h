#pragma once
#include "GameConsole.h"

class Switch :public GameConsole {
public:
	void SwitchOn() override;
	void Game() override;
	void SwitchOff() override;
};
