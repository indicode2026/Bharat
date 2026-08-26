function hideAllPages() {

    document.getElementById("registerPage")
        .classList.add("hidden");

    document.getElementById("loginPage")
        .classList.add("hidden");

    document.getElementById("successPage")
        .classList.add("hidden");
}


/* ================= REGISTER ================= */

function registerUser() {

    const phone =
        document.getElementById("phone").value.trim();

    const password =
        document.getElementById("password").value.trim();


    if (phone === "" || password === "") {

        alert("Please enter phone number and password.");

        return;
    }


    if (!/^[6-9][0-9]{9}$/.test(phone)) {

        alert("Please enter a valid 10-digit phone number.");

        return;
    }


    /*
       Registration successful.
       Move to a completely separate page.
    */

    hideAllPages();

    document.getElementById("successPage")
        .classList.remove("hidden");
}


/* ================= LOGIN PAGE ================= */

function showLogin() {

    hideAllPages();

    document.getElementById("loginPage")
        .classList.remove("hidden");
}


/* ================= REGISTER PAGE ================= */

function showRegister() {

    hideAllPages();

    document.getElementById("registerPage")
        .classList.remove("hidden");
}


/* ================= LOGIN ================= */

function loginUser() {

    const phone =
        document.getElementById("loginPhone")
            .value.trim();

    const password =
        document.getElementById("loginPassword")
            .value.trim();


    if (phone === "" || password === "") {

        alert("Please enter phone number and password.");

        return;
    }


    if (!/^[6-9][0-9]{9}$/.test(phone)) {

        alert("Please enter a valid 10-digit phone number.");

        return;
    }


    alert("Login successful!");
}