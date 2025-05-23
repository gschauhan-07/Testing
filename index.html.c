<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8" />
<meta name="viewport" content="width=device-width, initial-scale=1" />
<title>GS Digital Solutions</title>
<style>
  body {
    background: #121212;
    color: #eee;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    height: 100vh;
    margin: 0;
    overflow: hidden;
  }
  h1 {
    font-size: 3em;
    margin-bottom: 0.2em;
    opacity: 0;
    animation: fadeInSlide 1s forwards;
  }
  p {
    font-size: 1.5em;
    margin: 0.5em 0;
    opacity: 0;
    animation: fadeInSlide 1s forwards;
  }
  p:nth-child(3) {
    animation-delay: 1s;
  }
  p:nth-child(4) {
    animation-delay: 2s;
  }
  @keyframes fadeInSlide {
    to {
      opacity: 1;
      transform: translateY(0);
    }
    from {
      opacity: 0;
      transform: translateY(20px);
    }
  }
  .contact {
    margin-top: 1em;
    font-weight: bold;
    color: #4caf50;
  }
</style>
</head>
<body>
  <h1>GS Digital Solutions</h1>
  <p>Apki digital zaruratein, ek jagah.</p>
  <p>Services:</p>
  <p>- Restaurant Menus ko QR me convert karna</p>
  <p>- Purchase Bills upload karna</p>
  <p class="contact">Contact: +91 98765 43210</p>
</body>
</html>