// ?? not optimise approach
class Solution {
    public:
        int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
            priority_queue<int> pq(task.begin(), task.end());
            priority_queue<int> pq1(workers.begin(), workers.end());
            int count = 0;
            while(!task.empty()){
                int task = pq.top();
                int worker = pq1.top();
                if(task > worker){
                    if(pills > 0){
                        int newworker = strength * worker;
                        if(task > newworker ){
                            pq.pop();
                        }else{
                            pills--;
                            pq.pop();
                            pq1.pop();
                            count++;
                        }
                    }
                }
                else{
                    pills--;
                    pq.pop();
                    pq1.pop();
                    count++; 
                }
            }
            return count;
        }
};
