function handleClick() {
    alert('This button has been clicked');
} 
function doMore() {
    alert('I could process more logic here');
}
function handleClick(callback) {
    alert('This button has been clicked');
    if (callback) {
        callback();
    }
}
