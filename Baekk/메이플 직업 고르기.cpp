#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<string> jobs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> jobs[i];
    }

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        string myjobs;
        cin >> myjobs;

        for (auto it = jobs.begin(); it != jobs.end();)
        {
            if (*it == myjobs)
            {
                it = jobs.erase(it);
            }
            else
            {
                ++it;
            }
        }
    }

    int cnt = jobs.size();
    cout << cnt << endl;
    for (const string& job : jobs)
    {
        cout << job << endl;
    }

    return 0;
}
