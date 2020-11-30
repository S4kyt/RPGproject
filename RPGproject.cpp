#include <iostream>
#include <string>

using namespace std;

int main()

{

	int heroHP(10), heroMana(5), heroGold, heroEquipment, sword = 0, shield = 0, heroDmg = 1, fireball, fireballMana, fireballDmg = 3, monsterWolf = 0, monsterGoblin = 0, monsterTroll = 0, gold, action, exploreTimes = 0;

	{
		cout << "Welcome to Basic RPG!\n"  // First screen to greet the player
			<< "Current version is: 0.1\n"
			<< "\n";

		system("pause");
		system("cls");

	}

	switch (1) // The amount of heal points the hero has.

		{
		case 0: if (heroHP == 10)
			cout << "The hero has 10 health points.";
			break;

		case 1: if (heroHP == 9)
			cout << "The hero has 9 health points.";
			break;

		case 2: if (heroHP == 8)
			cout << "The hero has 8 health points.";
			break;

		case 3: if (heroHP == 7)
			cout << "The hero has 7 health points.";
			break;

		case 4: if (heroHP == 6)
			cout << "The hero has 6 health points.";
			break;

		case 5: if (heroHP == 5)
			cout << "The hero has 5 health points.";
			break;

		case 6: if (heroHP == 4)
			cout << "The hero has 4 health points.";
			break;

		case 7: if (heroHP == 3)
			cout << "The hero has 3 health points.";
			break;

		case 8: if (heroHP == 2)
			cout << "The hero has 2 health points.";
			break;

		case 9: if (heroHP == 1)
			cout << "Be careful! The hero has 1 health point left!";
			break;

		case 10: if (heroHP == 0)
			cout << "The hero has died.";
			break;

		} // The amount of heal points the hero has.

	switch (2) // The amount of mana points the hero has.

	{

	case 0: if (heroMana == 5)
		cout << "The hero has 5 mana points.";
		break;

	case 1: if (heroMana == 4)
		cout << "The hero has 4 mana points.";
		break;

	case 2: if (heroMana == 3)
		cout << "The hero has 3 mana points.";
		break;

	case 3: if (heroMana == 2)
		cout << "The hero has 2 mana points.";
		break;

	case 4: if (heroMana == 1)
		cout << "Be careful! The hero has 1 more mana point!";
		break;

	case 5: if (heroMana == 0)
		cout << "The hero is out of mana!.";
		break;

	}

	{

	cout << "The hero currently has: " << heroHP << "HP, " << heroMana << "MP.\n"; // First scene for gameplay
	cout << "Choose an action:\n";
	cout << "1. Explore  2. Fight  3. Shop\n\n";

	cin >> action;

}


	switch (action)
	{

	case 1:
		if (exploreTimes < 100 && exploreTimes + 10);
		cout << "You went exploring.\n\n"; // After exploring 10 times, you cant explore anymore. - DONE

		if (exploreTimes >= 100)
			cout << "There's nothing to explore here.\n\n"; // You should be able to check how many more times you can explore
		break;

	case 2:
		if (action=1)
		cout << "You started looking for a fight.\n\n"; // You can fight 3 enemies, they should be random, also dropping random amount of gold.
		break;											// You get XP from mobs.

	case 3:
		cout << "You enter the shop. You can buy a sword and a shield.\n\n"; // If hero already owns the sword or the shield, then it should dissapear from the shop.
		break;

	default:
		cout << "You entered a wrong action, choose again!\n";

	}

	system("pause");
	return 0;

}