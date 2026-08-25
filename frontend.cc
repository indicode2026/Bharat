* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: "Segoe UI", Arial, sans-serif;
    overflow: hidden;
}

.app {
    width: 100%;
    height: 100vh;
}

.screen {
    width: 100%;
    height: 100vh;

    position: relative;

    display: flex;
    align-items: center;
    justify-content: center;

    overflow: hidden;
}

.hidden {
    display: none !important;
}


/* ================= REGISTER PAGE ================= */

.register-page {

    background:
        linear-gradient(
            135deg,
            #ff4ecd 0%,
            #7657ff 45%,
            #20bfff 100%
        );
}


/* Colourful circles */

.register-page::before {

    content: "";

    position: absolute;

    width: 550px;
    height: 550px;

    border-radius: 50%;

    background: #ffde59;

    opacity: .35;

    top: -250px;
    left: -150px;
}

.register-page::after {

    content: "";

    position: absolute;

    width: 450px;
    height: 450px;

    border-radius: 50%;

    background: #00ffc8;

    opacity: .25;

    bottom: -200px;
    right: -100px;
}


/* ================= TRAIN ================= */

.background-train {

    position: absolute;

    z-index: 1;

    font-size: min(48vw, 600px);

    opacity: .20;

    right: -5%;

    bottom: -5%;

    transform: rotate(-4deg);

    filter:
        drop-shadow(
            0 20px 20px rgba(0,0,0,.25)
        );

    user-select: none;
}

.second-train {
    opacity: .14;
    left: -8%;
    right: auto;
    transform: scaleX(-1) rotate(-4deg);
}


/* ================= CONTENT ================= */

.content {

    position: relative;

    z-index: 5;

    width: min(90%, 650px);

    text-align: center;

    padding: 40px;

    color: white;
}


/* ================= LOGO ================= */

.logo {

    font-size: clamp(24px, 3vw, 38px);

    font-weight: 800;

    margin-bottom: 25px;

    text-shadow:
        0 3px 15px rgba(0,0,0,.18);
}

.logo b {
    color: #ffe75e;
}


/* ================= HEADINGS ================= */

h1 {

    font-size: clamp(42px, 6vw, 78px);

    line-height: 1;

    font-weight: 900;

    letter-spacing: -2px;

    margin-bottom: 15px;

    text-shadow:
        0 5px 20px rgba(0,0,0,.18);
}

.tagline {

    font-size: clamp(17px, 2vw, 23px);

    margin-bottom: 35px;

    opacity: .9;
}


/* ================= FORM ================= */

.form {

    width: min(100%, 430px);

    margin: auto;
}

.input {

    width: 100%;

    height: 65px;

    display: flex;

    align-items: center;

    gap: 14px;

    background: rgba(255,255,255,.96);

    border-radius: 17px;

    padding: 0 20px;

    margin-bottom: 15px;

    box-shadow:
        0 12px 35px rgba(0,0,0,.15);
}

.input span {

    font-size: 23px;
}

.input input {

    width: 100%;

    border: none;

    outline: none;

    background: transparent;

    font-size: 19px;

    color: #252342;
}

.input input::placeholder {

    color: #8a89a0;
}


/* ================= BUTTON ================= */

.main-btn {

    width: 100%;

    height: 65px;

    border: none;

    border-radius: 17px;

    color: white;

    font-size: 19px;

    font-weight: 900;

    letter-spacing: 1.5px;

    cursor: pointer;

    background:
        linear-gradient(
            90deg,
            #ff315c,
            #ff7a3d,
            #ffcf33
        );

    box-shadow:
        0 15px 35px rgba(255,49,92,.35);

    transition: .25s;
}

.main-btn:hover {

    transform: translateY(-4px);

    box-shadow:
        0 20px 40px rgba(255,49,92,.45);
}


/* ================= BOTTOM LOGIN ================= */

.bottom-text {

    margin-top: 25px;

    font-size: 16px;

    color: white;
}

.bottom-text button {

    border: none;

    background: none;

    color: #fff36b;

    font-size: inherit;

    font-weight: 900;

    cursor: pointer;

    text-decoration: underline;
}


/* ================= LOGIN PAGE ================= */

.login-page {

    background:
        linear-gradient(
            135deg,
            #00c6ff,
            #0072ff,
            #7b2cff
        );
}

.login-page::before {

    content: "";

    position: absolute;

    width: 600px;
    height: 600px;

    border-radius: 50%;

    background: #ff3cac;

    opacity: .25;

    top: -250px;
    right: -150px;
}


/* ================= SUCCESS PAGE ================= */

.success-page {

    background:
        linear-gradient(
            135deg,
            #00c853,
            #00c6ff,
            #6c4cff
        );
}

.success-content {

    position: relative;

    z-index: 5;

    text-align: center;

    color: white;

    width: min(90%, 700px);

    padding: 30px;
}

.success-icon {

    width: 130px;
    height: 130px;

    border-radius: 50%;

    margin: 0 auto 30px;

    display: flex;

    align-items: center;
    justify-content: center;

    font-size: 75px;

    font-weight: 900;

    background: white;

    color: #00b95c;

    box-shadow:
        0 20px 50px rgba(0,0,0,.2);

    animation: pop .5s ease;
}

@keyframes pop {

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

.success-content h1 {

    font-size: clamp(48px, 7vw, 82px);

    margin-bottom: 15px;
}

.success-content h2 {

    font-size: clamp(22px, 3vw, 34px);

    margin-bottom: 15px;
}

.success-content p {

    font-size: 18px;

    opacity: .9;

    margin-bottom: 35px;
}

.success-btn {

    width: min(100%, 400px);

    background: white;

    color: #624cff;

    box-shadow:
        0 15px 35px rgba(0,0,0,.2);
}


/* ================= MOBILE ================= */

@media (max-width: 600px) {

    .content {

        padding: 25px;
    }

    h1 {

        font-size: 45px;

        letter-spacing: -1px;
    }

    .background-train {

        font-size: 500px;

        right: -35%;

        bottom: 5%;
    }

    .input,
    .main-btn {

        height: 60px;
    }

    .input input {

        font-size: 17px;
    }

    .logo {

        margin-bottom: 20px;
    }

}
