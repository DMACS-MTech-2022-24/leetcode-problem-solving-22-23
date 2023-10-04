class H2O {
    uint hs=0;
    mutex h,o;
public:
    H2O() {
        o.lock();
    }

    void hydrogen(function<void()> releaseHydrogen) {
        // releaseHydrogen() outputs "H". Do not change or remove this line.
        h.lock();
        releaseHydrogen();
        if(++hs%2==0)
        {
            hs=0;
            o.unlock();
        }
        else
            h.unlock();
    }

    void oxygen(function<void()> releaseOxygen) {
        o.lock();
        // releaseOxygen() outputs "O". Do not change or remove this line.
        releaseOxygen();
        h.unlock();
    }
};