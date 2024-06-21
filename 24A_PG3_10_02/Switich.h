#pragma once
#include "GameConsole.h"

class Switch :public GameConsole {
public:
	//GameConsolの中にある関数を呼び出す
	void SwitchOn() override;
	void Game() override;
	void SwitchOff() override;
};
