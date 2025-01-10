/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1156
 * Date: 2025-01-10
 * Version: 1.0
 */

fn main() {
  let mut s: f64 = 0.0;
  let mut numerator: f64 = 1.0;
  let mut denominator: f64 = 1.0;

  while numerator <= 39.0 {
    s += numerator / denominator;
    numerator += 2.0;
    denominator *= 2.0;
  }

  println!("{:.2}", s);
}

