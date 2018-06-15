#include "node.hpp"
#include <string>

class Tree
{
        public:
                Tree();
                Node* newNode(int);
                void add(int);
                //remove();
                Node* check(int, Node*, std::string);
                void postorder(Node*, int);
                void print_postorder();
                
        private:
                Node* root;
                //Node* left;
                //Node* right;
};
