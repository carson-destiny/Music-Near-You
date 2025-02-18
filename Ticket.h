#ifndef TICKET_H
#define TICKET_H

class Ticket {

private:
	std::vector<Show> show;
	Venue venue;
	int ticketID;
	BigDecimal price;
	Integer orderNumber;
	Date date;
	Integer seatNumber;
};

#endif
