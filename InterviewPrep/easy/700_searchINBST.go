/**
 *      file    :  700_searchINBST.go
 *      author  :  techiedheeraj
 *      created :  2020 Nov 18 23:56:15
 *      lastMod :  Wed Nov 18 23:56:15 2020
**/

package main

import (
  "fmt"
)

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func searchBST(root *TreeNode, val int) *TreeNode {

  if (root == nil) {
    return nil
  }
  if (root.Val == val) {
    return root
  }

  if (val < root.Val) {
    return searchBST(root.Left, val)
  }
  if (val > root.Val) {
    return searchBST(root.Right, val)
  }

  return nil
}
