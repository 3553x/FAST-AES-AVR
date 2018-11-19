extern "C" {

	void expand_key(struct data, void *expanded);
	void decrypt_key(void *expanded);
	struct data encrypt_data(struct data, void *expanded);
	struct data decrypt_data(struct data, void *expanded);

	struct data{
	  unsigned char data[16];
	  };
}
