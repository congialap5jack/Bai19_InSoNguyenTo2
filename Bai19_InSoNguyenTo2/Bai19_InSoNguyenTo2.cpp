// Bai19_InSoNguyenTo2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/// <sumary>
/// ham kiem tra so nguyen to hay ko
/// </sumary>
/// <param name="s">so can kiem tra</param>
/// returns>
/// true la so nguyen to
/// false la ko phai so nguyen to
/// </returns>
bool kiemtrasnt(int s) {
	int dem = 0;
	for (int i = 1; i <= s; i++)
	{
		if (s % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2) {
		return true;
	}
	else
	{
		return false;
	}
}


int main() {
	cout << "kiem tra so co phai so nguyen to khong!\n";

	int so;
	cout << " nhap so "; cin >> so;
	for (int m = 1; m <= so; m++)
	{
		if (kiemtrasnt(m) == true) cout << m << " ";
	}
	return 0;
}