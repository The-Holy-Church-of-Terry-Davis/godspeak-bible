use std::fs::File;
use std::io::{BufRead, BufReader};

fn main() {
    let file = File::open("src/vocab.txt").unwrap();
    let reader = BufReader::new(file);
    let lines = reader.lines().collect::<Result<Vec<_>, _>>().unwrap();
    let random_index = (rand::random::<f64>() * lines.len() as f64) as usize;
    let random_line = &lines[random_index];
    println!("{}", random_line);
}
