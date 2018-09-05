/* A1
 * contactManagementSystem.c
 * contacts.c
 * Ivy Leano
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"

// Contact getName function: 
// Get and store from standard input the values for Name

void getName(struct Name *name)
{
	char yes_no;

	printf("Please enter the contact's first name: ");
	scanf("%s", name->firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &yes_no);

	if (yes_no == 'y' || yes_no == 'Y') 
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%s", name->middleInitial);
	}

	printf("Please enter the contact's last name: ");
	scanf("%s", name->lastName);
}

// Contact getAddress function:
// Get and store from standard input the values for Address

void getAddress(struct Address *address)
{
	char yes_no;

	printf("Please enter the contact's street number: ");
	scanf("%d", &address->streetNumber);
	getchar();

	printf("Please enter the contact's street name: ");
	scanf("%[^\n]s", address->street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &yes_no);

	if (yes_no == 'y' || yes_no == 'Y') 
	{
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &address->apartmentNumber);
	}

	getchar();
	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]s", address->postalCode);

	getchar();
	printf("Please enter the contact's city: ");
	scanf("%[^\n]s", address->city);
}

// Contact getNumbers function:
// Get and store from standard input the values for Numbers

void getNumbers(struct Numbers *numbers)
{
	char yes_no;

	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &yes_no);

	if (yes_no == 'y' || yes_no == 'Y') 
	{
		printf("Please enter the contact's cell phone number: ");
		scanf("%s", numbers->cell);
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &yes_no);

	if (yes_no == 'y' || yes_no == 'Y') 
	{
		printf("Please enter the contact's home phone number: ");
		scanf("%s", numbers->home);
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &yes_no);

	if (yes_no == 'y' || yes_no == 'Y') 
	{
		printf("Please enter the contact's business phone number: ");
		scanf("%s", numbers->business);
	}
}

