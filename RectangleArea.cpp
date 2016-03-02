class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area = (C - A)*(D - B) + (G - E)*(H - F);
        int left = max(A, E), right = min(C, G);
        int bottom = max(B, F), top = min(D, H);
        
        if (left < right && bottom < top)
            area -= (right - left)*(top - bottom);
        
        return area;
    }
};