/* $name;format="lower"$.h */
#ifndef $name;format="upper"$_H
#define $name;format="upper"$_H

#include "reference.h"

class $name$ : public Reference {
    GDCLASS($name$,Reference);

    int count;

protected:
    static void _bind_methods();

public:
    void add(int value);
    void reset();
    int get_total() const;

    $name$();
};

#endif
