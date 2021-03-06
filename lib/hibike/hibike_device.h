#ifndef INC_HIBIKE_DEVICE
#define INC_HIBIKE_DEVICE

#include "hibike_message.h"
#include "devices.h"
#include <stdint.h>
// For size_t
#include <string.h>
#define LED_PIN 13

typedef enum {
  RESTING,
  FIRST_BEAT,
  BREAK,
  SECOND_BEAT
} led_state;

extern hibike_uid_t UID;
void hibike_setup();
void hibike_loop();
void toggleLED();

extern uint32_t device_update(uint8_t param, uint32_t value); 

extern uint32_t device_status(uint8_t param); 

extern uint8_t data_update(uint8_t* data_update_buf, size_t buf_len);

#endif  // INC_HIBIKE_DEVICE