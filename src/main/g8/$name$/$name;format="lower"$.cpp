/* $name;format="lower"$.cpp */

#include "$name;format="lower"$.h"

void $name;format="Camel"$::add(int value) {

    count+=value;
}

void $name;format="Camel"$::reset() {

    count=0;
}

int $name;format="Camel"$::get_total() const {

    return count;
}

void $name;format="Camel"$::_bind_methods() {

    ObjectTypeDB::bind_method("add",&$name;format="Camel"$::add);
    ObjectTypeDB::bind_method("reset",&$name;format="Camel"$::reset);
    ObjectTypeDB::bind_method("get_total",&$name;format="Camel"$::get_total);
}

$name;format="Camel"$::$name;format="Camel"$() {
    count=0;
}
