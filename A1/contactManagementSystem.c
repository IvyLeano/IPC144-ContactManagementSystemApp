/* A1
 * contactManagementSystem.c
 * contacts.c
 * Ivy Leano
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "contacts.h"

int main(void)
{
	// A variable of type Contact called contact:
	// Initialized values to 0 and empty C strings

	struct Contact contact = { { { '\0' } },{ 0,0,{ '\0' } },{ { '\0' } } };

	// Display the title

	printf("Contact Management System\n");
	printf("-------------------------\n");

	// Call the Contact function getName to store the values for the Name member

	getName(&contact.name);

	// Call the Contact function getAddress to store the values for the Address member

	getAddress(&contact.address);

	// Call the Contact function getNumbers to store the values for the Numbers member

	getNumbers(&contact.numbers);

	// Display Contact summary details

	printf("\n");
	printf("Contact Details\n");
	printf("---------------\n");

	printf("Name Details\n");
	printf("First name: %s\n", contact.name.firstName);
	printf("Middle initial(s): %s\n", contact.name.middleInitial);
	printf("Last name: %s\n", contact.name.lastName);
	printf("\n");

	printf("Address Details\n");
	printf("Street number: %d\n", contact.address.streetNumber);
	printf("Street name: %s\n", contact.address.street);
	printf("Apartment: %d\n", contact.address.apartmentNumber);
	printf("Postal code: %s\n", contact.address.postalCode);
	printf("City: %s\n", contact.address.city);
	printf("\n");

	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", contact.numbers.cell);
	printf("Home phone number: %s\n", contact.numbers.home);
	printf("Business phone number: %s\n", contact.numbers.business);
	printf("\n");

	// Display Completion Message

	printf("Structure test for Contact using functions done!");
	printf("\n");

	return 0;
}

