#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

IRsend irsend;

void setup() {
}

void loop() {
    irsend.sendSony(0x68B92, 20);
    delay(100);
    irsend.sendSony(0x68B92, 20);
    delay(100);
    irsend.sendSony(0x68B92, 20);
    delay(300000);
}
