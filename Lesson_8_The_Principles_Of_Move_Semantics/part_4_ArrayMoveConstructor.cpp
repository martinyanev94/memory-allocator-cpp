Array(Array&& other) noexcept : data(other.data), length(other.length) {
    other.data = nullptr;
    other.length = 0;
}
