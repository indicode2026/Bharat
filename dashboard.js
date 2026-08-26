function generatePNR() {

    const pnr = document.getElementById("pnrInput").value.trim();

    if (pnr.length !== 10 || isNaN(pnr)) {

        alert("Please enter a valid 10-digit PNR number.");

        return;
    }

    showLoading();

    setTimeout(() => {

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

    }, 1800);
}



function generateTrain() {

    const trainNumber =
        document.getElementById("trainInput").value.trim();

    if (trainNumber.length === 0 || isNaN(trainNumber)) {

        alert("Please enter a valid train number.");

        return;
    }

    showLoading();

    setTimeout(() => {

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

    }, 1800);
}



function showLoading() {

    document
        .getElementById("loadingBox")
        .classList.remove("hidden");

    document
        .getElementById("resultBox")
        .classList.add("hidden");

}



function hideLoading() {

    document
        .getElementById("loadingBox")
        .classList.add("hidden");

}



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

    document.getElementById("resultTrainNumber")
        .textContent = "Train No. " + trainNumber;

    document.getElementById("resultTrainName")
        .textContent = trainName;

    document.getElementById("currentLocation")
        .textContent = currentLocation;

    document.getElementById("nextStation")
        .textContent = nextStation;

    document.getElementById("currentSpeed")
        .textContent = speed;

    document.getElementById("scheduledArrival")
        .textContent = scheduledArrival;

    document.getElementById("resultETA")
        .textContent = eta;

    document.getElementById("resultDelay")
        .textContent = delay;

    document.getElementById("resultBox")
        .classList.remove("hidden");



    document.getElementById("resultBox")
        .scrollIntoView({
            behavior: "smooth"
        });
}



function logout() {

    window.location.href = "index.html";

}