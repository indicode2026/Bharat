* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: "Segoe UI", Arial, sans-serif;
    overflow: hidden;
}


/* ================= PAGE ================= */

.page {
    min-height: 100vh;

    display: flex;
    align-items: center;
    justify-content: center;

    position: relative;

    overflow: hidden;

    background:
        linear-gradient(
            135deg,
            #6a11cb,
            #2575fc,
            #00c6ff
        );
}


/* ================= COLOURFUL BLOBS ================= */

.blob {
    position: absolute;

    border-radius: 50%;

    filter: blur(2px);

    opacity: 0.45;
}

.blob1 {
    width: 400px;
    height: 400px;

    background: #ff4ecd;

    top: -150px;
    left: -100px;
}

.blob2 {
    width: 350px;
    height: 350px;

    background: #ffe600;

    bottom: -130px;
    right: -80px;
}

.blob3 {
    width: 250px;
    height: 250px;

    background: #00ffb3;

    top: 40%;
    right: 5%;
}


/* ================= CARD ================= */

.auth-card {

    width: 430px;

    min-height: 690px;

    padding: 25px 40px 35px;

    background:
        rgba(255,255,255,0.95);

    border-radius: 32px;

    box-shadow:
        0 30px 80px rgba(0,0,0,0.25);

    text-align: center;

    position: relative;

    z-index: 5;

    backdrop-filter: blur(20px);

    animation: cardAppear 0.6s ease;
}


@keyframes cardAppear {

    from {
        opacity: 0;
        transform: translateY(30px);
    }

    to {
        opacity: 1;
        transform: translateY(0);
    }

}


/* ================= TRAIN AREA ================= */

.train-area {

    height: 190px;

    position: relative;

    overflow: hidden;

    margin-bottom: 5px;
}


/* RAIL */

.rail-track {

    position: absolute;

    bottom: 27px;

    left: 0;

    width: 100%;

    height: 7px;

    background: #29304d;

    border-radius: 10px;

    box-shadow:
        0 13px 0 #29304d;
}


/* TRAIN */

.train {

    position: absolute;

    bottom: 38px;

    left: 50%;

    transform: translateX(-50%);

    width: 280px;

    height: 100px;

    animation: trainFloat 3s ease-in-out infinite;
}


@keyframes trainFloat {

    0%,
    100% {
        transform:
            translateX(-50%)
            translateY(0);
    }

    50% {
        transform:
            translateX(-50%)
            translateY(-6px);
    }

}


/* TRAIN BODY */

.train-body {

    position: absolute;

    left: 0;

    top: 15px;

    width: 210px;

    height: 70px;

    border-radius: 18px 8px 8px 18px;

    background:
        linear-gradient(
            135deg,
            #ff4b7d,
            #ff8a3d
        );

    border: 4px solid #242747;
}


/* TRAIN FRONT */

.train-front {

    position: absolute;

    right: 0;

    top: 28px;

    width: 75px;

    height: 57px;

    background:
        linear-gradient(
            135deg,
            #7257ff,
            #3d8bff
        );

    border-radius:
        5px 20px 20px 5px;

    border: 4px solid #242747;
}


/* WINDOWS */

.window {

    display: inline-block;

    width: 42px;

    height: 27px;

    margin: 12px 4px;

    border-radius: 7px;

    background:
        linear-gradient(
            135deg,
            #d9f6ff,
            #74d8ff
        );

    border: 3px solid #242747;
}


/* DOOR */

.train-door {

    position: absolute;

    right: 12px;

    bottom: 0;

    width: 28px;

    height: 48px;

    background: #ffd447;

    border: 3px solid #242747;

    border-radius: 5px 5px 0 0;
}


/* LIGHT */

.light {

    width: 14px;

    height: 14px;

    background: #ffe600;

    border-radius: 50%;

    position: absolute;

    right: 7px;

    top: 20px;

    box-shadow:
        0 0 15px #ffe600;
}


/* WHEELS */

.wheel {

    position: absolute;

    bottom: -8px;

    width: 32px;

    height: 32px;

    background: #252945;

    border: 5px solid white;

    border-radius: 50%;
}

.wheel1 {
    left: 35px;
}

.wheel2 {
    left: 125px;
}

.wheel3 {
    right: 20px;
}


/* ================= CLOUDS ================= */

.cloud {

    position: absolute;

    width: 70px;
    height: 25px;

    background: #e9f7ff;

    border-radius: 30px;

    opacity: 0.8;
}

.cloud:before {

    content: "";

    position: absolute;

    width: 30px;
    height: 30px;

    background: #e9f7ff;

    border-radius: 50%;

    left: 15px;

    top: -15px;
}

.cloud1 {
    top: 35px;
    left: 25px;
}

.cloud2 {
    top: 65px;
    right: 25px;
}


/* ================= LOGO ================= */

.logo {

    font-size: 25px;

    font-weight: 800;

    color: #252945;

    margin-bottom: 25px;
}

.logo b {

    color: #7257ff;
}


/* ================= HEADINGS ================= */

h1 {

    font-size: 32px;

    color: #20243d;

    margin-bottom: 7px;
}

.subtitle {

    color: #7a8197;

    font-size: 15px;

    margin-bottom: 25px;
}


/* ================= INPUT ================= */

.input-box {

    height: 60px;

    display: flex;

    align-items: center;

    gap: 12px;

    background: #f5f6fb;

    border: 2px solid transparent;

    border-radius: 15px;

    margin-bottom: 15px;

    padding: 0 17px;

    transition: 0.25s;
}

.input-box:focus-within {

    border-color: #7257ff;

    background: white;

    box-shadow:
        0 5px 20px rgba(114,87,255,0.12);
}

.input-box span {

    font-size: 21px;
}

.input-box input {

    width: 100%;

    border: none;

    outline: none;

    background: transparent;

    font-size: 17px;

    color: #242747;
}

.input-box input::placeholder {

    color: #a0a5b7;
}


/* ================= REGISTER BUTTON ================= */

.register-btn {

    width: 100%;

    height: 58px;

    border: none;

    border-radius: 15px;

    color: white;

    font-size: 17px;

    font-weight: 800;

    letter-spacing: 1px;

    background:
        linear-gradient(
            90deg,
            #ff4b7d,
            #7257ff,
            #2575fc
        );

    cursor: pointer;

    box-shadow:
        0 10px 25px
        rgba(114,87,255,0.3);

    transition: 0.25s;
}

.register-btn:hover {

    transform: translateY(-3px);

    box-shadow:
        0 15px 30px
        rgba(114,87,255,0.4);
}


/* ================= LOGIN TEXT ================= */

.login-text {

    margin-top: 22px;

    color: #7a8197;

    font-size: 14px;
}

.login-text button {

    border: none;

    background: none;

    color: #7257ff;

    font-weight: 800;

    cursor: pointer;

    font-size: 14px;
}


/* ================= SUCCESS ================= */

.hidden {
    display: none;
}

.success {

    padding-top: 30px;
}

.success-icon {

    width: 100px;

    height: 100px;

    margin: 20px auto;

    display: flex;

    align-items: center;

    justify-content: center;

    border-radius: 50%;

    font-size: 55px;

    font-weight: bold;

    color: white;

    background:
        linear-gradient(
            135deg,
            #00c853,
            #00e676
        );

    box-shadow:
        0 15px 35px
        rgba(0,200,83,0.3);

    animation: successPop 0.5s ease;
}


@keyframes successPop {

    0% {
        transform: scale(0);
    }

    70% {
        transform: scale(1.1);
    }

    100% {
        transform: scale(1);
    }

}


.success p {

    color: #7a8197;

    margin: 10px 0 30px;

    font-size: 16px;
}


/* ================= MOBILE ================= */

@media (max-width: 500px) {

    .auth-card {

        width: 92%;

        min-height: 650px;

        padding:
            20px 25px 30px;

    }

    .train {

        transform:
            translateX(-50%)
            scale(0.8);
    }

    h1 {

        font-size: 28px;
    }

    .logo {

        font-size: 22px;
    }

}
