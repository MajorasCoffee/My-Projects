#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int NumHumans();
int NumEnemies();
void Game(int &humans, int &enemies);
void Ends(int humans, int enemies);

int main()
{
	int humans;
	int originalhumans;

	int enemies;
	int originalEnemies;

	humans = NumHumans();
	originalhumans = humans;

	enemies = NumEnemies();
	originalEnemies = enemies;

	Game(humans, enemies);
	Ends(humans, enemies);

	system("PAUSE");
	return 0;
}

int NumHumans()
{
	int humans;
	cout << "Enter the numbers of humans in your army: ";
	cin >> humans;
	return humans;
}

int NumEnemies()
{
	int enemies;
	cout << "Enter the numbers of enemies: ";
	cin >> enemies;
	return enemies;
}

void Game(int &humans, int &enemies)
{
	static mt19937 randomEngine(time(NULL));
	uniform_real_distribution<float> attack(0.0f, 10.0f);
	uniform_real_distribution<float> chance(0.0f, 10.0f);

	float humanHealth = 10.0f;
	float currentHumanHealth = humanHealth;

	float enemyHealth = 10.0f;
	float currentEnemyHealth = enemyHealth;

	bool turn = true;

	while ((humans > 0) && (enemies > 0))
	{
		float randomChance = chance(randomEngine);
		float randomAttack = attack(randomEngine);

		if (turn)
		{
			if (randomChance >= 9.0f)
			{
				currentEnemyHealth -= randomAttack;
				if (currentEnemyHealth <= 0.0f)
				{
					enemies--;
					currentEnemyHealth = enemyHealth;
				}
			}
			turn = false;
		}
		else {
			if (randomChance >= 9.0f)
			{
				currentHumanHealth -= randomAttack;
				if (currentHumanHealth <= 0.0f)
				{
					humans--;
					currentHumanHealth = humanHealth;
				}
			}
			turn = true;
		}
	}
}

void Ends(int humans, int enemies)
{
	if (humans <= 0)
	{
		cout << "Humans lost. " << enemies << " Enemies remaining\n";
	}
	else if (enemies <= 0)
	{
		cout << "Humans Win. " << humans << " Humans remaining\n";
	}
}
