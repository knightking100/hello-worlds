<?php
header("Content-type: image/png");

$image = @imagecreatetruecolor(120, 20) or die('Cannot Initialize new GD image stream');
$font_color = imagecolorallocate($image, 0, 255, 255);

imagestring($image, 4, 5, 5, "Hello World!", $font_color);
imagepng($image);
imagedestroy($image);

