* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}


body {
    font-family: "Segoe UI", Arial, sans-serif;
    overflow: hidden;
}


/* ================= COMMON PAGE ================= */

.page {

    width: 100vw;
    height: 100vh;

    position: fixed;
    top: 0;
    left: 0;

    display: flex;

    align-items: center;
    justify-content: center;
}


.hidden {
    display: none !important;
}


/* ================= REGISTER PAGE ================= */

.register-page {

    background:
        linear-gradient(
            135deg,
            #ff7a00,
            #ff9f1c,
            #ff4d00
        );

    overflow: hidden;
}


/* Background circles */

.register-page::before {

    content: "";

    position: absolute;

    width: 600px;
    height: 600px;

    border-radius: 50%;

    background: #ffd166;

    opacity: 0.35;

    top: -300px;
    left: -200px;
}


.register-page::after {

    content: "";

    position: absolute;

    width: 500px;
    height: 500px;

    border-radius: 50%;

    background: #ff3d00;

    opacity: 0.25;

    bottom: -250px;
    right: -150px;
}


/* ================= TRAIN SKETCH ================= */

.train-sketch {

    position: absolute;

    right: -80px;
    bottom: -70px;

    font-size: 500px;

    opacity: 0.16;

    filter:
        grayscale(1)
        contrast(1.5);

    transform: rotate(-5deg);

    z-index: 1;

    user-select: none;
}


/* ================= REGISTER CONTENT ================= */

.register-container {

    position: relative;

    z-index: 5;

    width: 480px;

    text-align: center;

    padding: 30px;
}


/* ================= LOGO ================= */

.logo {

    font-size: 32px;

    font-weight: 900;

    color: white;

    margin-bottom: 35px;

    text-shadow:
        0 4px 15px rgba(0,0,0,0.2);
}


.logo span {

    color: #ffe066;
}


/* ================= HEADING ================= */

h1 {

    color: white;

    font-size: clamp(42px, 5vw, 68px);

    font-weight: 900;

    line-height: 1.05;

    margin-bottom: 15px;

    text-shadow:
        0 5px 20px rgba(0,0,0,0.2);
}


.subtitle {

    color: white;

    font-size: 19px;

    margin-bottom: 35px;

    opacity: 0.9;
}


/* ================= INPUT ================= */

.input-box {

    width: 100%;

    height: 68px;

    background: white;

    border-radius: 18px;

    display: flex;

    align-items: center;

    padding: 0 20px;

    gap: 14px;

    margin-bottom: 16px;

    box-shadow:
        0 12px 30px rgba(0,0,0,0.18);

    transition: 0.25s;
}


.input-box:focus-within {

    transform: translateY(-2px);

    box-shadow:
        0 15px 35px rgba(0,0,0,0.25);
}


.input-box span {

    font-size: 23px;
}


.input-box input {

    width: 100%;

    border: none;

    outline: none;

    font-size: 19px;

    background: transparent;

    color: #222;
}


.input-box input::placeholder {

    color: #8b8b8b;
}


/* ================= BUTTON ================= */

.main-button {

    width: 100%;

    height: 68px;

    border: none;

    border-radius: 18px;

    margin-top: 5px;

    background:
        linear-gradient(
            90deg,
            #ff006e,
            #8338ec
        );

    color: white;

    font-size: 20px;

    font-weight: 900;

    letter-spacing: 1.5px;

    cursor: pointer;

    box-shadow:
        0 12px 30px rgba(131,56,236,0.35);

    transition: 0.25s;
}


.main-button:hover {

    transform: translateY(-4px);

    box-shadow:
        0 18px 35px rgba(131,56,236,0.45);
}


/* ================= LOGIN OPTION ================= */

.login-option {

    margin-top: 25px;

    color: white;

    font-size: 17px;
}


.login-option button {

    background: none;

    border: none;

    color: #fff3a3;

    font-size: 17px;

    font-weight: 900;

    text-decoration: underline;

    cursor: pointer;
}


/* ================================================= */
/* SUCCESS PAGE */
/* ================================================= */

.success-page {

    background:
        linear-gradient(
            135deg,
            #00c853,
            #00bfa5,
            #0072ff
        );
}


.success-container {

    width: min(90%, 700px);

    text-align: center;

    color: white;

    position: relative;

    z-index: 5;
}


.success-icon {

    width: 130px;

    height: 130px;

    margin: 0 auto 30px;

    border-radius: 50%;

    background: white;

    color: #00b95c;

    display: flex;

    align-items: center;

    justify-content: center;

    font-size: 75px;

    font-weight: 900;

    box-shadow:
        0 20px 50px rgba(0,0,0,0.2);

    animation: successPop 0.5s ease;
}


.success-container h1 {

    font-size: clamp(40px, 5vw, 65px);

}


.success-container p {

    font-size: 20px;

    margin: 20px 0 35px;
}


@keyframes successPop {

    0% {
        transform: scale(0);
    }

    70% {
        transform: scale(1.15);
    }

    100% {
        transform: scale(1);
    }
}


/* ================================================= */
/* LOGIN PAGE */
/* ================================================= */

.login-page {

    background:
        linear-gradient(
            135deg,
            #4361ee,
            #7209b7,
            #f72585
        );
}


.login-container {

    width: 480px;

    max-width: 90%;

    text-align: center;

    position: relative;

    z-index: 5;
}


/* ================= MOBILE ================= */

@media (max-width: 600px) {

    .register-container {

        width: 92%;

        padding: 20px;
    }


    .logo {

        font-size: 25px;

        margin-bottom: 25px;
    }


    h1 {

        font-size: 42px;
    }


    .subtitle {

        font-size: 16px;
    }


    .input-box {

        height: 60px;
    }


    .main-button {

        height: 60px;
    }


    .train-sketch {

        font-size: 300px;

        right: -80px;
        bottom: 0;
    }

}
