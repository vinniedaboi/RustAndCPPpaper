use std::vec;

pub fn bubble_sort<T: Ord>(arr: &mut [T]) {
    if arr.is_empty() {
        return;
    }
    let mut sorted = false;
    let mut n = arr.len();
    while !sorted {
        sorted = true;
        for i in 0..n - 1 {
            if arr[i] > arr[i + 1] {
                arr.swap(i, i + 1);
                sorted = false;
            }
        }
        n -= 1;
    }
}


fn main() {
    let ve1 = vec![120,40,32,10,5];
    let mut cloned = ve1.clone();
    bubble_sort(&mut cloned);
    println!("{:?}", cloned)
}
