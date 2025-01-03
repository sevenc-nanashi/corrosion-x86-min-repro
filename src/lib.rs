#[no_mangle]
pub extern "C" fn rust_add(a: i32, b: i32) -> i32 {
    a + b
}

static VALUE: i32 = const_random::const_random!(i32);
#[no_mangle]
pub extern "C" fn rust_random() -> i32 {
    VALUE
}
