#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();
    printf("Return: \n");

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i coins returned\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents;
    do {
    printf("how many cents you owed to the client: ");
    scanf("%i", &cents);
    }while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO
    printf("%i quarters\n", cents / 25);
    return cents / 25;
}

int calculate_dimes(int cents)
{
    // TODO
    printf("%i dimes\n", cents / 10);
    return cents / 10;
}

int calculate_nickels(int cents)
{
    // TODO
    printf("%i nickels\n", cents / 5);
    return cents / 5;
}

int calculate_pennies(int cents)
{
    // TODO
    printf("%i pennies\n", cents);
    return cents;
}
