#ifndef _BIT_MANIPULATION_H
#define _BIT_MANIPULATION_H

#define set_bit(value,bit) ((value) = (value) | (1<<bit))
#define clear_bit(value,bit) ((value) = (value) &  ~(1<<bit))
#define toggle_bit(value,bit) ((value) = (value) ^ (1<<bit))


#endif
