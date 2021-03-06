bool isBST(node* root)  
{  
    static node *prev = NULL;  
      
    // traverse the tree in inorder fashion  
    // and keep track of prev node  
    if (root)  
    {  
        if (!isBST(root->left))  
        return false;  
  
        // Allows only distinct valued nodes  
        if (prev != NULL &&  
            root->data <= prev->data)  
        return false;  
  
        prev = root;  
  
        return isBST(root->right);  
    }  
  
    return true;  
}  