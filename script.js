document.addEventListener('DOMContentLoaded', function() {
    const button = document.getElementById('upload-button');

    if (!button) {
        return;
    }

    button.addEventListener('click', function() {
        console.log('Upload Books clicked');
    });
});
