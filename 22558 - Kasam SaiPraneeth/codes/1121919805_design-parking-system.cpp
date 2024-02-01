class ParkingSystem {
public:
    int b;//big
    int s;//small
    int m;//medium
    ParkingSystem(int big, int medium, int small) {
        this->b=big;
        this->m=medium;
        this->s=small;
    }
    
    bool addCar(int carType) {
        if(carType == 1)
        {
            b--;
            return b>=0;
        }
        else if(carType == 2)
        {
            m--;
            return m>=0;
        }
        else if(carType == 3)
        {
             s--;
            return s>=0;
        }
        return false;
}
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
