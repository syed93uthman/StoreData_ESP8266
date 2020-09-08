#include "StoreData.h"

void StoreData::addUint16(int slot , uint16_t data){
    slot *= 2;
    EEPROM.write(slot,highByte(data));
    EEPROM.write(slot+1,lowByte(data));
    EEPROM.commit();
}

uint16 StoreData::readUint16(int slot){
    slot *= 2;
    return word(EEPROM.read(slot),EEPROM.read(slot+1));
}