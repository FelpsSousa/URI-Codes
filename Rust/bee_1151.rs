/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1151
 * Date: 2025-01-07
 * Version: 1.0
 */

use std::io;

fn main() {
  let mut input = String::new();

  io::stdin()
    .read_line(&mut input)
    .expect("Fail to read");
  let n: usize = input.trim().parse().expect("Invalid input");

  if n == 0 || n >= 46 {
    return;
  }

  let mut fibonacci = Vec::new();
  fibonacci.push(0); 
  if n > 1 {
    fibonacci.push(1);
  }

  for i in 2..n {
    let next = fibonacci[i - 1] + fibonacci[i - 2];
    fibonacci.push(next);
  }

  let output = fibonacci.iter().map(|x| x.to_string()).collect::<Vec<_>>().join(" ");
  println!("{}", output);
}
