
void isPass();
void getDayofWeek();
void getDayofWeek1();

void decisionsSample() {

	isPass();
	getDayofWeek();
	getDayofWeek1();
}

void isPass() {

	int score = 48;
	if (score >= 50) {
		cout << "You passed!" << endl;
	}

	score = 68;
	if (score >= 50) {
		cout << "You passed!" << endl;
	}
	else {
		cout << "Sorry, you didn't pass" << endl;
	}

	// if  day_num = 0 , then day = Mon
	// if  day_num = 1 , then day = Tue
	// if  day_num = 2, then day = Wed
	// ...
}

void getDayofWeek() {

	int indexofDay = 3;
	Day day;

	if (indexofDay == 0) {
		day = Mon;
	}
	else if (indexofDay == 1) {
		day = Tue;
	}
	else if (indexofDay == 2) {
		day = Wed;
	}
	else if (indexofDay == 3) {
		day = Thu;
	}
	else if (indexofDay == 4) {
		day = Fri;
	}
	else if (indexofDay == 5) {
		day = Sat;
	}
	else if (indexofDay == 6) {
		day = Sun;
	}

	if (day == Sat || day == Sun) {
		cout << "go to a party" << endl;
	}
}

void getDayofWeek1() {

	int indexofDay = 30;

	Day day;
	switch (indexofDay) {
	case 0:
		day = Mon;
		break;
	case 1:
		day = Tue;
		break;
	case 2:
		day = Wed;
		break;
	case 3:
		day = Thu;
		break;
	case 4:
		day = Fri;
		break;
	case 5:
		day = Sat;
		break;
	default:
		day = Sun;
	}

	if (day == Sat || day == Sun) {
		cout << "go to a party" << endl;
	}

	//to Questions1
}
