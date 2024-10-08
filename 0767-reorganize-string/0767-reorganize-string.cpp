class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;

        string res="";
        priority_queue<pair<int,char>>pq;

        for(auto str:s)
        {
            mp[str]++;
        }
        for(auto m:mp)
        {
            pq.push({m.second,m.first});
        }

        while(pq.size()>1)
        {
            auto top1=pq.top();
            pq.pop();

            auto top2=pq.top();
            pq.pop();

            res+=top1.second;
            res+=top2.second;

            top1.first-=1;
            top2.first-=1;

            if(top1.first>0)
            {
                pq.push(top1);
            }

            if(top2.first>0)
            {
                pq.push(top2);
            }
        }

        if(!pq.empty())
        {
            if(pq.top().first>1)
            {
                return "";
            }
            else
            {
                res+=pq.top().second;
            }
        }

        return res;

    }
};