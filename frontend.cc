/* =====================================================
   RAILTRACK ETA - MAIN CSS
   ===================================================== */


/* ================= GLOBAL ================= */

* {
    box-sizing: border-box;
    margin: 0;
    padding: 0;
}

html {
    scroll-behavior: smooth;
}

body {
    font-family: "Segoe UI", Arial, sans-serif;
    background: #f5f8fc;
    color: #132238;
    line-height: 1.5;
}


/* ================= HEADER ================= */

.topbar {
    height: 72px;

    background: #ffffff;

    border-bottom: 1px solid #e5eaf0;

    display: flex;
    align-items: center;
    justify-content: space-between;

    padding: 0 7%;

    position: sticky;
    top: 0;

    z-index: 100;
}


/* LOGO */

.brand {
    font-size: 23px;
    font-weight: 800;

    display: flex;
    align-items: center;

    gap: 8px;
}

.brand span:last-child {
    color: #246bfe;
}

.train-icon {
    font-size: 28px;
}


/* LOGIN BUTTON */

.outline-btn {
    border: 1px solid #246bfe;

    color: #246bfe;

    background: white;

    padding: 10px 25px;

    border-radius: 9px;

    font-weight: 700;

    cursor: pointer;

    transition: 0.2s;
}

.outline-btn:hover {
    background: #246bfe;
    color: white;
}


/* ================= HERO ================= */

.hero {

    min-height: 560px;

    padding: 75px 7%;

    display: grid;

    grid-template-columns: 1fr 1fr;

    gap: 50px;

    align-items: center;

    background:
        linear-gradient(
            135deg,
            #f7fbff,
            #eaf2ff
        );
}


/* HERO TEXT */

.hero-text {
    max-width: 650px;
}


/* BADGE */

.badge {

    display: inline-block;

    color: #246bfe;

    font-size: 12px;

    font-weight: 800;

    letter-spacing: 1.5px;

    background: #e5efff;

    padding: 7px 12px;

    border-radius: 20px;

    margin-bottom: 16px;
}


/* HEADING */

.hero h1 {

    font-size: 54px;

    line-height: 1.08;

    letter-spacing: -2px;

    color: #132238;
}

.hero h1 span {
    color: #246bfe;
}


/* DESCRIPTION */

.subtitle {

    font-size: 18px;

    line-height: 1.7;

    color: #5b6b7e;

    max-width: 580px;

    margin: 20px 0 28px;
}


/* HERO BUTTONS */

.hero-actions {

    display: flex;

    gap: 12px;
}


/* ================= BUTTONS ================= */

button {
    font: inherit;

    cursor: pointer;

    border: 0;
}


.primary-btn {

    background: #246bfe;

    color: white;

    padding: 13px 22px;

    border-radius: 9px;

    font-weight: 700;

    transition: 0.2s;
}

.primary-btn:hover {

    background: #1857d8;

    transform: translateY(-1px);
}


.secondary-btn {

    background: white;

    color: #246bfe;

    border: 1px solid #cddcff;

    padding: 13px 22px;

    border-radius: 9px;

    font-weight: 700;

    transition: 0.2s;
}

.secondary-btn:hover {

    background: #edf4ff;

}


/* ================= TRAIN CARD ================= */

.train-card {

    height: 360px;

    background: white;

    border-radius: 24px;

    box-shadow:
        0 20px 60px rgba(23, 61, 112, 0.10);

    position: relative;

    padding: 30px;

    overflow: hidden;
}


/* TRAIN TRACK */

.track-line {

    position: absolute;

    left: 12%;

    right: 12%;

    top: 50%;

    height: 5px;

    background: #d8e2f0;

    border-radius: 10px;
}


/* TRAIN */

.moving-train {

    position: absolute;

    top: 41%;

    left: 43%;

    font-size: 58px;

    filter:
        drop-shadow(
            0 7px 8px rgba(0,0,0,0.15)
        );

    animation: trainMove 3s ease-in-out infinite;
}


@keyframes trainMove {

    0% {
        transform: translateX(-12px);
    }

    50% {
        transform: translateX(12px);
    }

    100% {
        transform: translateX(-12px);
    }

}


/* STATIONS */

.station {

    position: absolute;

    top: 55%;

    font-size: 12px;

    font-weight: 700;

    color: #40536b;
}

.s1 {
    left: 11%;
}

.s2 {
    left: 46%;
}

.s3 {
    right: 10%;
}


/* ETA BOX */

.eta-box {

    position: absolute;

    bottom: 28px;

    left: 30px;

    background: #f2f7ff;

    padding: 15px 20px;

    border-radius: 13px;

    display: grid;

    gap: 4px;

    min-width: 180px;
}


.eta-box small {

    color: #66778c;

    font-size: 10px;

    font-weight: 700;
}


.eta-box b {

    font-size: 23px;

    color: #132238;
}


.eta-box span {

    color: #159447;

    font-weight: 700;

    font-size: 13px;
}


/* ================= FEATURES ================= */

.features {

    padding: 55px 7%;

    display: grid;

    grid-template-columns:
        repeat(4, 1fr);

    gap: 18px;

    background: white;
}


.feature {

    padding: 24px;

    border: 1px solid #e4eaf1;

    border-radius: 15px;

    background: white;

    transition: 0.25s;
}


.feature:hover {

    transform: translateY(-5px);

    box-shadow:
        0 12px 30px rgba(30, 65, 110, 0.08);
}


.feature b {

    font-size: 16px;

    color: #17283d;
}


.feature p {

    color: #68778a;

    margin-top: 9px;

    line-height: 1.5;

    font-size: 14px;
}


/* ================= DASHBOARD ================= */

.dashboard-preview {

    padding: 70px 7%;

    background: #f5f8fc;
}


.section-heading h2 {

    font-size: 34px;

    margin-bottom: 25px;
}


/* SEARCH */

.search-row {

    display: flex;

    gap: 10px;

    max-width: 700px;

    margin-bottom: 25px;
}


.search-row input {

    flex: 1;
}


/* ALL INPUTS */

input {

    padding: 14px;

    border: 1px solid #d5dde7;

    border-radius: 9px;

    outline: none;

    background: white;

    font-size: 15px;

    transition: 0.2s;
}


input:focus {

    border-color: #246bfe;

    box-shadow:
        0 0 0 3px rgba(36,107,254,0.08);
}


/* SEARCH RESULT */

.result-card {

    background: #eaf8ef;

    border: 1px solid #bde5c9;

    padding: 15px;

    border-radius: 10px;

    margin-bottom: 20px;

    color: #176c35;
}


.result-card span {

    color: #4e6958;

    font-size: 14px;
}


.hidden {

    display: none;
}


/* ================= ROUTE PANEL ================= */

.route-panel {

    background: white;

    border: 1px solid #e2e8ef;

    border-radius: 18px;

    padding: 30px;

    display: grid;

    grid-template-columns:
        1fr 1.5fr;

    gap: 30px;

    box-shadow:
        0 8px 30px rgba(30,65,110,0.04);
}


/* TRAIN INFO */

.route-info h3 {

    font-size: 21px;

    margin-bottom: 18px;
}


.route-info p {

    margin: 13px 0;

    color: #56677b;
}


.route-info b {

    color: #26384e;
}


.green {

    color: #159447;

    font-weight: 700;
}


/* ================= ROUTE DIAGRAM ================= */

.route-diagram {

    position: relative;

    min-height: 220px;

    padding: 20px 0;
}


/* VERTICAL LINE */

.route-line {

    position: absolute;

    left: 20px;

    top: 30px;

    bottom: 30px;

    width: 4px;

    background: #d7e0ec;

    border-radius: 10px;
}


/* STATION NODE */

.node {

    position: relative;

    margin-bottom: 35px;

    padding-left: 55px;

    color: #6a7787;

    min-height: 20px;
}


.node:before {

    content: "";

    position: absolute;

    left: 12px;

    top: 1px;

    width: 14px;

    height: 14px;

    background: white;

    border: 4px solid #cbd5e1;

    border-radius: 50%;

    z-index: 2;
}


.node.done:before {

    border-color: #246bfe;

    background: #246bfe;
}


.node.current:before {

    border-color: #f59e0b;

    background: #f59e0b;

    box-shadow:
        0 0 0 6px rgba(245,158,11,0.12);
}


.node span {

    font-weight: 700;

    color: #40536b;
}


/* ================= FOOTER ================= */

footer {

    text-align: center;

    padding: 30px;

    color: #738196;

    background: white;

    border-top: 1px solid #e5eaf0;
}


footer small {

    font-size: 12px;
}


/* ================= MODAL ================= */

.modal {

    display: none;

    position: fixed;

    inset: 0;

    background:
        rgba(16, 36, 61, 0.60);

    align-items: center;

    justify-content: center;

    z-index: 500;

    padding: 20px;

    backdrop-filter: blur(4px);
}


.modal.active {

    display: flex;
}


/* MODAL BOX */

.modal-box {

    background: white;

    width: 100%;

    max-width: 420px;

    border-radius: 18px;

    padding: 34px;

    position: relative;

    box-shadow:
        0 20px 70px rgba(0,0,0,0.25);

    animation: modalOpen 0.2s ease;
}


@keyframes modalOpen {

    from {

        opacity: 0;

        transform: scale(0.95);

    }

    to {

        opacity: 1;

        transform: scale(1);

    }

}


/* CLOSE BUTTON */

.close {

    position: absolute;

    right: 18px;

    top: 12px;

    background: none;

    font-size: 28px;

    color: #667;

    cursor: pointer;
}


.close:hover {

    color: #111;
}


/* MODAL LOGO */

.modal-logo {

    text-align: center;

    font-size: 45px;

    margin-bottom: 5px;
}


.modal-box h2 {

    text-align: center;

    margin: 8px 0;

    font-size: 27px;
}


.modal-box > p {

    text-align: center;

    color: #68778a;

    margin-bottom: 18px;
}


/* MODAL INPUT */

.modal-box input {

    width: 100%;

    margin: 6px 0;
}


/* FULL BUTTON */

.full {

    width: 100%;

    margin-top: 10px;
}


/* SWITCH */

.switch {

    font-size: 14px;
}


.switch a {

    color: #246bfe;

    font-weight: 700;

    cursor: pointer;
}


/* ================= RESPONSIVE ================= */

@media (max-width: 1000px) {

    .hero {

        grid-template-columns: 1fr;

    }

    .hero-text {

        max-width: 800px;
    }

    .features {

        grid-template-columns:
            repeat(2, 1fr);

    }

    .route-panel {

        grid-template-columns: 1fr;

    }

}


/* TABLET */

@media (max-width: 700px) {

    .topbar {

        padding: 0 4%;

    }

    .hero {

        padding: 55px 5%;

    }

    .dashboard-preview {

        padding: 55px 5%;

    }

    .features {

        padding: 45px 5%;

    }

    .hero h1 {

        font-size: 43px;

    }

    .subtitle {

        font-size: 16px;

    }

}


/* MOBILE */

@media (max-width: 550px) {

    .brand {

        font-size: 18px;

    }

    .train-icon {

        font-size: 23px;

    }

    .outline-btn {

        padding: 8px 18px;

    }


    .hero {

        padding-top: 45px;

    }


    .hero h1 {

        font-size: 37px;

        letter-spacing: -1px;

    }


    .hero-actions {

        flex-direction: column;

    }


    .hero-actions button {

        width: 100%;

    }


    .train-card {

        height: 300px;

    }


    .moving-train {

        font-size: 45px;

    }


    .features {

        grid-template-columns: 1fr;

    }


    .search-row {

        flex-direction: column;

    }


    .search-row button {

        width: 100%;

    }


    .route-panel {

        padding: 20px;

    }


    .modal-box {

        padding: 25px 20px;

    }

}


/* ================= EXTRA UI EFFECTS ================= */

::selection {

    background: #246bfe;

    color: white;
}


::-webkit-scrollbar {

    width: 8px;

}


::-webkit-scrollbar-track {

    background: #f1f4f8;

}


::-webkit-scrollbar-thumb {

    background: #b8c5d6;

    border-radius: 10px;

}


::-webkit-scrollbar-thumb:hover {

    background: #246bfe;

}
