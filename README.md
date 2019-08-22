# FAST AES AVR

C bindings for Poettering's AES128 ASM implementation for AVR processors.
The original version takes 2474 cycles to encrypt a single block of data and assembles to a binary of 3098 bytes.

Parameter passing is awkward since I wanted simple assembly code.

Example usage:
```C
#define KEY_MATERIAL {0xc1, 0xe5, 0xec, 0x7b, 0x1a, 0x30, 0xe0, 0xda, 0x98, 0xd3, 0x4f, 0xf0, 0x70, 0x30, 0xfe, 0x65}

struct data{
	  unsigned char data[16];
};

char expanded_key[176];

void function()
{
  struct data key_material = {KEY_MATERIAL};
  expand_key(key_material, expanded_key);
  
  struct data pt;
  struct data ct;
  ...
  ct = encrypt_data(pt, expanded_key);
  pt = decrypt_data(ct, expanded_key);
}
```
