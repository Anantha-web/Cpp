        int minDel = 0;
        vector<int> freq(26, 0);
        unordered_set<int> st;
        // this is freq of each alphabet, like a-'a' = 0th index till z(25th index)
        for(auto it : s){
            freq[it - 'a']++;
        }
        for(auto it : freq){
            if(it == 0) continue;   // for no occurence of an alphabet
            if(st.find(it) != st.end()){   // if this freq has occured before
                while(st.find(it) != st.end() && it > 0){  // until it is there or doesn't boil down to zero
                    it--;
                    minDel++;
                }
                if(it!=0) st.insert(it);  // once a new freq value occurs after some deletions (non-zero), which wasn't in the set before, insert it in the set
            }else{
                st.insert(it);  // not occured before? straightaway put it in the set
            } 
        }
        for(auto it : st){
            cout << it << endl;
        }
        return minDel;
    }
