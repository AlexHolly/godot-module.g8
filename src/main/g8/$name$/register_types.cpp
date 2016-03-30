/* register_types.cpp */

#include "register_types.h"
#include "object_type_db.h"
#include "$name;format="lower"$.h"

void register_$name;format="lower"$_types() {

        ObjectTypeDB::register_type<$name;format="Camel"$>();
}

void unregister_$name;format="lower"$_types() {
   //nothing to do here
}
