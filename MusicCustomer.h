#ifndef MUSICCUSTOMER_H
#define MUSICCUSTOMER_H

class MusicCustomer {

private:
	std::vector<EventOrder> eventOrder;
	std::vector<Custom_Playlist> custom_Playlist;
	String customerId;
	String address;
	String city;
	String state;
	String zip;
	String phone;
	int eventOrdernumber;
};

#endif
