#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Macro definition
#define MAX_LENGTH 50

//Function prototypes
void print_road_to_resilience();

//Constant definition
const char *road_to_resilience = "The Road to Resilience";

//Global variables
int journey_length = 0;

int main(void)
{
	//Variables declaration
	int i;
	char destination[MAX_LENGTH], current_location[MAX_LENGTH];

	//Print the road to resilience
	print_road_to_resilience();

	//Get the destination from user
	printf("Enter your destination:");
	scanf("%s", destination);

	//Start the journey
	strcpy(current_location, "Start");
	for (i = 0; i < journey_length; i++)
	{
		//Check if reached the destination
		if (strcmp(current_location, destination) == 0)
		{
			printf("Congratulations! You have reached your destination!\n");
			break;
		}

		//Print the current location
		printf("You are currently at: %s\n", current_location);

		//Print the options to travel
		printf("Your choices are:\n");
		printf("1: Persevere\n2: Take a Wrong Turn\n3: Take a Break\n");

		//Get the user input to travel
		int choice;
		scanf("%d", &choice);

		//Update the current location based on user's input
		switch (choice)
		{
		case 1:
			strcpy(current_location, "Persevere");
			break;
		case 2:
			strcpy(current_location, "Wrong Turn");
			break;
		case 3:
			strcpy(current_location, "Take a Break");
			break;
		default:
			printf("Invalid choice!\n");
			break;
		}

		//Increase the journey length
		journey_length++;
	}

	return 0;
}

//Function that prints the road to resilience
void print_road_to_resilience()
{
	printf("%s\n", road_to_resilience);
}