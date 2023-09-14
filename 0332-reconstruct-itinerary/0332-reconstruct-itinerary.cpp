class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& t) {
        unordered_map<string, priority_queue<string, vector<string>, greater<string> > > adj;
        for(int i=0;i<t.size();i++){
            adj[t[i][0]].push(t[i][1]);
        }
        vector<string> ans;
        stack<string> s;
        string st = "JFK";
        s.push(st);

        while(!s.empty()){
            string f = s.top();
            if(adj[f].size()>0){
                s.push(adj[f].top());
                adj[f].pop();
            }else{
                ans.push_back(f);
                s.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};