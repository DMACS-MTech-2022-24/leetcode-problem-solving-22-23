class ParkingSystem {
public:
    int smalllot;
    int mediumlot;
    int biglot;
    
    ParkingSystem(int big, int medium, int small){
        biglot = big;
        mediumlot = medium;
        smalllot = small;
    }

    bool addCar(int carType){
        if(carType == 1){
            biglot--;
            return biglot>=0;
        }

        if(carType == 2){
            mediumlot--;
            return mediumlot>=0;
        }

        if(carType == 3){
            smalllot--;
            return smalllot>=0;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
