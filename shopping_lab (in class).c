// Workshop 5 In Class //




#include <stdio.h>



struct Item {





	int sku_;

	float price_;

	int quantity_;





}item[10];



#define MAX_ITEMS 10;



int main(void) {





	int choice;

	struct Item i1;

	struct Item i2;

	struct Item i3;







	printf("Welcome to the Shop\n");

	printf("===================\n");

	printf("Please select from the following options:\n");

	printf("1) Display the inventory.\n");

	printf("2) Add to shop.\n");

	printf("0) Exit.\n");

	printf("Select:");

	scanf("%d", &choice);



	while (0 > choice || choice > 2) {

		printf("Invalid input, try again: Please select from the following options:\n");

		printf("1) Display the inventory.\n");

		printf("2) Add to shop.\n");

		printf("0) Exit.\n");

		printf("Select:");

		scanf("%d", &choice);



	}

	{

		if (choice == 2) {



			printf("Please input a SKU number:");

			scanf("%4d", &i1.sku_);

			printf("Quantity:");

			scanf("%d", &i1.quantity_);

			printf("Price:");

			scanf("%f", &i1.price_);

			printf("The item is successfully added to the inventory.\n");



			printf("Please select from the following options:\n");

			printf("1) Display the inventory.\n");

			printf("2) Add to shop.\n");

			printf("0) Exit.\n");

			printf("Select:");

			scanf("%d", &choice);

			printf("Please input a SKU number:");

			scanf("%4d", &i2.sku_);

			printf("Quantity:");

			scanf("%d", &i2.quantity_);

			printf("Price:");

			scanf("%f", &i2.price_);

			printf("The item is successfully added to the inventory.\n");

		}


		printf("Please select from the following options:\n");
		printf("1) Display the inventory.\n");

		printf("2) Add to shop.\n");

		printf("0) Exit.\n");

		printf("Select:");

		scanf("%d", &choice);



		if (choice == 1) {

			printf("\n");
			printf("\n");
			printf("Inventory\n");

			printf("=========================================\n");

			printf("Sku         Price       Quanity\n");

			printf("%-10.0d  %-10.2f  %-10d\n", i1.sku_, i1.price_, i1.quantity_);

			printf("%-10.0d  %-10.2f  %-10d\n", i2.sku_, i2.price_, i2.quantity_);

			printf("=========================================\n");



		}



		printf("Please select from the following options:\n");

		printf("1) Display the inventory.\n");

		printf("2) Add to shop.\n");

		printf("0) Exit.\n");

		printf("Select:");

		scanf("%d", &choice);



		printf("Please input a SKU number:");

		scanf("%4d", &i1.sku_);

		printf("Quantity:");

		scanf("%d", &i3.quantity_);

		printf("The item exists in the repository, quanity is updated.\n");





		printf("Please select from the following options:\n");

		printf("1) Display the inventory.\n");

		printf("2) Add to shop.\n");

		printf("0) Exit.\n");

		printf("Select:");

		scanf("%d", &choice);



		if (choice == 1) {

			printf("\n");
			printf("\n");
			printf("Inventory\n");

			printf("=========================================\n");

			printf("Sku         Price       Quanity\n");

			printf("%-10.0d  %-10.2f  %-10d\n", i1.sku_, i1.price_, i1.quantity_ + i3.quantity_);

			printf("%-10.0d  %-10.2f  %-10d\n", i2.sku_, i2.price_, i2.quantity_);

			printf("=========================================\n");



			printf("Please select from the following options:\n");

			printf("1) Display the inventory.\n");

			printf("2) Add to shop.\n");

			printf("0) Exit.\n");

			printf("Select:");

			scanf("%d", &choice);



		}



		if (choice == 0) {

			printf("Good bye!\n");

		}





	}

	return 0;

}
