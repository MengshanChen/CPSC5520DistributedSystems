const CODELEN = 3; 
const STATEMAXLEN = 2; 
const CITYMAXLEN = 63; 
typedef string codetype<CODELEN>;
typedef string citytype<CITYMAXLEN>;
typedef string statetype<STATEMAXLEN>;
typedef struct airport* airportlist;

/* a node in the airport list*/
struct airport {
   codetype code;
   citytype name; 
   statetype state; 
   double distance;
   airportlist* next;
};

/*a node storing latitude and longitude*/ 
struct LatLon {
   double lat;
   double lon;
};


/*result of an operation*/ 
union returnAirports switch (int err) {
   case 0:
   	airportlist list; 
   default:
	void; 
};
 
program PLACE_TO_AIRPORT {
	version PLACE_TO_AIRPORT_VERS {
		returnAirports getFiveAirports(LatLon*) = 1;
	} = 1;
} = 0x20000014;

