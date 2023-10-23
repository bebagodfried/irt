<?php
try {
    // Database connection settings
    $dbHost = 'sql311.epizy.com';
    $dbName = 'epiz_34087304_irt';
    $dbUser = 'epiz_34087304'; 
    $dbPass = 'htc1ao3Hja1zS';

    // Create PDO instance
    $db = new PDO("mysql:host=$dbHost;dbname=$dbName", $dbUser, $dbPass);

    // PDO error mode exception
    $db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    // Capture input data (you can get these values from a form)
    $u_frist = $_POST['u_first'];
    $u_last = $_POST['u_last'];
    $u_mail = $_POST['u_mail'];
    $u_number = $_POST['u_u_number'];

    // Prepare and execute the SQL INSERT statement
    $sql = "INSERT INTO etudiants (u_frist, u_last, u_mail, u_number) VALUES (:u_frist, :u_last, :u_mail, :u_number)";
    $stmt = $db->prepare($sql);

    // Bind parameters
    $stmt->bindParam(':u_frist', $u_frist);
    $stmt->bindParam(':u_last', $u_last);
    $stmt->bindParam(':u_mail', $u_mail);
    $stmt->bindParam(':u_number', $u_number);

    // Execute the statement
    $stmt->execute();

    // Close the database connection
    $db = null;

    echo "Data inserted successfully!";
} catch (PDOException $e) {
    echo "Error: " . $e->getMessage();
}
?>
