// Function: FUN_1404b18f4
// Addr: 1404b18f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b18f4(undefined8 param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *param_4 = *param_4;
  *param_2 = *param_2 + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

