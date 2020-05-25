/********************************************************
You may assume that the following Node class has already
been defined for you previously:

class Node {
public:
  Node *left, *right;
  Node() { left = right = nullptr; }
  ~Node() {
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
  }
};

You may also assume that iostream has already been included.

Implement the function "int count(Node *n)" below to return
an integer representing the number of nodes in the subtree
of Node n (including Node n itself).

*********************************************************/
#include <iostream>

class Node {
public:
  Node *left, *right;
  Node() { left = right = nullptr; }
  ~Node() {
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
  }
};

int count(Node *n) {

  // Implement count() here.
  int nodeNum = 0;

  //check if ptr is valid
  if (n == nullptr) 
  {
    //std::cout << "Null Node" << std::endl;
	return nodeNum;
  }
  
  //increase count
  else
  {
	  std::cout << "Increase node count +1" << std::endl;
	  nodeNum++;
  }	  
  
  //Recursive count of left and right nodes
  nodeNum += count(n->left);
  nodeNum += count(n->right);
  return nodeNum;
}

int main() {
  Node *n = new Node();
  n->left = new Node();
  n->right = new Node();
  n->right->left = new Node();
  n->right->right = new Node();
  n->right->right->right = new Node();
  n->right->right->left = new Node();
  n->right->left->left = new Node();
  n->right->left->right = new Node();
  
  int result = count (n);
  std::cout << "Total number of nodes: " << result << std::endl;

  // Deleting n is sufficient to delete the entire tree
  // because this will trigger the recursively-defined
  // destructor of the Node class.
  delete n;
  n = nullptr;

  return 0;
}