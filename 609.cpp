class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string>> files;

        for (auto path : paths) {
            stringstream ss(path);
            string root, cur;
            
            getline(ss, root, ' ');
            while (getline(ss, cur, ' ')) {
                string fileName = root + '/' + cur.substr(0, cur.find('('));
                string fileContent = cur.substr(cur.find('(') + 1, cur.find(')') - cur.find('(') - 1);
                files[fileContent].push_back(fileName);
            }
        }

        
        vector<vector<string>> result;
        
        for (auto file : files) {
            if (file.second.size() > 1)
                result.push_back(file.second);
        }

        return result;
    }
};