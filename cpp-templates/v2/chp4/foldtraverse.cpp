// define binary tree structure and traverse helpers:
struct Node {
  int value;
  Node* left;
  Node* right;
  explicit Node(int i=0) : value(i), left(nullptr), right(nullptr) {
  }
  //...
};

// 指向数据成员的指针
auto left = &Node::left;
auto right = &Node::right;

// traverse tree, using fold expression:
template<typename T, typename... TP>
Node* traverse (T np, TP... paths) {
  return (np ->* ... ->* paths);      // np ->* paths1 ->* paths2 ...
}

int main()
{
    // 构造树
  // init binary tree structure:
  Node* root = new Node{0};
  root->left = new Node{1};
  root->left->right = new Node{2};
  //...
  // traverse binary tree:
  Node* node = traverse(root, left, right);
  //...
  delete root->left->right;
  delete root->left;
  delete root;
}
