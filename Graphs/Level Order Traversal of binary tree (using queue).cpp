/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        queue<Node *> q;
        //using queue to run bfs in the same if we had a graph stored in adjacency list
        q.push(root);
        map<int,int> mp;
        while(!q.empty()){
            if(mp[q.front()->data]==0){
                cout<<q.front()->data<<" ";
                mp[q.front()->data]=1;
            }
            if(q.front()->left!=NULL)
               q.push(q.front()->left);
            if(q.front()->right!=NULL)
               q.push(q.front()->right);
               
            q.pop();      
        }
    }
