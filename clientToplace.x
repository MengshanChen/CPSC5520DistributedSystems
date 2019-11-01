const CODELEN = 3; 
const STATEMAXLEN = 2; 
const CITYMAXLEN = 63; 
typedef string codetype<CODELEN>;
typedef string citytype<CITYMAXLEN>;
typedef string statetype<STATEMAXLEN>;
typedef struct place* placelist;

/* a node in the airport list*/
struct place {
   codetype code;
   citytype city; 
   statetype state; 
   double distance;
   placelist next;
};

/*a node storing city name and state*/ 
struct location {
   citytype city; 
   statetype state; 
};

/*result of an operation*/ 
union returnPlaces switch (int err) {
   case 0:
   	placelist list; 
   default:
	void; 
};
 
program CLIENT_TO_PLACE {
	version CLIENT_TO_PLACE_VERS {
		returnPlaces placeServerFunct(location) = 1;
	} = 1;
} = 0x20000014;

