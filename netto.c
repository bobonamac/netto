// Net Worth Calculator
// file: NetWorth.c

#include <stdio.h>

int main(void)
{
	int ks; // Kreissparkasse account balance
	int ksp; // Kreissparkasse account pending transaction
	int td; // TD account balance
	float er; // exchange rate - USD to EUR
	int gk; // Geld Karte balance
	int coh; // cash on hand
	int visa; // visa card balance
	float netto; // Net - doesn't work with scanf(" %f", &netto); on line 46???
	int dc; // Debit and Credit App balance
	int dcs; // Debit and Credit starting balance


	int main(void);

	printf("----------------------------------------\n\n");
	
	printf("Enter Kreissparkasse balance: EUR ");
	scanf(" %d", &ks);

	printf("Enter Kreissparkasse pending: EUR ");
	scanf(" %d", &ksp);

	printf("Enter TD Bank balance: USD ");
	scanf(" %d", &td);

	printf(" 1 USD to EUR = ");
	scanf(" %f", &er);

	printf("Enter Geld Karte balance: EUR ");
	scanf(" %d", &gk);

	printf("Enter Cash on Hand: EUR ");
	scanf(" %d", &coh);

	printf("Enter Visa balance: EUR ");
	scanf(" %d", &visa);

	printf("\nNet: EUR %.0f\n", ks - ksp + (td * er) + gk + coh - visa);


	printf("\nEnter Debit and Credit balance: EUR ");
	scanf(" %d", &dc);

	printf("Enter Debit & Credit starting debit: EUR ");
	scanf(" %d", &dcs);

	printf("Debit and Credit new starting debit: EUR %.0f", 
		(ks - ksp + (td * er) + gk + coh - visa) - dc - dcs);

	printf("\n\n----------------------------------------\n");

	return 0;
}