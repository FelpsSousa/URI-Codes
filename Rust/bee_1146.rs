/*  
 * Author: Felipe Luis Rodrigues Sousa (FelipeFelpsCode - Platform URI/Beecrowd)
 * GitHub: https://github.com/FelpsSousa/
 * Repository: https://github.com/FelpsSousa/URI-Codes
 * License: MIT
 * Description: BEE 1146
 * Date: 2025-01-06
 * Version: 1.3
 */

use std::io;

fn main() {
  let mut input = String::new();

  loop {
    input.clear();

    io::stdin()
      .read_line(&mut input)
      .expect("Fail to read");

    let x: i32 = match input.trim().parse() {
      Ok(num) => num,
      Err(_) => continue,
    };

    if x == 0 {
      break;
    }

    let sequence: Vec<String> = (1..=x).map(|n| n.to_string()).collect();

    println!("{}", sequence.join(" "));
  }
}
