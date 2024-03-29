// https://leetcode.com/problems/largest-rectangle-in-histogram/description/
class Solution {
public:
vector<int> nextSmallerElement(vector<int> &v){
  stack<int> s;
  s.push(-1);

  vector<int> ans(v.size());
  for(int i= v.size()-1 ; i>=0 ; i--){
    int curr = v[i];
    while(s.top()!=-1 && v[s.top()] >= curr){
      s.pop();
    }
    ans[i] = s.top();
    s.push(i);
  }
  return ans;
}

vector<int> previousSmallerElement(vector<int> &v){
  stack<int> s;
  s.push(-1);
  vector<int> ans(v.size());
  for(int i=0;i<v.size();i++){
    int curr = v[i];
    while(s.top() != -1 && v[s.top()] >= curr){
      s.pop();
    }
    ans[i] = s.top();
    s.push(i);
  }
  return ans;
}
    int largestRectangleArea(vector<int>& height) {
          // prev smaller element array
        vector<int> prev = previousSmallerElement(height);
        // next smaller element array
        vector<int> next = nextSmallerElement(height);
        // area vector
        int maxArea = INT_MIN;
        int size = height.size();
        for(int i = 0; i<height.size(); i++){
            int length = height[i];
            if(next[i] == -1){
            next[i] = size;
            }
            int width = next[i] - prev[i] - 1;
            int area = length*width;
            maxArea = max(maxArea,area);
        }
        return maxArea;
    }
};
