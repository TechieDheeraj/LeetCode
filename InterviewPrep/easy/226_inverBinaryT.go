/**
 *      file    :  226_inverBinaryT.go
 *      author  :  techiedheeraj
 *      created :  2020 Nov 28 01:00:08
 *      lastMod :  Sat Nov 28 01:00:08 2020
**/

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func invertTree(root *TreeNode) *TreeNode {

  if (root == nil) {
    return nil
  }

  var right *TreeNode = invertTree(root.Right)
  var left *TreeNode = invertTree(root.Left)

  root.Left = right
  root.Right = left

  return root
}
