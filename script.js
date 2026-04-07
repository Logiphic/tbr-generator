document.addEventListener('DOMContentLoaded', function() {
    const body = document.body;
    const homeScreen = document.querySelector('[data-page="home"]');
    const uploadScreen = document.querySelector('[data-page="upload"]');
    const goToUploadButton = document.getElementById('go-to-upload');
    const backToHomeLink = document.getElementById('back-to-home');
    const input = document.getElementById('library-file');
    const chooser = document.querySelector('.choose-file');

    if (!homeScreen || !uploadScreen || !goToUploadButton || !backToHomeLink || !input || !chooser) {
        return;
    }

    function showPage(pageName) {
        const showHome = pageName === 'home';
        homeScreen.classList.toggle('is-active', showHome);
        uploadScreen.classList.toggle('is-active', !showHome);
        body.classList.toggle('page-home', showHome);
        body.classList.toggle('page-upload', !showHome);
    }

    goToUploadButton.addEventListener('click', function() {
        showPage('upload');
    });

    backToHomeLink.addEventListener('click', function(event) {
        event.preventDefault();
        showPage('home');
    });

    input.addEventListener('change', function() {
        const fileName = input.files && input.files[0] ? input.files[0].name : 'Choose file';
        chooser.textContent = fileName;
    });
});
