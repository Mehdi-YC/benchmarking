<?php
$s=0;
foreach (range(0, $argv[1]) as $i) {
	echo($i."->".$s."\n");
	$s+=($i+$i*$i^$i)%($i+1);
}
echo($s."\n");
?>