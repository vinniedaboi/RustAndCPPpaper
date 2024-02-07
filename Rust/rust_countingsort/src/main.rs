/// In place counting sort for collections of u32
/// O(n + maxval) in time, where maxval is the biggest value an input can possibly take
/// O(maxval) in memory
/// u32 is chosen arbitrarly, a counting sort probably should'nt be used on data that requires bigger types.

pub fn counting_sort(arr: &mut [u32], maxval: usize) {
    let mut occurences: Vec<usize> = vec![0; maxval + 1];

    for &data in arr.iter() {
        occurences[data as usize] += 1;
    }

    let mut i = 0;
    for (data, &number) in occurences.iter().enumerate() {
        for _ in 0..number {
            arr[i] = data as u32;
            i += 1;
        }
    }
}
fn main(){
    let mut ve1: [u32;5] = [120,40,32,10,5];
    counting_sort(&mut ve1, 120);
    println!("{:?}",ve1)
}
// // graphs needed, Graph comparing C++ and Rust Compile Time, Graph for execution time, Graph for cycles used, Graph for memory used, Graph of LOC, Image for code etc.