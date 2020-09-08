#include <Arduino.h>
#include "src/StoreData.h"

StoreData DataMngr;

void setup(){

    //DataMngr.beginClear();  //Run only this line to clear number
    Serial.begin(9600);
    DataMngr.begin();
}

void loop(){

    DataMngr.addData1();

    Serial.print("Data 1 = ");
    Serial.println(DataMngr.getDatat1());

    delay(2000);

}