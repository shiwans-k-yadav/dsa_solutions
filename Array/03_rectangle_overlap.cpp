class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1=rec1[0],y1=rec1[1],x2=rec1[2],y2=rec1[3];
        int a1=rec2[0],b1=rec2[1],a2=rec2[2],b2=rec2[3];
        if((a2<=x1)|| (b1>=y2) || (x2<=a1) || (b2<=y1)){
            return false;
        }
        return true;
    }
};

// Best logic

// Two rectangles do NOT overlap if:

// rec2 is completely to the left
// OR
// rec2 is completely to the right
// OR
// rec2 is completely above
// OR
// rec2 is completely below
