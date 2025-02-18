#ifndef SHOW_H
#define SHOW_H

class Show {

private:
	Ticket ticket;
	std::vector<EventOrder> eventOrder;
	String showName;
	Date showDate;
	Time showTime;
	String venue;
	String description;
};

#endif
