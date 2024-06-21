#include "Ps5.h"
#include "Switich.h"
#include "GameConsole.h"
#include <stdio.h>
int main(){
	GameConsole* Game_cs[3];
	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			Game_cs[i] = new Ps5;
		}
		else
		{
			Game_cs[i] = new Switch;
		}
	}

	for (int i = 0; i < 2; i++)
	{

		Game_cs[i]->SwitchOn();
		Game_cs[i]->Game();
		Game_cs[i]->SwitchOff();
	}

	for (int i = 0; i < 2; i++)
	{
		delete Game_cs[i];
	}

	return 0;
}