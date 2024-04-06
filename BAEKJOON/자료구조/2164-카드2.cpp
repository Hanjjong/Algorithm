#include <iostream>
#include <queue>

int N;
std::queue<int> q;
int main(){
    std::cin >> N;
    for (int i = 1; i <= N; i++){
        q.push(i);
    }
    while(q.size() != 1){
        q.pop();
        int tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    std::cout << q.front();
}