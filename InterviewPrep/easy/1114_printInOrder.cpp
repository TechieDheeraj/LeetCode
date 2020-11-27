/**
 *      file    :  1114_printInOrder.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Nov 27 23:39:12
 *      lastMod :  Fri Nov 27 23:39:12 2020
 **/

class Foo {
public:
    vector<int>c;
    Foo() {
      c.resize(3);
      fill(c.begin(), c.end(), 0);
    }

    void first(function<void()> printFirst) {

        // printFirst() outputs "first". Do not change or remove this line.
        //cout<< " 1 Hello " << endl;
        printFirst();
        c[0] = 1;
    }

    void second(function<void()> printSecond) {

        // printSecond() outputs "second". Do not change or remove this line.
      while(true) {
        //cout<< " 2 Hello " << endl;
        if (c[0] == 1 && c[2] == 0) {
          printSecond();
          c[1] = 1;
          break;
        }
      }
    }

    void third(function<void()> printThird) {

        // printThird() outputs "third". Do not change or remove this line.
      while(true) {
        //cout<< " 3 Hello " << endl;
        if (c[0] == 1 && c[1] == 1) {
          printThird();
          c[2] = 1;
          break;
        }
      }
    }
};
