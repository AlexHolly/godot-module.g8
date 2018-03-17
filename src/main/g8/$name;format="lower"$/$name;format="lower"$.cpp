/* $name;format="lower"$.cpp */

#include "$name;format="lower"$.h"

void $name$::add(int value) {

    count+=value;
}

void $name$::reset() {

    count=0;
}

int $name$::get_total() const {

    return count;
}

void $name$::_bind_methods() {

    ClassDB::bind_method("add",&$name$::add);
    ClassDB::bind_method("reset",&$name$::reset);
    ClassDB::bind_method("get_total",&$name$::get_total);
}

$name$::$name$() {
    count=0;
}
