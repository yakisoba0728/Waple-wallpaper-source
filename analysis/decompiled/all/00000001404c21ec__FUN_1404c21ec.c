// Function: FUN_1404c21ec
// Addr: 1404c21ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c21ec(undefined8 param_1,char *param_2)

{
  undefined1 *puVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  *param_2 = *param_2 + in_AL * -2;
  puVar1 = (undefined1 *)(CONCAT71(in_register_00000001,in_AL * '\x02') + -0x67f3ffd5);
  *puVar1 = *puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

