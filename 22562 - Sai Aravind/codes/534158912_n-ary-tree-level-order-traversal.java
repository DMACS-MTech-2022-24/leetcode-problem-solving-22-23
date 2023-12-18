/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public List<List<Integer>> levelOrder(Node root) {
        
        List<List<Integer>> ret = new LinkedList<>();
        if(root == null)
        {
            return ret;
        }
        List<Integer> lvl = new LinkedList<>();
        LinkedList<Node> trav = new LinkedList<>();
        Node lastOnLvl = root;
        
        while(true)
        {
            trav.addAll(root.children);
            lvl.add(root.val);
            if(trav.isEmpty())
            {
                ret.add(lvl);
                return ret;
            }
            if(root == lastOnLvl)
            {
                ret.add(lvl);
                lvl = new LinkedList<>();
                lastOnLvl = trav.getLast();
            }
            root = trav.remove();
        }
    }
}