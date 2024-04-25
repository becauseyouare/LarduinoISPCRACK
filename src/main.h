//
// Created by John Harrison on 8/11/23.
//

#ifndef LARDUINOISPHACK_MAIN_H
#define LARDUINOISPHACK_MAIN_H
int avrisp();
uint8_t write_flash_pages(int length);
uint8_t write_eeprom_chunk(int start, int length);
#endif //LARDUINOISPHACK_MAIN_H
