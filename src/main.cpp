#include "node.hpp"
#include "tree.hpp"
#include <iostream>

int main()
{
        Tree t;
        t.add(99);        
        t.add(4);
        t.add(5);
        t.add(188);
        t.add(90);
        t.print_postorder();
        return 0;
}
