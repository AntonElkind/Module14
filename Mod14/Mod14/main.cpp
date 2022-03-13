#include <iostream>
#include "trie.h"

using namespace std;

int main()
{
	cout << "HW Module 12" << endl;

	Trie* trie = new Trie;

	trie->insertKey("mil");
	trie->insertKey("milk");
	trie->insertKey("milkyway");
	trie->insertKey("macro");
	trie->insertKey("skill");
	trie->insertKey("skillfactory");
	trie->insertKey("sky");

	std::string userIn;
	bool run = true;
	while (run)
	{
		cout << "Enter prefix or \"exit\": ";
		cin >> userIn;
		if (userIn.compare("exit") == 0)
		{
			run = false;
			break;
		}
		if (trie->searchKey(userIn, true) == false)
		{
			cout << "No variants" << endl;;
		}
		cout << endl;
	}
	delete trie;

	return 0;
}
