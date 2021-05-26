#pragma once
#include <typeinfo>
#include <iostream>
#include <string>
using namespace std;

namespace ariel
{

template<typename T> class BinaryTree
{
    struct Node
    {
        Node* left_child;
        Node* right_child;
        T data;
        Node(T d)
        {
            right_child=nullptr;
            left_child=nullptr;
            data=d;
        }
        int size()
        {
            return 1;
        }
    };


    class iterator
    {
        private:
        Node* current_node;//the current node that the iterator is on 
        public:
        iterator(Node* n=nullptr)
        {
            current_node=n;
        }
        T* operator->()const //return the adress of the current node
        {
            return &(current_node->data);
        }
        
        T& operator*()//return the data of the current node
        {
            return current_node->data;
        }
        iterator& operator++()
        {
            return *this;
        } 
        bool operator==(const iterator& other) const
        {
            if(current_node==other.current_node)//if the adressers of the two current nodes are the same -> return true
            {
                return true;
            }
            return false;
        }
        bool operator!=(const iterator& other) const
        {
            if(current_node!=other.current_node)
            {
                return true;
            }
            return false;
        }
    };

private:
    Node* root;
public:
    BinaryTree(): root(nullptr)
    {
        
    }
    ~BinaryTree()
    {

    }
    BinaryTree& add_root(T i)
    {
        return *this;
    }
    BinaryTree& add_left(T in_tree, T i)
    {
        return *this;
    }
    BinaryTree& add_right(T in_tree, T i)
    {
        return *this;
    }
    iterator begin_preorder()
    {
        return iterator{root};
    }
    iterator end_preorder()
    {
        return iterator{root};
    }
    iterator begin_postorder()
    {
        return iterator{root};
    }


    iterator end_postorder()
    {
        return iterator{root};
    }
    iterator begin_inorder()
    {
        return iterator{root};
    }
    iterator end_inorder()
    {
        return iterator{root};
    }
    iterator begin()
    {
        return iterator{root};
    }
    iterator end()
    {
        return iterator{root};
    }
    friend std::ostream& operator<<(std::ostream& output,const BinaryTree& t )
    {
        return output;
    }    
};

};