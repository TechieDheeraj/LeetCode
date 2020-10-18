/**
 *      file    :  1603_parkingSys.cpp
 *      author  :  techiedheeraj
 *      created :  2020 Oct 18 11:44:43 PM
 *      lastMod :  Sun 18 Oct 2020 11:44:43 PM IST
**/

class ParkingSystem {
public:
    int bigCars;
    int medCars;
    int smallCars;
  
    ParkingSystem(int big, int medium, int small) {
      this->bigCars = big;
      this->medCars = medium;
      this->smallCars = small;
    }
    
    bool addCar(int carType) {
      if (carType == 1) 
        return (this->bigCars-- > 0);
      else if (carType == 2)
        return (this->medCars-- > 0);
      else if (carType == 3)
        return (this->smallCars-- > 0);
      else
        return false;
    }
};
