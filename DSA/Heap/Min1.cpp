#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue <int , vector<int>, greater<int>> pq;

    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(3);
    pq.push(20);

    while (pq.empty() == false)
    {
      cout<< pq.top() << " ";
      pq.pop();  
    }
    return 0;
}