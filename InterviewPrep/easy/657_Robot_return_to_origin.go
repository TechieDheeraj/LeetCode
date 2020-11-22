/**
 *      file    :  657_Robot_return_to_origin.go
 *      author  :  techiedheeraj
 *      created :  2020 Nov 23 01:39:27
 *      lastMod :  Mon Nov 23 01:39:27 2020
**/

func judgeCircle(moves string) bool {
  x:=0
  y:=0


  for _, j:= range moves {
    if j == 'L' {
      x-=1
    } else if j == 'R' {
        x+=1
    } else if j == 'U' {
        y+=1
    } else if j == 'D' {
        y-=1
    }
  }

    if (x == y) && x == 0 {
      return true
    }
    return false
}
