	

    <?php
     
    // ---------------------------------------------------------
    // -- A script to convert LIRC remote codes into the
    // -- format used by the Ken Sheriff Arduino IR Library
    // -- http://www.arcfn.com/2010/12/64-bit-rc6-codes-arduino-and-xbox.html
    // ------ Usage --------------------------------------------
    // -- Run with:
    // -- php -q hexconvert.php 0x37FF07bff
    // -- or
    // -- php -q hexconvert.php 37FF07bff
    // --
    // -- It's case insensitive (but always returns lowercase)
    // ---------------------------------------------------------

    // http://pastebin.com/wadbXRK2
     
    //print_r($argv);
     
    // Is this the input I want? If it is, great, otherwise, end.
    if (preg_match("/^[xa-f0-9]+$/i",$argv[1])) {
     
            // Clean up info, accept both 0x format, and hex without 0x.
            $input = $argv[1];
            $input = preg_replace("/^(0x)?(.+)$/","$2",$input);
            $input = strtolower($input);
     
            // echo "input: ".$input."\n";
     
    } else {
     
            echo "did not detect a hexidecimal number in your input\n";
            echo "run like: php -q hexconvert.php 0x0b2FF4 etc\n";
            die("\n");
     
    }
     
            // Renaming the input, lame.
            $hex = $input;
            // A string of hex digits to reference.
            $hexstr = "0123456789abcdef";
     
            // The variable where we'll store the result.
            $keep = "";
           
            // Cycle through all the hex characters in the string.
            for ($i=0; $i<strlen($hex); $i++) {
                    // Get the hex character in question.
                    $c = substr($hex,$i,1);
                   
                    // What's it's decimal value? We get this from the reference string.
                    $pos = strpos($hexstr,$c);
                   
                    // We invert it's position (that's the whole point of this script)
                    $inv = 15 - $pos;
                   
                    // And then we string that onto our "keeper" string.
                    // echo $c." --> ".$pos." --> ".$inv."\n";
                    $keep .= substr($hexstr,$inv,1);
            }
     
            // And give some output.
            echo "0x".$keep." [Converted to IR Library format]\n";
            echo "0x".$hex." [From your input (from LIRC)]\n";
     
            echo "\n";
     
     
            // Some testing hex values from my MCE remote.
            // x37FF07bff
            /*
                    Blue          0x00007ba1
                    Yellow        0x00007ba2
                    Green         0x00007ba3
                    Red           0x00007ba4
           
            */
            //      $code = 0x37FF07bff; // key ZERO
            //      $code = 0x37FF07bed;
            //      $code = 0x37FF06BFF; // Key 0
            //      $code = 0x37FF08BF3; // Xbox On/Off
     
    ?>


