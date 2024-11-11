/* EMP COMPAT */
#define FRIED_WEAPON(CLASSNAME,PICTURE) \
	class ##CLASSNAME##_fried: ##CLASSNAME## \
	{ \
		JLTS_isFried=1; \
		scope=1; \
		magazines[]={}; \
		picture=##PICTURE##; \
		descriptionShort = "The circuits of the weapon are<br/>fried by either ion or EMP blast<br/>You may try repairing it if you have a weapon repair kit"; \
	};

#define FRIED_WEAPON_SECONDARY(CLASSNAME,PICTURE) \
	class ##CLASSNAME##_fried: ##CLASSNAME## \
	{ \
		JLTS_isFried=1; \
		scope=1; \
		magazines[]={}; \
		picture=##PICTURE##; \
		descriptionShort = "The circuits of the weapon are<br/>fried by either ion or EMP blast<br/>You may try repairing it if you have a weapon repair kit"; \
	};