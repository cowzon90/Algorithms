#include<iostream>
#include"RockFestival.h"

RockFestival::RockFestival() {
	// Do nothing
}

void RockFestival::CalcAverageFees_Greedy(int days, int numberOfTeams, int fees[]) {
	// Initial min value.
	double min = 100.0 * days;
	int maxTeamNumber = days;
	for (int currentTeamNumber = numberOfTeams; currentTeamNumber < maxTeamNumber + 1; currentTeamNumber++) {

		// Team ++
		int localSum = 100 * currentTeamNumber;
		int endDay = days - currentTeamNumber;
		for (int startDay = 0; startDay < endDay + 1; startDay++) {

			// Calculate sumation about number of days from specific day.
			int sum = 0;
			for (int sumationIndex = startDay; sumationIndex < startDay + currentTeamNumber; sumationIndex++) {
				sum += fees[sumationIndex];
			}

			std::cout << sum << std::endl;
			// Compare and Find smallest sum
			if (localSum > sum) {
				localSum = sum;
			}
		}

		std::cout << std::endl;
		std::cout << "Local min of sum : " << localSum << std::endl;
		std::cout << std::endl;

		// Compare and Find smallest average Fee.
		double localMin = (double)localSum / (double)currentTeamNumber;
		if (min > localMin) {
			min = localMin;
		}
	}

	std::cout << std::endl;
	std::cout << "Smallest Average is " << min << std::endl;
}

void RockFestival::Test() {
	std::cout << "Rock Festival Test" << std::endl;

	int days = 6;
	int numberOfTeams = 3;
	int fees[] = { 6, 4, 1, 3, 5, 2 };

	this->CalcAverageFees_Greedy(days, numberOfTeams, fees);
}