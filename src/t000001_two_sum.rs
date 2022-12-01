use std::collections::HashMap;

pub(crate) struct Solution000001{}

impl Solution000001 {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {

        let mut hashmap: HashMap<i32, i32> = HashMap::new();
        for i in 0..nums.len() {
            match hashmap.get(&nums[i]) {
                Some(&value) => return vec![value, i as i32],
                None => hashmap.insert(target - nums[i], i as i32),
            };
        }
        Vec::new()

    }
}