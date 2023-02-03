<?php
    // https://stackoverflow.com/a/5904119

    $f_contents = file("vocab.txt"); 
    $line = $f_contents[rand(0, count($f_contents) - 1)];
    echo $line;
?>
