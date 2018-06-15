#include "node.hpp"
#include "tree.hpp"
#include <iostream>
#include <string>
#include <iomanip>

Tree::Tree() : root(NULL) {} 

Node* Tree::newNode(int data)
{
        Node* temp = new Node;
        temp -> value = data;
        temp -> left = NULL;
        temp -> right = NULL;
        return temp;
}

Node* Tree::check(int data, Node* temp, std::string dir)
{
        if ( temp == NULL ) {
                temp = newNode(data);
                if ( dir == "left" ) {
                        root -> left = temp;
                } else {
                        root -> right = temp;
                }
                return temp;
        }
        if ( data < temp -> value ) {
                dir="left";
                check(data, temp -> left, dir);
        } else {
                dir="right";
                check(data, temp -> right, dir);
        }
}

void Tree::add(int data)
{
        Node* temp = new Node;
        temp -> value = data;
        temp -> left = NULL;
        temp -> right = NULL;
          if ( root == NULL ) {
                root = temp;
        } else {
                temp = root;
                std::string dir = "";
                check(data,temp,dir);
        }                        
}


void Tree::postorder(Node* p, int indent=0)
{
        if(p != NULL) {
                if(p->left) postorder(p->left, indent+4);
                if(p->right) postorder(p->right, indent+4);
                if (indent) {
                        std::cout << std::setw(indent) << ' ';
                }
                std::cout<< p->value << "\n ";
        }
}       

void Tree::print_postorder()
{
     postorder(root);
}
