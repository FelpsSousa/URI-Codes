/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1155
 * Date: 2025-01-09
 * Version: 1.0
 */

fn main() {
  let mut s: f64 = 0.0;

  for i in 1..=100 {
    s += 1.0 / i as f64;
  }

  println!("{:.2}", s);
}
