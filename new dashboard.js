import { initializeApp } from "https://www.gstatic.com/firebasejs/12.17.1/firebase-app.js";

import {
    getAuth,
    onAuthStateChanged,
    signOut
} from "https://www.gstatic.com/firebasejs/12.17.1/firebase-auth.js";


/* =========================================================
   FIREBASE CONFIGURATION
   =========================================================

   IMPORTANT:

   Paste the SAME Firebase configuration
   that you used in front.js.

   Both files must use the same Firebase project.
*/


const firebaseConfig = {
  apiKey: "AIzaSyBb6ieAynPd70gcO31Uon3VjGO40ILJptM",
  authDomain: "raintrack-eta.firebaseapp.com",
  projectId: "raintrack-eta",
  storageBucket: "raintrack-eta.firebasestorage.app",
  messagingSenderId: "448398624448",
  appId: "1:448398624448:web:2bef93b6add4888ad74f25",
  measurementId: "G-CV6GEHKZ5Q"
};



/* =========================================================
   FIREBASE CONFIG CHECK
   ========================================================= */


const firebaseConfigured =

    firebaseConfig.apiKey !==
        "PASTE_YOUR_API_KEY"

    &&

    firebaseConfig.projectId !==
        "PASTE_YOUR_PROJECT_ID";



/* =========================================================
   PAGE ELEMENTS
   ========================================================= */


const authLoader =
    document.getElementById("authLoader");


const dashboardPage =
    document.getElementById("dashboardPage");


const loggedUser =
    document.getElementById("loggedUser");


const logoutButton =
    document.getElementById("logoutButton");


const pnrInput =
    document.getElementById("pnrInput");


const trainInput =
    document.getElementById("trainInput");


const pnrButton =
    document.getElementById("pnrButton");


const trainButton =
    document.getElementById("trainButton");


const loadingBox =
    document.getElementById("loadingBox");


const resultBox =
    document.getElementById("resultBox");



let auth = null;



/* =========================================================
   NUMBER INPUT CLEANING
   ========================================================= */


function keepNumbers(
    value,
    maxLength
) {

    return value
        .replace(/\D/g, "")
        .slice(0, maxLength);

}



/* =========================================================
   PNR INPUT
   ========================================================= */


pnrInput.addEventListener(
    "input",
    function() {

        pnrInput.value =
            keepNumbers(
                pnrInput.value,
                10
            );

    }
);



/* =========================================================
   TRAIN NUMBER INPUT
   ========================================================= */


trainInput.addEventListener(
    "input",
    function() {

        trainInput.value =
            keepNumbers(
                trainInput.value,
                5
            );

    }
);



/* =========================================================
   SHOW LOADING
   ========================================================= */


function showLoading() {

    loadingBox
        .classList
        .remove("hidden");


    resultBox
        .classList
        .add("hidden");


    loadingBox.scrollIntoView({

        behavior: "smooth",

        block: "center"

    });

}



/* =========================================================
   HIDE LOADING
   ========================================================= */


function hideLoading() {

    loadingBox
        .classList
        .add("hidden");

}



/* =========================================================
   SHOW RESULT
   ========================================================= */


function showResult(

    trainNumber,

    trainName,

    currentLocation,

    nextStation,

    speed,

    scheduledArrival,

    eta,

    delay

) {


    document
        .getElementById(
            "resultTrainNumber"
        )
        .textContent =
            "Train No. " +
            trainNumber;



    document
        .getElementById(
            "resultTrainName"
        )
        .textContent =
            trainName;



    document
        .getElementById(
            "currentLocation"
        )
        .textContent =
            currentLocation;



    document
        .getElementById(
            "nextStation"
        )
        .textContent =
            nextStation;



    document
        .getElementById(
            "currentSpeed"
        )
        .textContent =
            speed;



    document
        .getElementById(
            "scheduledArrival"
        )
        .textContent =
            scheduledArrival;



    document
        .getElementById(
            "resultETA"
        )
        .textContent =
            eta;



    document
        .getElementById(
            "resultDelay"
        )
        .textContent =
            delay;



    /* =========================
       UPDATE TIME
       ========================= */


    const currentTime =
        new Date()
            .toLocaleTimeString(
                [],
                {
                    hour: "2-digit",
                    minute: "2-digit"
                }
            );


    document
        .getElementById(
            "updateTime"
        )
        .textContent =
            "Last updated at " +
            currentTime;



    /* =========================
       SHOW RESULT BOX
       ========================= */


    resultBox
        .classList
        .remove("hidden");



    resultBox.scrollIntoView({

        behavior: "smooth",

        block: "start"

    });

}



/* =========================================================
   GENERATE USING PNR
   ========================================================= */


function generatePNR() {


    const pnr =

        pnrInput
            .value
            .trim();



    /* =========================
       VALIDATE PNR
       ========================= */


    if (

        pnr.length !== 10

        ||

        isNaN(pnr)

    ) {


        alert(
            "Please enter a valid 10-digit PNR number."
        );


        pnrInput.focus();


        return;

    }



    /* =========================
       LOADING
       ========================= */


    showLoading();



    /*
        For now this uses demo data.

        Later we can replace this section
        with real railway API data.
    */


    setTimeout(
        function() {


            hideLoading();



            showResult(

                "12302",

                "Rajdhani Express",

                "Prayagraj Jn",

                "Pt. DDU Jn",

                "112 km/h",

                "10:05 AM",

                "10:42 AM",

                "+37 min delay"

            );


        },

        1800

    );

}



/* =========================================================
   GENERATE USING TRAIN NUMBER
   ========================================================= */


function generateTrain() {


    const trainNumber =

        trainInput
            .value
            .trim();



    /* =========================
       VALIDATE TRAIN NUMBER
       ========================= */


    if (

        trainNumber.length !== 5

        ||

        isNaN(trainNumber)

    ) {


        alert(
            "Please enter a valid 5-digit train number."
        );


        trainInput.focus();


        return;

    }



    /* =========================
       SHOW LOADING
       ========================= */


    showLoading();



    /*
        Demo data for now.

        The train number displayed
        will be the number entered
        by the user.
    */


    setTimeout(
        function() {


            hideLoading();



            showResult(

                trainNumber,

                "Rajdhani Express",

                "Prayagraj Jn",

                "Pt. DDU Jn",

                "112 km/h",

                "10:05 AM",

                "10:42 AM",

                "+37 min delay"

            );


        },

        1800

    );

}



/* =========================================================
   PNR BUTTON
   ========================================================= */


pnrButton.addEventListener(
    "click",
    function() {

        generatePNR();

    }
);



/* =========================================================
   TRAIN BUTTON
   ========================================================= */


trainButton.addEventListener(
    "click",
    function() {

        generateTrain();

    }
);



/* =========================================================
   ENTER KEY SUPPORT
   ========================================================= */


pnrInput.addEventListener(
    "keydown",
    function(event) {


        if (
            event.key ===
            "Enter"
        ) {


            generatePNR();


        }


    }
);



trainInput.addEventListener(
    "keydown",
    function(event) {


        if (
            event.key ===
            "Enter"
        ) {


            generateTrain();


        }


    }
);



/* =========================================================
   LOGOUT
   ========================================================= */


logoutButton.addEventListener(
    "click",
    async function() {


        if (
            auth === null
        ) {


            window.location.href =
                "front.html";


            return;

        }



        logoutButton.disabled =
            true;


        logoutButton.textContent =
            "Logging out...";



        try {


            await signOut(auth);



            /*
                After logout go back
                to login/register page.
            */


            window.location.href =
                "front.html";


        }



        catch(error) {


            console.log(error);


            logoutButton.disabled =
                false;


            logoutButton.textContent =
                "Logout";


            alert(
                "Unable to logout. Please try again."
            );


        }


    }
);



/* =========================================================
   FIREBASE AUTHENTICATION CHECK
   ========================================================= */


if (
    !firebaseConfigured
) {


    /*
        Dashboard should not work until
        Firebase has been configured.
    */


    authLoader.innerHTML = `

        <div
            style="
                max-width: 500px;
                padding: 30px;
                text-align: center;
                line-height: 1.7;
            "
        >

            <h2
                style="
                    color: white;
                    margin-bottom: 12px;
                "
            >

                Firebase Setup Required

            </h2>


            <p>

                Add your Firebase configuration
                inside both front.js and dashboard.js.

            </p>


            <p
                style="
                    margin-top: 10px;
                    color: #38bdf8;
                "
            >

                Both files must use the same
                Firebase project.

            </p>

        </div>

    `;


}

else {


    /* =========================
       INITIALIZE FIREBASE
       ========================= */


    const app =

        initializeApp(
            firebaseConfig
        );



    auth =

        getAuth(app);



    /* =====================================================
       CHECK LOGIN SESSION
       ===================================================== */


    onAuthStateChanged(

        auth,

        function(user) {



            /* =========================
               NOT LOGGED IN
               ========================= */


            if (!user) {


                /*
                    If anyone tries to directly
                    open dashboard.html without
                    logging in, send them to
                    front.html.
                */


                window.location.href =
                    "front.html";


                return;

            }



            /* =========================
               USER IS LOGGED IN
               ========================= */


            /*
                front.js converts phone number:

                9876543210

                into Firebase ID:

                919876543210@railtrack.app

                Here we convert it back
                for display.
            */


            const firebaseEmail =

                user.email || "";



            const accountID =

                firebaseEmail
                    .split("@")[0];



            if (

                accountID.length === 12

                &&

                accountID.startsWith("91")

            ) {


                const phoneNumber =

                    accountID.substring(2);



                loggedUser.textContent =

                    "+91 " +
                    phoneNumber;


            }

            else {


                loggedUser.textContent =

                    "Logged in";


            }



            /* =========================
               HIDE AUTH LOADER
               ========================= */


            authLoader
                .classList
                .add("hidden");



            /* =========================
               SHOW DASHBOARD
               ========================= */


            dashboardPage
                .classList
                .remove("hidden");


        }

    );

}
