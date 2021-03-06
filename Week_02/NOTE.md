# 学习笔记

## 树

**定义**：一棵树t是一个非空的有限元素的集合，其中一个元素为**根**(root)，其余的元素(如果有的话)组成t的**子树**。

树的另一常用术语为**级**。树根是1级，其孩子(如果有)是2级。一棵树的**高度**或**深度**是树中级的个数，一个**元素的度**是指其孩子的
个数。**一棵树的度**是其元素的度的最大值。

### 二叉树

**定义**：一棵**二叉树**t是有限元素的集合(可以为空)。当二叉树非空时，其中有一个元素称为**根**，余下的元素(如果有的话)背划分成两
棵二叉树，分别称为t的左子树和右子树。

**二叉树和树的区别**：
- 二叉树的每个元素都恰好有两棵子树(其中一个或两个可能为空)。而树的每个元素可有任意数量的子树。
- 在二叉树中，每个元素的子树都是有序的，也就是说，有左子树和右子树之分。而树的子树是无序的。
- 二叉树可以为空，但树不能为空。

**二叉树的特性**：
- 一棵二叉树有n个元素，n>0，它有n-1条边。
- 一棵二叉树的高度为h，h≥0，它最少有h个元素，最多有2<sup>h</sup>-1个元素。
- 一棵二叉树有n个元素，n>0，他的告诉最大为n，最小高度为\[log<sub>2</sub>(n+1)\]。

**二叉树的常用操作**：
- 确定高度。
- 确定元素数目。
- 复制。
- 显示或打印二叉树。
- 确定两颗二叉树是否一样。
- 删除整棵树。

**二叉树的遍历方法**：
- 前序遍历。
- 中序遍历。
- 后序遍历。
- 层序遍历。

[二叉树的具体代码实现](./Source/binaryTree.h)

## 堆

**定义一**：一棵大根树(小根树)是这样一棵树，其中每个节点的值都大于（小于）或等于其子节点(如果有子节点的话)的值。

**定义二**：一个大根堆(小根堆)既是大根树(小根树)也是完全二叉树。