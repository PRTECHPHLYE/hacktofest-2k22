#solution of 623. Add One Row to Tree leet code

class Solution:
    def addOneRow(self, root: TreeNode, v: int, d: int) -> TreeNode:
        if d == 1:
            n = TreeNode(v)
            n.left = root
            return n
        q = [root]
        for _ in range(d - 2):
            tmp = []
            for n in q:
                if n.left:
                    tmp.append(n.left)
                if n.right:
                    tmp.append(n.right)
            q = tmp
        for node in q:
            tmp = node.left;
            node.left = TreeNode(v);
            node.left.left = tmp;
            tmp = node.right;
            node.right = TreeNode(v);
            node.right.right = tmp;
        return root
      
    
