#include <iostream>
#include "database.h"
#include <curl/curl.h>

using namespace std;

Database db = Database();

void doGet();

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main()
{
	cout << "version v.0.0.2" << endl;
	cout << "start app" << endl;

	db.Add(10);
	db.Add(20);
	db.Add(30);
	db.Add(99);
	db.Add(55);

	db.Add(77);
	db.Add(1);
	db.Add(2);
	db.Add(3);
	db.Add(4);

	db.PrintAll();


	doGet();

	return 0;
}

void doGet()
{
  	CURL *curl;
  	CURLcode res;
  	std::string readBuffer;
	
	curl = curl_easy_init();
  	
  	if(curl) 
  	{
    	curl_easy_setopt(curl, CURLOPT_URL, "https://api.binance.com/api/v3/ticker/price?symbol=BTCUSDT");
    	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
    	res = curl_easy_perform(curl);
    	curl_easy_cleanup(curl);

    	std::cout << readBuffer << std::endl;
  	}
}