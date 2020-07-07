#include <stdio.h>
#include <stdlib.h>

int coins(int money);
/**
*main - function that prints argc numbers.
*@argc: - Declaration of variable
*@argv: - Declaration of variable
*Return: int
*/
int main(int argc, char **argv)
{
int money, ans;

if (argc != 2)
{
printf("Error\n");
return (1);
}
money = atoi(argv[1]);
if (money <= 0)
{
	printf("0\n");
	return (0);
}
ans = coins(money);
printf("%d\n", ans);
return (0);
}
/**
*coins - function that holds coin numbers.
*@money: - Declaration of variable
*Return: int
*/
int coins(int money)
{
int coins;

coins = 0;
if (money / 25 > 0)
{
coins = coins + money / 25;
if (money % 25 == 0)
return (coins);
money = money % 25;
}
if (money / 10 > 0)
{
coins = coins + money / 10;
if (money % 10 == 0)
return (coins);
money = money % 10;
}
if (money / 5 > 0)
{
coins = coins + money / 5;
if (money % 5 == 0)
return (coins);
money = money % 5;
}
if (money / 2 > 0)
{
coins = coins + money / 2;
if (money % 2 == 0)
return (coins);
money = money % 2;
}
if (money / 1 > 0)
{
coins = coins + money;
return (coins);
}
return (0);
}
