#include<iostream>
using namespace std;

void sqrs() {
	int sqrs[10];
	int i;
	for (i = 1; i < 11; i++)sqrs[i - 1] = i * i;
	for (i = 0; i < 10; i++)cout << sqrs[i] << ' ';
}

void copy() {
	int i, a1[10] = {}, a2[10] = {};
	for (i = 1; i < 11; i++)a1[i - 1] = i;
	for (i = 0; i < 10; i++)a2[i] = a1[i];
	for (i = 0; i < 10; i++)cout << a2[i] << ' ';
}

void max() {
	int i, n;
	cout << "Enter number of students: "; cin >> n;
	float* arr = new float[n];
	cout << "Enter grade point average of every student: ";
	for (i = 0; i < n; i++) cin >> arr[i];
	float max = arr[0];
	for (i = 1; i < n; i++) if (arr[i] > max)max = arr[i];
	cout << "Max grade poin is: " << max;
	delete[]arr;
}

void average() {
	int i, min = 200, max = 0, avg = 0, days;
	cout << "How many days in the month? "; cin >> days;
	int* temp = new int[days];
	for (i = 0; i < days; i++) {
		cout << "Enter noonday temperature for day: " << i + 1 << ' '; cin >> temp[i];
	}
	for (i = 0; i < days; i++) {
		avg += temp[i];
		if (min > temp[i])min = temp[i];
		if (max < temp[i])max = temp[i];
	}
	cout << "Average temperature: " << avg / days << endl;
	cout << "Minimum temperature: " << min << endl;
	cout << "Maximum temperature: " << max << endl;
	delete[]temp;
}

void min() {
	int i, min, num, location = 1;
	cout << "Enter number of elements: "; cin >> num;
	int* arr = new int[num];
	for (i = 0; i < num; i++) {
		cout << "Enter elements: " << i + 1 << ' '; cin >> arr[i];
	}
	min = arr[0];
	for (i = 0; i < num; i++) {
		if (min > arr[i]) { min = arr[i]; location = i + 1; }
	}
	cout << "Min element is located under number: " << location << endl;
	cout << "It's value is: " << min << endl;
	delete[]arr;
}

void max2() {
	int i, max, num, location = 1;
	cout << "Enter number of elements: "; cin >> num;
	int* arr = new int[num];
	for (i = 0; i < num; i++) {
		cout << "Enter elements: " << i + 1 << ' '; cin >> arr[i];
	}
	max = arr[0];
	for (i = 0; i < num; i++) {
		if (max < arr[i]) { max = arr[i]; location = i + 1; }
	}
	cout << "Max element is located under number: " << location << endl;
	cout << "It's value is: " << max << endl;
	delete[]arr;
}

void search() {
	float x;
	int j = 0, num;
	cout << "Enter number of students: "; cin >> num;
	float* arr = new float[num];
	for (int i = 0; i < num; i++) {
		cout << "Enter grade of each of them: " << i + 1 << ' '; cin >> arr[i];
	}
	cout << "Grade we are looking for is: "; cin >> x;
	while (j < num && arr[j] != x) j++;
	if (j < num && arr[j] == x)cout << "Was found student with this grade " << x;
	else cout << "There is no student with this grade";
	delete[]arr;
}

void sort() {
	const int n = 5;
	int k, min, swap, arr[n] = { 20,8,32,6,1 };
	for (int i = 0; i < n - 1; i++) {
		k = i;
		min = arr[i];
		for (int j = i + 1; j < n; j++)
			if (arr[j] < min)
			{
				min = arr[j]; k = j;
			}
		swap = arr[k];
		arr[k] = arr[i];
		arr[i] = swap;
	}
	for (int i = 0; i < n; i++)
		cout << "arr[" << i << "] = " << arr[i] << endl;
}

void sort2() {
	const int n = 5;
	int swap, arr[n] = { 20,8,32,6,1 };
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++)
			if (arr[j] > arr[j + 1]) {
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
	}
	for (int i = 0; i < n; i++)
		cout << "arr[" << i << "] = " << arr[i] << endl;
}

void often() {
	int n, count = 0;
	cin >> n;
	char* s = new char[n];
	for (int i = 0; i < n + 5; i++)cin >> s[i];
	for (int j = 0; j < n; j++)if (s[j] == 'a')count++;
	for (int j = 0; j < n + 25; j++)
		cout << s[j];
	cout << endl << s;
	cout << endl << count << endl;
	//delete[]s;
	char str1[] = "my string";
	char str2[64] = "my string";
	char str3[] = { 'm','y',' ','s','t','r','i','n','g' };
	char str4[] = { 'm','y',' ','s','t','r','i','n','g','\0' };
	char str5[64] = { 'm','y',' ','s','t','r','i','n','g' };
}

void flag() {
	int arr[10] = {}, n, x, flag = 0;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	cin >> x;
	for (int i = 0; i < n; i++)if (arr[i] == x) { flag = 1; break; }
	if (flag)cout << "yes" << endl;
	else cout << "no" << endl;
}

void negativeSum() {
	int  n;
	double arr[10] = {}, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n; i++)if (arr[i] < 0) sum += arr[i];
	cout << sum << endl;
}

static void position() {
	int arr[35] = {}, n, x, pos = -1;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	cout << "Enter x: "; cin >> x;
	for (int i = 0; i < n; i++) if (arr[i] == x) { pos = i + 1; break; }
	if (pos != -1)cout << pos << endl;
	else cout << "no" << endl;
}

static void even() {
	int n, count = 0;
	cout << "Enter number of numbers: "; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n; i++) if (arr[i] % 2 == 0) { count++; }
	cout << "The number of even numbers: " << count << endl;
	delete[]arr;
}

static void avrPositive() {
	int n, count = 0;
	double sum = 0;
	cout << "Enter number of numbers: "; cin >> n;
	double* arr = new double[n];
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n; i++) if (arr[i] > 0) { sum += arr[i]; count++; }
	cout << "The average value of positive numbers is: ";
	if (count != 0)cout << sum / count << endl;
	else cout << 0 << endl;
	delete[]arr;
}

static void prMulSeven() {
	int n, pr = 1, flag = 0;
	cout << "Enter number of numbers: "; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < n; i++) if (arr[i] % 7 == 0) { pr *= arr[i]; flag = 1; }
	if (flag)cout << "The product of multiples of seven is: " << pr << endl;
	else cout << "No multiples of seven" << endl;
	delete[]arr;
}

int main() {
	//sqrs();
	//copy();
	//max();
	//average();
	//min();
	//max2();
	//search();
	//sort();
	sort2();
	//often();
	//flag();
	//negativeSum();
	//position();
	//even();
	//avrPositive();
	//prMulSeven();

	cout << "\n\n";
	return 0;
}

