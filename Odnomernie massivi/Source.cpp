#include<iostream>

using namespace std;

int main() {
	int n = 0;
	cout << "Vvedite nomer zadaniya: ";
	cin >> n;

	switch (n)
	{
		{
	case 1:
		//1.�������� ���������, ������� ������ � ���������� ���������� ������ �� 5 ����� �����, 
		//����� ���� ������� ���������� ��������� ���������. 
		//����� ������ ������� �������� ������ ���������� ��������� � ������� ��������.
		int counter;
		int array[5];
		int a = 0;
		cout << "Vvedite elementi massiva: "<<endl;

		for (int counter = 0; counter < 5; counter++)
		{
			cout <<"array[" << counter << "] = ";
			cin >> array[counter];
		}

		for(int counter=0;counter<5;counter++)
			if (array[counter] != 0)
				a++;
		cout << "\nThere are " << a << " not zero elements." << endl;
		break;
		}
		{
	case 2:
		//2. �������� ���������, ������� ������� ����������� ������� ����������
		//� ���������� ������� ����� �����. ���� �������� ������������� 
		//��� ������ �� ����� ������ ��������� .
		int a[5], i;
		int min;
		cout << "Vvedite 5 elementov massiva: "<<" "<<endl;

		for (int i = 0; i < 5; i++)
			cin >> a[i];
		min = 0;
		for (int i = 1; i < 5; i++)
			if (a[i] < a[min])
				min = i;
		cout << "Minimalnij element massiva: " << a[min] << endl;
		break;
		}
		{
	case 3:
		//3. �������� ���������, ������� ��������� ������� �������������� 
		//��������� ��������� ���������� � ���������� ������� ����� �����. 
		//���� �������� ������������� ��� ������ �� ����� ������ ���������.
		int a[10], i;
		int sum=0;
		int b = 0;
	
		cout << "Vvedite 10 elementov massiva: " << " " << endl;

		for (int i = 0; i < 10; i++)
			cin >> a[i];
		for (int i = 0; i < 10; i++)
			sum += a[i];
		cout << "Summary = " << sum << endl;

		for (int i = 0; i < 10; i++)
			if (a[i] != 0)
				b++;
		cout << "There are " << b << " not zero elements." << endl;

		int cnt = 0;
		double c = 0;
		for (int i = 0; i < 10; i++)
			if (a[i] != 0) {
				cnt++;
				c += a[i];
			}
		c /= cnt;
		cout << "Srednee arifmeticheskoe nenulevix elementov: " << c << endl;
		break;
		}
	}
}