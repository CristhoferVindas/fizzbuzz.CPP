// Ejercicio 8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int grades[5];

int* setGrades(int*,int);
void printVector(int*,int);
double average(int*, int);
double highestGrade(int*, int);
double lowestGrade(int*, int);

int main()
{
	printVector(setGrades(grades, 5),5);

	cout << "\n\nLa media de las notas es: " << average(grades,5 );
	cout << "\n\nLa nota mas alta es: " << highestGrade(grades, 5);
	cout << "\n\nLa nota mas baja es: " << lowestGrade(grades, 5);
}

int* setGrades(int* grades, int vectorSize) {
	int whileIterator = 0;
	int grade = 0;
	while (whileIterator != 5) {
		cout << "Digite la nota para la posision " << whileIterator << ": ";
		cin >> grade;
		if (grade < 0 || grade > 10) {
			cout << "Digite una nota valida, entre (0-10)" << endl;
		}
		else {
			grades[whileIterator] = grade;
			whileIterator++;
		}
	}
	return grades;
}
void printVector(int* vector, int vectorSize) {
	int forIterator = 0;
	for (forIterator; forIterator < vectorSize; forIterator++) {
		cout << "[" << vector[forIterator] << "]";
	}
}
double average(int* vector, int vectorSize)
{
	double average = 0.0;
	double sum = 0.0;
	int forIterator = 0;
	for (forIterator; forIterator < vectorSize; forIterator++) {
		sum += vector[forIterator];
	}
	return average = sum / vectorSize;
}
double highestGrade(int* vector, int vectorSize)
{
	double highestGrade = 0.0;
	int forIterator = 0;
	for (forIterator; forIterator < vectorSize; forIterator++) {
		if (highestGrade < vector[forIterator]) {
			highestGrade = vector[forIterator];
		}
	}
	return highestGrade;
}
double lowestGrade(int* vector, int vectorSize)
{
	double lowestGrade = vector[0];
	int forIterator = 0;
	for (forIterator; forIterator < vectorSize; forIterator++) {
		if (lowestGrade > vector[forIterator]) {
			lowestGrade = vector[forIterator];
		}
	}
	return lowestGrade;
}
