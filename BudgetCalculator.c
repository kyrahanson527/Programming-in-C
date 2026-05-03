#include <stdio.h> 

int main() { 
    //Declare variables, double for decimal points
    double income1, income2, totalMonthlyIncome, totalSpending, leftoverAmount; 
    double school, transport, bills, grocery, entertainment, savings; 
    double schoolPct, transportPct, billsPct, groceryPct, entertainmentPct, entertainmentPct, savingsPct;

    //Prompt user to enter paychecks
    printf("Enter your first paycheck amount: "); 
    scanf("%lf", &income1);
    printf("Enter your second paycheck amount: ");
    scanf("%lf", &income2);
    totalMonthlyIncome = income1 + income2;

    //Display monthly income
    printf ("\n Total Monthly Income: $%f", totalMonthlyIncome);

    //Prompt user to enter in monthly expenses 
    printf("\n Please enter your monthly expenses for each category: \n");

    printf("School: $"); 
    scanf("%lf", &school);

    printf("Transportation: $"); 
    scanf("%lf", &transport);

    printf("Groceries: $"); 
    scanf("%lf", &grocery);

    printf("Bills: $"); 
    scanf("%lf", &bills);

    printf("Entertainment: $"); 
    scanf("%lf", &entertainment);

    printf("Savings: $"); 
    scanf("%lf", &savings);

    totalSpending = school + transport + bills + grocery + entertainment + savings; 

    // Error message if spending is more than monthly income 
    if (totalSpending > totalMonthlyIncome) { 
        printf("Error, expenses more than income. Please try again.");
    }

    //Calculate percentages and leftover money
    schoolPct = (school / totalMonthlyIncome) * 100; 
    transportPct = (transport / totalMonthlyIncome) * 100; 
    billsPct = (bills / totalMonthlyIncome) * 100; 
    groceryPct = (grocery / totalMonthlyIncome) * 100; 
    entertainmentPct = (entertainment / totalMonthlyIncome) * 100; 
    savingsPct = (savings / totalMonthlyIncome) * 100;

    leftoverAmount = totalMonthlyIncome - totalSpending;

    //Display calculations on screen
    printf("\n Calculations: \n");
    printf("\nTotal Income: $%.2f\n", totalMonthlyIncome); 
    printf("\n Total Spending: $%.2f \n", totalSpending);
    printf("\n Leftover Amount: $%.2f \n", leftoverAmount);
    printf("School: $%.2f / %f", school, school/totalMonthlyIncome);
    printf("Transportation: $%.2f / %f", transport, transport/totalMonthlyIncome);
    printf("Bills: $%.2f / %f", bills, bills/totalMonthlyIncome);
    printf("Groceries: $%.2f / %f", grocery, grocery/totalMonthlyIncome);
    printf("Entertainment: $%.2f / %f", entertainment, entertainment/totalMonthlyIncome);
    printf("Savings: $%.2f / %f", savings, savings/totalMonthlyIncome);
}