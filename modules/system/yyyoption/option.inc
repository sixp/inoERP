<?php include_once("../../../include/basics/header.inc"); ?>
<?php require_once ('class.option_header.inc'); ?>
<?php require_once ('class.option_line.inc'); ?>
<script src="option.js"></script>
<!--Put the navigation & other stuffs at the left Menu-->
<div id="left-block">
           <?php if(path::path_block()) {
           echo '<h2>Menu</h2>';
           path::path_block();
           }
           ?>
</div>