void deletenode(NODE *node,int what)
{
     NODE *delnode,*tmp;
     if(node!=NULL){     
     if(what < node->data) {
        deletenode(node->left,what);      
     }
     else if(what > node->data) {
         deletenode(node->right,what);      
     }    
     else {
        if(node->left==NULL){
            temp=node->right;
            node->right=temp->right;
            node->left=temp->left;
        }
        else if(node->right==NULL){
            temp=node->left;
            node->right=temp->right;
            node->left=temp->left;
        }
        else {
            delnode=node->left;
            while(delnode->right!=NULL){
              delnode=node->right;
            }
            node->data=delnode->data;
            deletenode(node->left,delnode->data);
        }
     }
  }
}
