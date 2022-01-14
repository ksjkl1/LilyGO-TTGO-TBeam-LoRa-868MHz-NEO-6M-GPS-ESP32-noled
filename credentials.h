/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

    // LoRaWAN NwkSKey, network session key
    static const u1_t PROGMEM NWKSKEY[16] = { 0xBC, 0x3D, 0x6C, 0x48, 0x8C, 0x97, 0x45, 0x4E, 0x2F, 0x1C, 0x64, 0x40, 0x2A, 0xB9, 0xE3, 0x92 };  
    
    // LoRaWAN AppSKey, application session key
    static const u1_t PROGMEM APPSKEY[16] = { 0x71, 0xDC, 0xDD, 0x3A, 0xA4, 0x04, 0x69, 0x4B, 0x60, 0x98, 0xFD, 0x6C, 0x15, 0x87, 0x11, 0xB7 };  
    
    // LoRaWAN end-device address (DevAddr)
    static const u4_t DEVADDR = 0x260BC478;  

#endif

#ifdef USE_OTAA

    // This EUI must be in little-endian format, so least-significant-byte
    // first. When copying an EUI from ttnctl output, this means to reverse
    // the bytes. For TTN issued EUIs the last bytes should be 0x00, 0x00,
    // 0x00.  
    static const u1_t PROGMEM APPEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This should also be in little endian format, see above.
    // Note: You do not need to set this field, if unset it will be generated automatically based on the device macaddr}
    // FFFE5C41661C5210
    static u1_t DEVEUI[8]  = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x04, 0x32, 0x52 };

    // This key should be in big endian format (or, since it is not really a
    // number but a block of memory, endianness does not really apply). In
    // practice, a key taken from ttnctl can be copied as-is.
    // The key shown here is the semtech default key.
    static const u1_t PROGMEM APPKEY[16] = { 0x42, 0xA1, 0x74, 0xBB, 0x00, 0xFE, 0x00, 0x1F, 0xEA, 0x99, 0x49, 0x0A, 0xEF, 0x64, 0xC4, 0xA3 }; 

    
#endif
