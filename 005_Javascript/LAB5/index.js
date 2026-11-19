const textBox = document.querySelector('#text');
const startClock = document.querySelector('#clock');
const currentTime = document.querySelector('.currentTime');
const masked = document.querySelector('#masked');
const main = document.querySelector('#main');
let intervalId;

textBox.addEventListener('mousedown', function (event) {
  if (event.button === 0) {
    alert('Primary key is pressed');
  } else if (event.button === 1) {
    alert('Wheel key is pressed');
  } else {
    alert('Secondary key is pressed');
  }
});

textBox.addEventListener('keydown', function (event) {
  alert(event.keyCode);
  event.stopPropagation();
  if (
    (event.keyCode >= 48 && event.keyCode <= 57) ||
    (event.keyCode >= 96 && event.keyCode <= 105)
  ) {
    event.preventDefault();
  }
}); //top row then numpad

startClock.addEventListener('click', function () {
  alert('Clock started');
  clearInterval(intervalId);
  currentTime.textContent = new Date().toLocaleTimeString();
  intervalId = setInterval(function () {
    currentTime.textContent = new Date().toLocaleTimeString();
  }, 1000);
});

document.addEventListener('keydown', function (event) {
  if (event.keyCode === 87) {
    clearInterval(intervalId);
    alert('Clock stopped');
  }
});

masked.addEventListener('keydown', function (event) {
  event.stopPropagation(); // so typing w here does not stop the clock
});
masked.addEventListener('input', function () {
  masked.value = masked.value.replace(/[^a-zA-Z]/g, '');
});

const images = [
  './imgs/detail-3d-artwork-naruto-mobile-4k-pc0kyp2mugjzseba.webp',
  './imgs/naruto-aesthetic-phone-zmg0bkjrewoyhmbw.webp',
  './imgs/naruto-pictures-cx7y4oe4gq24oi03.webp',
  './imgs/naruto-uzumaki-is-saluting-someone.jpg_q=50&fit=contain&w=1200&h=600&dpr=1.webp',
];
let index = 0;

document.querySelector('#next').addEventListener('click', function () {
  index++;
  if (index === images.length) index = 0;
  main.src = images[index];
});

document.querySelector('#prev').addEventListener('click', function () {
  index--;
  if (index < 0) index = images.length - 1;
  main.src = images[index];
});


const gallery = document.querySelector('#gallery');

gallery.addEventListener('mouseover', function (event) {
  if (event.target.tagName === 'IMG') {
    event.target.style.opacity = 0.3;
  }
});

gallery.addEventListener('mouseout', function (event) {
  if (event.target.tagName === 'IMG') {
    event.target.style.opacity = 1;
  }
});
document.addEventListener('contextmenu', function (event) {
  event.preventDefault();
});
