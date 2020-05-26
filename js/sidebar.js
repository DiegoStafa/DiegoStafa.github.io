function openSidebar() 
{
    document.getElementById("mySidebar").style.width = "350px";
}

function closeSidebar()
{
    document.getElementById("mySidebar").style.width = "0";
}

function toggle(caller)
{
    $(caller).next().slideToggle(300, "linear");
}