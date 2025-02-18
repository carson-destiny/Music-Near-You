#ifndef PAYMENT_H
#define PAYMENT_H

class Payment {

private:
	EventOrder eventOrdernumber;
	int paymentId;
	BigDecimal amount;
	Integer authorized_payment;
	Integer authorization__Code;
	Integer routing_number;
	Integer account_number;
	Integer check_number;
	String card_type;
	Date expire_date;
	String payment_type;
	Integer acct_number;
};

#endif
