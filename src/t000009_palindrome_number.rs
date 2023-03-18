pub(crate) struct Solution000009{}

impl Solution000009 { }

impl Solution000009 {
    pub fn is_palindrome(x: i32) -> bool {
        if x < 0 {
            return false;
        } else if x < 10 {
            return true;
        }
        return false;
    }
}