#include <cassert>
#include <iostream>

int main() {

    // Int

    assert (9+8==17);
    assert (5*2==10);
    assert (8*8!=30);
    assert (10-6==4);
    assert (12/3==4);

    // Booleano

    assert (true);
    assert (true and true);
    assert (false == not true);
    assert (false != true);

    // Double

    assert (5.5 + 5.5 == 11);
    assert (10.2 + 10.2 == 20.4);
    assert (9.9 + 0.1 == 10);
    assert (1/3 != 0.333333333);

    // Unsigned

    assert (10u + 10u == 20u);
    assert (12u - 10u == 2u);
    assert (6u * 4u == 24u);

    // Float

    assert (3.0f + 4.5f == 7.5f);
    assert (10.0f - 3.0f == 7.0f);
    assert (7.0f * 3.0f == 21.0f);

    // String

    assert ("string" != "hola mundo");
    assert ("hola" == "hola");
    assert ("Mayuscula" != "mayuscula");

    // Char

    assert ('A' == 65);
    assert ('A' + 'B' == 131);
    assert ('A' + 1 == 'B');
    assert ('B' > 'A');
}