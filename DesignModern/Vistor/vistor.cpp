struct Modem
{
	void dial(string pno);
	void handUp();
	void send(char c);
	char recv();
	void accept(ModemVistor v);

};