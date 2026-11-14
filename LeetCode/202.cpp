class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;


        while (n != 1){
            int sum = 0; 

            if(s.find(n) != s.end()) return false;

            s.insert(n);

            while(n > 0){
                int d = n % 10;


                sum += d*d;
                n/= 10;
        }
            n=sum;

    }
        return true;

    }
};