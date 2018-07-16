//program 2.0.0.0

#include <stdio.h>

int main(void) {
	
	char cylinv[] = "Cylinder volume";
	char sphev[] = "Sphere volume";
	char conev[] = "Cone volume";
	char cubev[] = "Cube volume";
	char cuboidv[] = "Cuboid volume";
	char pyramv[] = "Pyramid volume";
	char prismv[] = "Prism volume";
	float pi = 3.14159265359;
	float radius;
	float height;
	float length;
	float length2;
	float length3;
	float basearea;
	float answer;
	int number;
	
	printf("Hi there! Welcome to my solution for calculate solid geometry.Please choose which category you want to solve? \n");
	printf(" 1. %s\n 2. %s\n \b 3. %s\n 4. %s\n 5. %s\n 6. %s\n 7. %s\n Category: ", cylinv, sphev, conev, cubev, cuboidv, pyramv, prismv);		//list the categories
	scanf("%d", &number);		//input the number with integer value
	
	
		switch(number) {
			
		case 1:
		printf("You've select cylinder volume.\nEnter the radius: ");
		scanf("%f", &radius);
		printf("Enter the height: ");
		scanf("%f", &height);		//input the height with float value
		answer = pi * radius * radius * height;		//formula for cylinder volume
		printf("The answer is %f", answer);
		break;
		
		case 2:
		printf("You've select sphere volume.\nEnter the radius: ");
		scanf("%f", &radius);
		answer = (4.0 / 3.0) * pi * radius*radius*radius;		//formula for sphere volume
		printf("The answer is %f", answer);
		break;
		
		case 3:
		printf("You've select cone volume.\nEnter the radius: ");
		scanf("%f", &radius);
		printf("Enter the height: ");
		scanf("%f", &height);
		answer = (1.0 / 3.0) * pi * radius*radius * height;		//formula for cone volume
		printf("The answer is %f", answer);
		break;
		
		case 4:
		printf("You've select cube volume.\nEnter the length: ");
		scanf("%f", &length);
		answer = length * length * length;		//formula for cube volume
		printf("The answer is %f", answer);
		
		break;
		
		case 5:
		printf("You've select cuboid volume.\nEnter the first length: ");
		scanf("%f", &length);
		printf("Enter the second length: ");
		scanf("%f", &length2);
		printf("Enter the third length: ");
		scanf("%f", &length3);
		answer = length * length2 * length3;		//volume for cuboid formula
		printf("The answer is %f", answer);
		
		break;
		case 6:
		printf("You've select pyramid volume.\nEnter the base area: ");
		scanf("%f", &basearea);
		printf("Enter the height: ");
		scanf("%f", &height);
		answer = (1.0/3.0) * basearea * height;		//volume for pyramid formula
		printf("The answer is %f", answer);
		
		break;
		
		case 7:
		printf("You've select prism volume.\nEnter the base area: ");
		scanf("%f", &basearea);
		printf("Enter the length or height: ");
		scanf("%f", &length);
		answer = basearea * length;		//volume for prism formula
		printf("The answer is %f", answer);
		
		
		break;
		
		default:
		printf("Invalid category!");		//output the invalid choice 
		break;
			
			
			
		}
		
return 0;	
	
}
