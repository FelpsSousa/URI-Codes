/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1158
 * Date: 2025-01-11
 * Version: 1.0
 */

use std::io;

fn main() {
  let mut input = String::new();

  io::stdin()
    .read_line(&mut input)
    .expect("Fail to read input");
  let n: usize = input.trim().parse().expect("Invalid input");

  for _ in 0..n {
    input.clear();

    io::stdin()
      .read_line(&mut input)
      .expect("Fail to read input");
    let values: Vec<i32> = input
      .trim()
      .split_whitespace()
      .map(|x| x.parse().expect("Invalid input"))
      .collect();

    let mut x = values[0];
    let y = values[1];
    let mut sum = 0;

    let mut count = 0;
    while count < y {
      if x % 2 != 0 {
        sum += x;
        count += 1;
      }
      x += 1;
    }

    println!("{}", sum);
  }
}

