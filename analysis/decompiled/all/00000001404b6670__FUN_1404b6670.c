// Function: FUN_1404b6670
// Addr: 1404b6670
// Size: 1 bytes


void FUN_1404b6670(char param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  longlong unaff_GS_OFFSET;
  
  *(char *)(unaff_GS_OFFSET + param_4) = *(char *)(unaff_GS_OFFSET + param_4) + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + param_1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

