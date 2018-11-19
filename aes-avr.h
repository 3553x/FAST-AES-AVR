extern "C" {
	//performs key expansion

	//key is the key to expand in binary format
	//expanded points to a 176 byte array to hold the expanded key
	void expand_key(struct data key, void *expanded);

	//transforms an expanded key to a key for decryption
	
	//expanded points to a 176 byte array to hold the expanded key
	void decrypt_key(void *expanded);
	

	struct data encrypt_data(struct data plaintext, void *expanded);
	struct data decrypt_data(struct data ciphertext, void *expanded);

	struct data{
	  unsigned char data[16];
	  };
}
