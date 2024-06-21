#include "Ps5.h"
#include "Switich.h"
#include "GameConsole.h"
#include <stdio.h>
int main(){	
	//GameConsole型の変数を宣言する
	GameConsole* Game_cs[3];

	for (int i = 0; i < 2; i++)
	{
		//iが1未満だったら
		if (i < 1)
		{	
			Game_cs[i] = new Ps5;
		}
		//その他だったら
		else
		{
			Game_cs[i] = new Switch;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		//関数を呼ぶ
		Game_cs[i]->SwitchOn();
		Game_cs[i]->Game();
		Game_cs[i]->SwitchOff();
	}

	for (int i = 0; i < 2; i++)
	{
		//deleteをする
		delete Game_cs[i];
	}

	return 0;
}