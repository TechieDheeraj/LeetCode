/**
 *      file    :  1670_DesignFrontMidBackQ.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 29 18:38:45
 *      lastMod :  Sun Nov 29 18:38:45 2020
 **/

class FrontMiddleBackQueue {
public:
    vector<int>q;
  /*
    void display() {
      for (auto &i: q)
        cout << i << ", ";
      cout << "\n";
    }
    */
    FrontMiddleBackQueue() {

    }

    void pushFront(int val) {
      q.insert(q.begin(), val);
      //cout << "hello" << endl;
      //display();
    }

    void pushMiddle(int val) {
      //cout << "hello one " << endl;
      int size = q.size();
      int m = size/2;
//      if ((size % 2) != 0)
 //       --m;
      q.insert(q.begin()+m, val);
      //display();
    }

    void pushBack(int val) {
      //cout << "hello two " << endl;
      q.push_back(val);
     // display();
    }

    int popFront() {
      //cout << "hello 3 " << endl;
      int v = q.size() == 0 ? -1 : q[0];
      if (v > 0)
        q.erase(q.begin());
     // display();
      return v;
    }

    int popMiddle() {
      //cout << "hello 4 " << endl;
      if (q.size() == 0)
        return -1;
      int m = q.size()/2;
      if ((q.size() % 2) == 0)
        --m;
      int v = q[m];
      q.erase(q.begin()+m);
     // display();
      return v;
    }

    int popBack() {
     // cout << "hello 5 " << endl;
      int v =q.size() == 0 ? -1 : q[q.size()-1];
      if (v > 0)
        q.pop_back();
     // display();
      return v;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */
