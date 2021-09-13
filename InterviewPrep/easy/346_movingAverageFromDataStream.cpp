/**
 *      file    :  346_movingAverageFromDataStream.cpp 
 *      author  :  techiedheeraj
 *      created :  2021 Sep 13 12:12:28 
 *      lastMod :  Mon Sep 13 12:12:28 2021 
 **/

class MovingAverage {
public:
    /** Initialize your data structure here. */
    queue<int>q;
    int size;
    int sum = 0;
    MovingAverage(int s) : size(s){
    }

    double next(int val) {
      if (q.size() == size) {
        int front = q.front();
        sum-=front;
        q.pop();
      }
      sum+=val;
      q.push(val);
      return (double)sum/q.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
