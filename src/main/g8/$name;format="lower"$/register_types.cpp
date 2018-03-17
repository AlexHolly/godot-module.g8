/* register_types.cpp */

#include "register_types.h"
#include "class_db.h"
#include "$name;format="lower"$.h"

void register_$name;format="lower"$_types() {

        ClassDB::register_class<$name$>();
}

void unregister_$name;format="lower"$_types() {
   //nothing to do here
}
