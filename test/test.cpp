#include <iostream>

double calculateAmount(int days, double initialAmount, double previousDayAmount = 0.0)
{
    if (days == 0) {
        return initialAmount;
    } else if (days == 8) {
        return calculateAmount(days - 1, initialAmount * 2 + previousDayAmount * 0.5, initialAmount * 2);
    } else if (days == 9 || days == 10) {
        return calculateAmount(days - 1, initialAmount + 1, initialAmount);
    } else {
        return calculateAmount(days - 1, initialAmount * 2, previousDayAmount);
    }
}

int main()
{
    int numDays;
    std::cout << "Enter the number of days: ";
    std::cin >> numDays;

    double initialAmount = 3.0;  // Assuming the initial amount is 1 unit

    double finalAmount = calculateAmount(numDays, initialAmount);

    std::cout << "Final amount after " << numDays << " days: " << finalAmount << std::endl;

    return 0;
}
