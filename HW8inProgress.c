/*programmer chase
date 11/5/16
specifications-switch problem. 1.	Display the smallest number entered
2.	Display the largest number entered
3.	Display the sum of the five numbers entered
4.	Display the average of the five numbers entered
*/

#include<stdio.h>>
#include<stdlib.h>>
//main funtioin
main() {

	//variable declarations
	int choice = 0, highNum = 1, lowNum = 2, sum = 3, avg = 4;
	//should average number be double?????

	printf("enter 5 numbers\n");
	scanf_s(" %i %i %i %i" "%i", &choice, &highNum, &lowNum, &sum, &avg);
	printf("press 1 to enter smallest number\n");
	printf("press 2 to enter largest number\n");
	printf("press 3 to enter sum of numbers\n");
	printf("press 4 to enter avg of numbers\n");
	printf("select a number\n"); 
	//use these numbers 18, 21, 17, 44, 9.
	scanf_s(" %i", &choice);





	switch (choice = 0) {


		//test case use numbers 1-5
	case '1':
		printf("%i is highNum", highNum);
		break;

	case '2':
		printf("%i is sum", sum);//the sum just list a number
		break;

	case '3':
		printf("%i is lowNum", lowNum);//third line shows smllest 
		break;							//the smallest entered was 1.

	case '4':
		printf("%i is avg", avg);//no avg is displayed
		break;

	default:
		printf("invalid number\n");//error messege here

	}
	printf("the smallest number is %i\n", lowNum);
	printf("the largest number is %i\n", highNum);
	printf("the sum of numbers is %i\n", sum);
	printf("the avg number is %.2lf\n", avg);


	system("pause");
}