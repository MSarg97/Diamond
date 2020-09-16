int main()
{
	int k;
	cout << "Enter an integer between 3 and 30: ";
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		for (int j = k - i - 1; j > 0; j--)
			cout << "  ";
		for (int j = 0; j <= 2 * i; j++)
			cout << "* ";
		cout << endl;
	}

	for (int i = k - 1; i > 0; i--)
	{
		for (int j = 0; j < k - i; j++)
			cout << "  ";
		for (int j = 2 * i - 1; j > 0; j--)
			cout << "* ";
		cout << endl;
	}
	return 0;
}
