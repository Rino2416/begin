#pragma once

//TASK BEGIN

//1
int perimetr1(int Perimetr, int NumberOne) {
	Perimetr = 4 * NumberOne;
	return Perimetr;
}
//2
int square(int Squaree, int NumberOne){
	Squaree = pow(NumberOne, 2);
		return Squaree;
}
//3
int PerimetrSquare(int Res , int NumberOne, int NumberTwo, int Square ,int Perimetr){
Perimetr =2* (NumberOne + NumberTwo);
Square = NumberOne * NumberTwo;
Res = (Perimetr, Square);
return	Res;
}
//4
double diametr(double Diametrr, double Long, double pi) {
	pi = 3.14;
	Long = pi * Diametrr;
	return Long;
}
//5
int CubVolSqua(int Res ,int Long, int Volume, int Square) {
	Volume = pow(Long, 3);
	Square = 6 * pow(Volume, 2);
	Res = (Volume, Square);
	return Res;
}
//6
int ParallelVolSqu(int Res , int Volume, int Square, int NumberOne, int NumberTwo, int NumberThree) {
	Volume = NumberOne * NumberTwo * NumberThree;
	Square = 2 * (NumberOne * NumberTwo + NumberTwo * NumberThree + NumberOne * NumberThree);
	Res = (Volume, Square);
	return Res;
}
//7
int LongSquCircle(int Res ,int Long, int Square, int Radius,int pi) {
    int pi = 3.14;
	Long = 2 * pi * Radius;
	Square = pi * pow(Radius, 2);
	Res = (Long, Square);
	return Res;
}
//8
int MedArph(int NumberOne, int NumberTwo,int Average) {
	Average = (NumberOne + NumberTwo) / 2;
	return Average;
}
//9 
int GeoMean(int NumberOne, int NumberTwo, int Average) {
	if (NumberOne && NumberTwo > 0) {
		Average = sqrt(NumberOne * NumberTwo);
		return Average;
	}
	else {
		return false;
	}
}
//10 
int SumDifPartOnSqrt(int Res ,int NumberOne, int NumberTwo, int Sum, int Dif, int Work, int Priv) {
	if (NumberOne & NumberTwo > 0) {
		Sum = sqrt(NumberOne + NumberTwo);
		Dif = sqrt(NumberOne - NumberTwo);
		Work = sqrt(NumberOne * NumberTwo);
		Priv = sqrt(NumberOne / NumberTwo);
		Res = (Sum, Dif, Work, Priv);
		return Res;
	}
	else {
		return false;
	}
}
//11
int SumDifPartOnMod(int Res , int NumberOne, int NumberTwo, int Sum, int Dif, int Work, int Priv) {
	if (NumberOne & NumberTwo > 0) {
		Sum = fabs(NumberOne + NumberTwo);
		Dif = fabs(NumberOne - NumberTwo);
		Work = fabs(NumberOne * NumberTwo);
		Priv = fabs(NumberOne / NumberTwo);
		Res = (Sum, Dif, Work, Priv);
		return Res;
	}
	else {
		return false;
	}
}
//12
int HypoPer(int Res , int LegOne, int LegTwo, int Perimetr, int Hypo) {
	Hypo = sqrt(pow(LegOne, 2) * pow(LegTwo, 2));
	Perimetr = LegOne + LegTwo + Hypo;
	Res = (Hypo, Perimetr);
	return Res;
}
//13
int ThreeSquare(int Res , int RadiusOne, int RadiusTwo, int SquareOne, int SquareTwo, int SquareThree, int pi) {
	pi = 3.14;
	if (RadiusOne > RadiusTwo) {
		SquareOne = pi * pow((RadiusOne), 2);
		SquareTwo = pi * pow((RadiusTwo), 2);
		SquareThree = SquareOne - SquareTwo;
		Res = (SquareOne, SquareTwo, SquareThree);
		return Res;
	}
}
//14
int RadSquare(int Res , int Long, int Radius, int Square, int pi) {
	pi = 3.14;
	Radius = Long / (2 * pi);
	Long = 2 * pi * Radius;
	Square = pi * pow(Radius, 2);
	Res = (Radius, Square);
	return Res;
}
//15 
int DiamLong(int Res ,int Square, int Diametr, int Long, int pi) {
	pi = 3.14;
	Diametr = 2 * sqrt(Square / pi);
	Long = pi * Diametr;
	Res = Diametr, Long;
	return Res;
}
//16
int Distance(int PointOne, int PointTwo) {
	//???
}




//17
int PointSum(int PointOne, int PointTwo, int PointThree, int OneThreePoint , int TwoThreePoint, int Sum) {
	std::cin >> PointOne;
	std::cin >> PointTwo;
	std::cin >> PointThree;
	OneThreePoint = fabs(PointOne - PointThree);
	TwoThreePoint = fabs(PointTwo - PointThree);
	Sum = OneThreePoint + TwoThreePoint;
	return Sum;
	
}
//18
int PointWork(int PointOne, int PointTwo, int PointThree, int OneThreePoint, int TwoThreePoint, int Work) {
	std::cin >> PointOne;
	std::cin >> PointTwo;
	std::cin >> PointThree;
	OneThreePoint = fabs(PointOne - PointThree);
	TwoThreePoint = fabs(PointTwo - PointThree);
	Work = OneThreePoint * TwoThreePoint;
	return Work;

}
//19
int PerSquarePoint(int Res , int XPoint1, int YPoint1, int XPoint2, int YPoint2, int Square, int Perimetr) {
	std::cin >> XPoint1;
	std::cin >> YPoint1;
	std::cin >> XPoint2;
	std::cin >> YPoint2;
	Perimetr = 2 * (fabs(XPoint1 - XPoint2) + fabs(YPoint2 - YPoint2));
	Square = fabs(XPoint1 - XPoint2) * fabs(YPoint1 - YPoint2);
	Res = (Perimetr, Square);
	return Res;
}
//20 
int PointDisctance(int XPoint1, int YPoint1, int XPoint2, int YPoint2, int Distance) {
	std::cin >> XPoint1;
	std::cin >> YPoint1;
	std::cin >> XPoint2;
	std::cin >> YPoint2;
	Distance = sqrt(pow((XPoint2 - XPoint1), 2) + pow((YPoint2 - YPoint1), 2));
	return Distance;
}
//21
int TriangleSquare(int Res , int XPoint1, int YPoint1, int XPoint2, int YPoint2, int XPoint3, int YPoint3, int PointA, int PointB, int PointC, int PointP, int Perimetr, int Square) {
	std::cin >> XPoint1;
	std::cin >> YPoint1;
	std::cin >> XPoint2;
	std::cin >> YPoint2;
	std::cin >> XPoint3;
	std::cin >> YPoint3;
	PointA = sqrt(sqrt(XPoint1 - XPoint2) + sqrt(YPoint1 - YPoint2));
	PointB = sqrt(sqrt(XPoint2 - XPoint3) + sqrt(YPoint2 - YPoint3));
	PointC = sqrt(sqrt(XPoint3 - XPoint1) + sqrt(YPoint3 - YPoint1));
	PointP = PointA + PointB + PointC;
	Perimetr = (PointA + PointB + PointC) / 2;
	Square = sqrt(Perimetr * (Perimetr - PointA) * (Perimetr - PointB) * (Perimetr - PointC));
	Res = Perimetr, Square;
	return Res;
}
//22
int Change(int NumberOne, int NumberTwo, int Holder, int Res) {
	std::cin >> NumberOne;
	std::cin >> NumberTwo;
	Holder = NumberOne;
	NumberOne = NumberTwo;
	NumberTwo = Holder;
	std::cout << NumberOne << " " << NumberTwo;
	Res = (NumberOne, NumberTwo);
	return Res;
}
//23
int ChangeThree(int NumberOne, int NumberTwo, int NumberThree, int Holder, int Res) {
	std::cin >> NumberOne;
	std::cin >> NumberTwo;
	std::cin >> NumberThree;
	Holder = NumberOne;
	NumberOne = NumberTwo;
	NumberTwo = NumberThree;
	NumberThree = Holder;
	std::cout << NumberOne << " " << NumberTwo << " " << NumberThree;
	Res = (NumberOne, NumberTwo, NumberThree);
	return Res;
}
//24
int ChangeThree2(int NumberOne, int NumberTwo, int NumberThree, int Holder, int Res) {
	std::cin >> NumberOne;
	std::cin >> NumberTwo;
	std::cin >> NumberThree;
	Holder = NumberOne;
	NumberThree = NumberTwo;
	NumberTwo = NumberOne;
	Holder = NumberThree;
	std::cout << NumberOne << " " << NumberTwo << " " << NumberThree;
	Res = (NumberOne, NumberTwo, NumberThree);
	return Res;
}
//25 
int Function(int Var, int res) {
	std::cin >> Var;
	res = 3 * pow(Var, 6) - 5 * pow(Var, 2) - 7;
	return res;
}
//26
int Functions(int Var, int Res) {
	std::cin >> Var;
	Res = 4 * pow((Var - 3), 6) - 7 * pow((Var - 3), 3) + 2;
	return Res;
}
//27
int Degree(int NotDegree,int TwoDegree, int FourDegree, int EightDegree , int Res) {
	cin >> NotDegree;
	TwoDegree = NotDegree * NotDegree;
	FourDegree = TwoDegree * TwoDegree;
	EightDegree = FourDegree * FourDegree;
	cout << NotDegree << " " << TwoDegree << " " << FourDegree << " " << EightDegree;
	Res =  (NotDegree, TwoDegree, FourDegree, EightDegree);
	return Res;
}
//28 
int Degree2(int NotDegree, int TwoDegree , int ThreeDegree , int FiveDegree , int TenDegree , int FifteenDegree , int Res ) {
	cin >> NotDegree;
	TwoDegree = NotDegree * NotDegree;
	ThreeDegree = TwoDegree * NotDegree;
	FiveDegree = ThreeDegree * TwoDegree;
	TenDegree = FiveDegree * FiveDegree;
	FifteenDegree = TenDegree * FiveDegree;
	cout << NotDegree << " " << TwoDegree << " " << ThreeDegree << " " << FiveDegree << " " << TenDegree << " " << FifteenDegree;
	Res= (NotDegree, TwoDegree, ThreeDegree, FiveDegree, TenDegree, FifteenDegree);
	return Res;

}
//29
int Radians(int CornerInRad, int pi, int Corner) {
	pi = 3.14;
	cin >> Corner;
	if (0 < Corner <= 360) {
		CornerInRad = pi * Corner / 180;
		return CornerInRad;
	}
	else {
		return false;
	}
}
//30
int grade(int CornerInGrade, int pi, int Corner) {
	pi = 3.14;
	cin >> Corner;
	if (0 < Corner < 2 * pi) {
		CornerInGrade = 180 * Corner / pi;
		return CornerInGrade;
	}
	else {
		return false;
	}
}
//31
int Celsius(int Fahr, int Cels) {
	cin >> Fahr;
	Cels = (Fahr - 32) * 5 / 9;
	return Cels;
}
//32
int Fahren(int Cels, int Fahr) {
	cin >> Cels;
	Fahr = (Cels * 9 / 5) + 32;
	return Fahr;
}
//33
int Price(int PrSweet, int PrKgSweet, int SweetKg , int CinKg , int YourPrice) {
	cin >> PrSweet;
	cin >> PrKgSweet;
	SweetKg = PrKgSweet / PrSweet;
	cin >> CinKg;
	YourPrice = CinKg * SweetKg;
	return YourPrice;
}
//34
int PriceChoc(int ChocolatePrice, int IrisPrice, int KgChocolate, int KgIris , int OneKgChoc , int OneKgIris , int Diff ) {
	cin >> ChocolatePrice;
	cin >> IrisPrice;
	cin >> KgChocolate;
	cin >> KgIris;
	OneKgChoc = ChocolatePrice / KgChocolate;
	OneKgIris = IrisPrice / KgIris;
	if (OneKgChoc > OneKgIris) {
		Diff = OneKgChoc - OneKgIris;
		return Diff;
	}
	else {
		cout << "Chocolate sweets are cheaper ";
			return false;
	}

}
//35
int BoatWay(int SpeedInStandWater , int SpeedRiverFlow , int TimeBoatInLake , int TimeBoatInRiver ,int BoatWays, int WayInStayWater, int WayInGoWater,int AllWay) {
	if (SpeedInStandWater > SpeedRiverFlow) {
		WayInStayWater = TimeBoatInLake * SpeedInStandWater;
		WayInGoWater = TimeBoatInRiver *(SpeedInStandWater - SpeedRiverFlow);
		AllWay = WayInStayWater + WayInGoWater;
		return AllWay;
	}
	else {
		return false;
	}

}
//36
int DifCar(int TimeCar , int SpeedFirstCar, int SpeedSecondCar, int DifBetweenCar, int GeneralSpeed , int GeneralWay)
{
	GeneralSpeed = SpeedFirstCar + SpeedSecondCar;
	GeneralWay = TimeCar * GeneralSpeed;
	DifBetweenCar = DifBetweenCar + GeneralWay;
	return DifBetweenCar;
}
//37
int DifCar2(int TimeCar, int SpeedFirstCar, int SpeedSecondCar, int DifBetweenCar, int GeneralSpeed, int GeneralWay)
{
	GeneralSpeed = SpeedFirstCar + SpeedSecondCar;
	GeneralWay = TimeCar * GeneralSpeed;
	DifBetweenCar = fabs(DifBetweenCar - GeneralWay);
	return DifBetweenCar;
}
//38
int TheEquation(int NumberOne, int NumberTwo, int EquationX) {
	EquationX = -1 * NumberTwo / NumberOne;
	return EquationX;
}
//39
int Roots(int NumberOne, int NumberTwo, int NumberThree, int Discrim, int RootOne , int RootTwo) {
	if (NumberOne != 0) {
		Discrim = pow(NumberTwo, 2) - 4 * NumberOne * NumberTwo;
	if (Discrim > 0) {
		RootOne = (-NumberTwo + sqrt(Discrim)) / (2 * NumberOne);
		RootTwo = (-NumberTwo - sqrt(Discrim)) / (2 * NumberOne);
	if (RootOne > RootTwo) {
		return RootTwo;
	}
	else {
		return RootOne;
	}
	}
	}
}
//40
int System(int XRes,int YRes,int NumberOneOne, int NumberTwoOne, int NumberThreeOne, int NumberOneTwo, int NumberTwoTwo, int NumberThreeTwo,int Res2) {
	int Discr = NumberOneOne * NumberTwoTwo - NumberOneTwo * NumberTwoOne;
	XRes = (NumberThreeOne * NumberTwoTwo - NumberThreeTwo * NumberTwoOne) / Discr;
	YRes = (NumberOneOne * NumberThreeTwo - NumberOneTwo - NumberOneTwo * NumberThreeOne) / Discr;
	cout << XRes << YRes;
	return XRes;
}



