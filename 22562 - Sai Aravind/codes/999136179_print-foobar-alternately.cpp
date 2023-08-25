class FooBar {
private:
    mutex foom,barm;
    int n;

public:
    FooBar(int n) {
        foom.lock();
        this->n = n;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            barm.lock();
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
            foom.unlock();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            foom.lock();
        	// printBar() outputs "bar". Do not change or remove this line.
        	printBar();
            barm.unlock();
        }
    }
};