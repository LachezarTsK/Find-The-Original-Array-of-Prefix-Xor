
#include <vector>
using namespace std;

class Solution {
    
public:
    vector<int> findArray(const vector<int>& prefixXorFromOriginalInput) const {
        
        vector<int> originalInput(prefixXorFromOriginalInput.size());
        originalInput[0] = prefixXorFromOriginalInput[0];

        for (size_t i = 1; i < prefixXorFromOriginalInput.size(); ++i) {
            originalInput[i] = prefixXorFromOriginalInput[i - 1] ^ prefixXorFromOriginalInput[i];
        }

        return originalInput;
    }
};
