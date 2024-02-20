

#include <iostream>
using namespace std;


class Worker
{
public:
    string Workername = "";
};

class Manager
{

private:
    string ManagerName = "Unknown";
    static const int maxWorkers = 10;
    Worker workers[maxWorkers];
    int numWorkers = 0;

public:
    Manager(string ManagerName)
    {
        this->ManagerName = ManagerName;
    }

    void addWorker(const Worker &worker)
    {
        if (numWorkers < maxWorkers)
        {
            workers[numWorkers++] = worker;
        }
        else
        {
            cout << "Manager " << ManagerName << "is no longer accespting more workers because limit reached of " << maxWorkers << endl;
        }
    }

    void displayWorkers()
    {
        cout << "\t" << "       ====> Aggregation Relationship <==== \n" << endl;
        cout << "\t" << " e.g. Manager has many workers under him." << endl;
        cout << "\t\tSolution: " << endl;
        cout << "\t\t\tManager: " << ManagerName << endl;
        cout << "\t\t\tManager's Workers: " << endl;
        for (int i = 0; i < numWorkers; i++)
        {
            cout << "\t\t\t\t" << i + 1 << "- " << workers[i].Workername << endl;
        }
    }
};

int main()
{
    cout << endl;

    Worker worker1;
    worker1.Workername = "Alice";

    Worker worker2;
    worker2.Workername = "Bella";

    Manager manager1("Daniell");
    manager1.addWorker(worker1);
    manager1.addWorker(worker2);
    manager1.displayWorkers();

    cout << endl;
    return 0;
}