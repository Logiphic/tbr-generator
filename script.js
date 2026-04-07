document.addEventListener('DOMContentLoaded', function() {
    const input = document.getElementById('library-file');
    const chooser = document.querySelector('.choose-file');

    if (!input || !chooser) {
        return;
    }

    input.addEventListener('change', function() {
        const fileName = input.files && input.files[0] ? input.files[0].name : 'Choose file';
        chooser.textContent = fileName;
    });
});
