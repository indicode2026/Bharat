/* =========================================================
   FIREBASE IMPORTS
   ========================================================= */

import { initializeApp }
from "https://www.gstatic.com/firebasejs/12.17.1/firebase-app.js";

import {
    getAuth,
    createUserWithEmailAndPassword,
    signInWithEmailAndPassword,
    signOut,
    onAuthStateChanged,
    setPersistence,
    browserLocalPersistence
}
from "https://www.gstatic.com/firebasejs/12.17.1/firebase-auth.js";


/* =========================================================
   FIREBASE CONFIG
   ========================================================= */

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
   INITIALIZE FIREBASE
   ========================================================= */

const app =
    initializeApp(firebaseConfig);

const auth =
    getAuth(app);


/* =========================================================
   KEEP USER LOGGED IN
   ========================================================= */

setPersistence(
    auth,
    browserLocalPersistence
)
.catch(error => {

    console.log(
        "Persistence error:",
        error
    );

});


/* =========================================================
   HTML ELEMENTS
   ========================================================= */

const loginPage =
    document.getElementById(
        "loginPage"
    );


const registerPage =
    document.getElementById(
        "registerPage"
    );


const loginForm =
    document.getElementById(
        "loginForm"
    );


const registerForm =
    document.getElementById(
        "registerForm"
    );


const loginMessage =
    document.getElementById(
        "loginMessage"
    );


const registerMessage =
    document.getElementById(
        "registerMessage"
    );


const loginButton =
    document.getElementById(
        "loginButton"
    );


const registerButton =
    document.getElementById(
        "registerButton"
    );


const showRegisterButton =
    document.getElementById(
        "showRegisterButton"
    );


const showLoginButton =
    document.getElementById(
        "showLoginButton"
    );


/* =========================================================
   VARIABLES
   ========================================================= */

let isRegistering = false;


/* =========================================================
   CLEAN PHONE NUMBER
   ========================================================= */

function cleanPhone(phone) {

    return phone
        .replace(/\D/g, "")
        .slice(0, 10);

}


/* =========================================================
   VALID PHONE NUMBER
   ========================================================= */

function validPhone(phone) {

    return /^[6-9][0-9]{9}$/
        .test(phone);

}


/* =========================================================
   PHONE NUMBER TO FIREBASE EMAIL
   =========================================================

   User enters:

   8810244877

   Firebase internally receives:

   918810244877@railtrack.app

   User never needs to see this.
   ========================================================= */

function phoneToEmail(phone) {

    return (
        "91" +
        phone +
        "@railtrack.app"
    );

}


/* =========================================================
   SHOW MESSAGE
   ========================================================= */

function showMessage(
    element,
    text,
    type = ""
) {

    element.textContent =
        text;


    if (type === "") {

        element.className =
            "message";

    }

    else {

        element.className =
            "message " +
            type;

    }

}


/* =========================================================
   SHOW LOGIN PAGE
   ========================================================= */

function showLogin(
    message = "",
    type = ""
) {

    registerPage
        .classList
        .add("hidden");


    loginPage
        .classList
        .remove("hidden");


    showMessage(
        registerMessage,
        ""
    );


    showMessage(
        loginMessage,
        message,
        type
    );

}


/* =========================================================
   SHOW REGISTER PAGE
   ========================================================= */

function showRegister(
    message = "",
    type = ""
) {

    loginPage
        .classList
        .add("hidden");


    registerPage
        .classList
        .remove("hidden");


    showMessage(
        loginMessage,
        ""
    );


    showMessage(
        registerMessage,
        message,
        type
    );

}


/* =========================================================
   BUTTON LOADING STATE
   ========================================================= */

function setButtonLoading(
    button,
    loading,
    normalText,
    loadingText
) {

    button.disabled =
        loading;


    button.textContent =
        loading
            ? loadingText
            : normalText;

}


/* =========================================================
   LOGIN / REGISTER SWITCH
   ========================================================= */

showRegisterButton
    .addEventListener(
        "click",
        function() {

            showRegister();

        }
    );


showLoginButton
    .addEventListener(
        "click",
        function() {

            showLogin();

        }
    );


/* =========================================================
   ALLOW ONLY NUMBERS IN PHONE INPUTS
   ========================================================= */

document
    .querySelectorAll(
        'input[type="tel"]'
    )
    .forEach(
        function(input) {

            input.addEventListener(
                "input",
                function() {

                    input.value =
                        cleanPhone(
                            input.value
                        );

                }
            );

        }
    );


/* =========================================================
   REGISTER USER
   ========================================================= */

registerForm
    .addEventListener(
        "submit",
        async function(event) {

            event.preventDefault();


            const phone =
                cleanPhone(

                    document
                        .getElementById(
                            "registerPhone"
                        )
                        .value
                        .trim()

                );


            const password =
                document
                    .getElementById(
                        "registerPassword"
                    )
                    .value;


            const confirmPassword =
                document
                    .getElementById(
                        "confirmPassword"
                    )
                    .value;


            /* =========================
               VALID PHONE
               ========================= */

            if (
                !validPhone(phone)
            ) {

                showMessage(

                    registerMessage,

                    "Please enter a valid 10-digit phone number.",

                    "error"

                );

                return;

            }


            /* =========================
               PASSWORD LENGTH
               ========================= */

            if (
                password.length < 6
            ) {

                showMessage(

                    registerMessage,

                    "Password must contain at least 6 characters.",

                    "error"

                );

                return;

            }


            /* =========================
               PASSWORD MATCH
               ========================= */

            if (
                password !==
                confirmPassword
            ) {

                showMessage(

                    registerMessage,

                    "Passwords do not match.",

                    "error"

                );

                return;

            }


            /* =========================
               START
               ========================= */

            setButtonLoading(

                registerButton,

                true,

                "CREATE ACCOUNT",

                "CREATING ACCOUNT..."

            );


            showMessage(

                registerMessage,

                "Creating your account...",

                "info"

            );


            isRegistering =
                true;


            try {


                /* =========================
                   CREATE FIREBASE USER
                   ========================= */

                await createUserWithEmailAndPassword(

                    auth,

                    phoneToEmail(phone),

                    password

                );


                /*
                   Firebase automatically
                   logs in a new account.

                   We sign it out because
                   your flow is:

                   Register
                      ↓
                   Login
                      ↓
                   Dashboard
                */

                await signOut(auth);


                /* =========================
                   RESET REGISTER FORM
                   ========================= */

                registerForm
                    .reset();


                /* =========================
                   PUT NUMBER IN LOGIN BOX
                   ========================= */

                document
                    .getElementById(
                        "loginPhone"
                    )
                    .value =
                        phone;


                /* =========================
                   OPEN LOGIN PAGE
                   ========================= */

                showLogin(

                    "Account created successfully. You can now login from any device.",

                    "success"

                );


            }

            catch(error) {


                console.error(
                    "Registration error:",
                    error
                );


                /* =========================
                   ALREADY REGISTERED
                   ========================= */

                if (
                    error.code ===
                    "auth/email-already-in-use"
                ) {

                    showMessage(

                        registerMessage,

                        "This phone number is already registered. Please login.",

                        "error"

                    );

                }


                /* =========================
                   WEAK PASSWORD
                   ========================= */

                else if (
                    error.code ===
                    "auth/weak-password"
                ) {

                    showMessage(

                        registerMessage,

                        "Password must contain at least 6 characters.",

                        "error"

                    );

                }


                /* =========================
                   INTERNET PROBLEM
                   ========================= */

                else if (
                    error.code ===
                    "auth/network-request-failed"
                ) {

                    showMessage(

                        registerMessage,

                        "Internet connection problem. Please try again.",

                        "error"

                    );

                }


                /* =========================
                   AUTH NOT ENABLED
                   ========================= */

                else if (
                    error.code ===
                    "auth/operation-not-allowed"
                ) {

                    showMessage(

                        registerMessage,

                        "Email/Password authentication is not enabled in Firebase.",

                        "error"

                    );

                }


                /* =========================
                   OTHER ERROR
                   ========================= */

                else {

                    showMessage(

                        registerMessage,

                        "Registration failed. Please try again.",

                        "error"

                    );

                }

            }

            finally {


                isRegistering =
                    false;


                setButtonLoading(

                    registerButton,

                    false,

                    "CREATE ACCOUNT",

                    "CREATING ACCOUNT..."

                );

            }

        }
    );


/* =========================================================
   LOGIN USER
   ========================================================= */

loginForm
    .addEventListener(
        "submit",
        async function(event) {

            event.preventDefault();


            const phone =
                cleanPhone(

                    document
                        .getElementById(
                            "loginPhone"
                        )
                        .value
                        .trim()

                );


            const password =
                document
                    .getElementById(
                        "loginPassword"
                    )
                    .value;


            /* =========================
               VALID PHONE
               ========================= */

            if (
                !validPhone(phone)
            ) {

                showMessage(

                    loginMessage,

                    "Please enter a valid 10-digit phone number.",

                    "error"

                );

                return;

            }


            /* =========================
               PASSWORD REQUIRED
               ========================= */

            if (
                password.length === 0
            ) {

                showMessage(

                    loginMessage,

                    "Please enter your password.",

                    "error"

                );

                return;

            }


            /* =========================
               START LOGIN
               ========================= */

            setButtonLoading(

                loginButton,

                true,

                "LOGIN",

                "LOGGING IN..."

            );


            showMessage(

                loginMessage,

                "Checking your account...",

                "info"

            );


            try {


                /* =========================
                   FIREBASE LOGIN
                   ========================= */

                await signInWithEmailAndPassword(

                    auth,

                    phoneToEmail(phone),

                    password

                );


                /* =========================
                   SUCCESS
                   ========================= */

                showMessage(

                    loginMessage,

                    "Login successful! Opening dashboard...",

                    "success"

                );


                /* =========================
                   OPEN DASHBOARD
                   ========================= */

                setTimeout(
                    function() {

                        window.location.href =
                            "dashboard.html";

                    },
                    500
                );


            }

            catch(error) {


                console.error(
                    "Login error:",
                    error
                );


                /*
                   We intentionally do NOT say
                   "Register first".

                   Because someone may already
                   be registered but entered
                   a wrong password.
                */


                if (

                    error.code ===
                    "auth/invalid-credential"

                    ||

                    error.code ===
                    "auth/user-not-found"

                    ||

                    error.code ===
                    "auth/wrong-password"

                    ||

                    error.code ===
                    "auth/invalid-login-credentials"

                ) {

                    showMessage(

                        loginMessage,

                        "Incorrect phone number or password.",

                        "error"

                    );

                }


                /* =========================
                   INTERNET ERROR
                   ========================= */

                else if (
                    error.code ===
                    "auth/network-request-failed"
                ) {

                    showMessage(

                        loginMessage,

                        "Internet connection problem. Please try again.",

                        "error"

                    );

                }


                /* =========================
                   TOO MANY ATTEMPTS
                   ========================= */

                else if (
                    error.code ===
                    "auth/too-many-requests"
                ) {

                    showMessage(

                        loginMessage,

                        "Too many login attempts. Please wait and try again.",

                        "error"

                    );

                }


                /* =========================
                   AUTH NOT ENABLED
                   ========================= */

                else if (
                    error.code ===
                    "auth/operation-not-allowed"
                ) {

                    showMessage(

                        loginMessage,

                        "Email/Password authentication is not enabled in Firebase.",

                        "error"

                    );

                }


                /* =========================
                   OTHER ERROR
                   ========================= */

                else {

                    showMessage(

                        loginMessage,

                        "Unable to login. Please try again.",

                        "error"

                    );

                }

            }

            finally {


                setButtonLoading(

                    loginButton,

                    false,

                    "LOGIN",

                    "LOGGING IN..."

                );

            }

        }
    );


/* =========================================================
   CHECK EXISTING LOGIN
   ========================================================= */

onAuthStateChanged(

    auth,

    function(user) {


        /*
           Do not redirect while the user
           is currently being registered.

           createUserWithEmailAndPassword()
           temporarily signs the new user in.
        */

        if (
            user &&
            !isRegistering
        ) {

            window.location.href =
                "dashboard.html";

        }

    }

);
