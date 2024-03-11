let val = "Type Color Here";

const buttonElement = document.getElementById("color_button");
const inputBox = document.getElementById("color_textbox");

const colors = [
  "red",
  "blue",
  "green",
  "yellow",
  "purple",
  "orange",
  "black",
  "white",
  "pink",
  "brown",
];

function colorChange(color) {
  if (colors.includes(color)) {
    buttonElement.style.color = color;
  } else {
    alert("Please enter a valid color");
  }
}

function showAlert(message) {
  alert(message);
}

buttonElement.onclick = () => {
  colorChange(inputBox.value);
};
