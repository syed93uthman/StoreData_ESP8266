#ifndef STOREDATA
#define STOREDATA

#include <Arduino.h>
#include <EEPROM.h>


class StoreData
{
private:
    uint16_t data1 = 0;
    uint16_t data2 = 0;
    int size = 20;

public:
    
    void begin(){
        EEPROM.begin(size);
        data1 = getDatat1();
        data2 = getDatat2();
    } 

    void beginClear(){
        EEPROM.begin(size);
        for(int i = 0 ; i < size ; i++){
            EEPROM.write(i,0);
        }
        EEPROM.commit();
    } 



    void addData1(){
        data1++;
        addUint16(0,data1);
    }

    void addData2(){
        data2++;
        addUint16(1,data2);
    }

    uint16_t getDatat1(){
        readUint16(0);
    };

    uint16_t getDatat2(){
        readUint16(1);
    };

private:

    void addUint16(int slot , uint16_t data);
    uint16 readUint16(int slot);

};


#endif
