/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1149
 * Date: 2025-01-08
 * Version: 1.0
 */

use std::io;

fn main() {
  let mut input = String::new();

  io::stdin()
    .read_line(&mut input)
    .expect("Fail to read input");

  let mut values: Vec<i32> = input
    .trim()
    .split_whitespace()
    .map(|x| x.parse().expect("Invalid input"))
    .collect();

  let a = values[0];

  let mut n = 0;
  for &val in &values[1..] {
    if val > 0 {
      n = val;
      break;
    }
  }

  let result: i32 = (0..n).map(|i| a + i).sum();

  println!("{}", result);
}

