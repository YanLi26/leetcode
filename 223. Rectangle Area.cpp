class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int total;
        total = (C-A)*(D-B) + (G-E)*(H-F);
        if(C<=E || A>=G || B>=H || D<=F) return total;
        vector<int> hori;
        hori.push_back(A); hori.push_back(E); hori.push_back(C); hori.push_back(G);
        vector<int> vert;
        vert.push_back(D); vert.push_back(H); vert.push_back(B); vert.push_back(F);
        sort(hori.begin(),hori.end());
        sort(vert.begin(),vert.end());
        total -= (hori[2]-hori[1])*(vert[2]-vert[1]);
        return total;
    }
};