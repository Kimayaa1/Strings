
class Solution {
  public:
    string findMax(string N) {
        sort(N.begin(), N.end());
        reverse(N.begin(), N.end());
        return N;
    }
};
