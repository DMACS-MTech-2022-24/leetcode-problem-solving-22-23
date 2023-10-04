class ZeroEvenOdd {
private:
    mutex m0,mo,me;
    int n;

public:
    ZeroEvenOdd(int n) {
        mo.lock();
        me.lock();
        this->n = n;
    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        bool odd=false;
        for(int i=0;i<n;++i)
        {
            m0.lock();
            printNumber(0);
            odd=not odd;
            if(odd)
                mo.unlock();
            else
                me.unlock();
        }
    }

    void even(function<void(int)> printNumber) {
        for(int i=2;i<=n;i+=2)
        {
            me.lock();
            printNumber(i);
            m0.unlock();
        }
    }

    void odd(function<void(int)> printNumber) {
        for(int i=1;i<=n;i+=2)
        {
            mo.lock();
            printNumber(i);
            m0.unlock();
        }
    }
};