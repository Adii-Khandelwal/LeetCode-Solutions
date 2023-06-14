class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
     
      unordered_map<string, int> subseqs;
        for(int i = 0; i+9 < s.size(); i++)
        {
            string subseq = s.substr(i, 10);
            subseqs[subseq]++;
        }

        // Find all subsequences that occured more than once
        vector<string> res;
        for(auto const &seq : subseqs)
        {
            if(seq.second > 1) // # of occurences > 1
                res.push_back(seq.first);
        }

        return res;
    }
};