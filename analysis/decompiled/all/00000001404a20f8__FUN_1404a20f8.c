// Function: FUN_1404a20f8
// Addr: 1404a20f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a20f8(char *param_1,byte *param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  
  *param_1 = *param_1 + '\b';
  *param_2 = *param_2 | in_AL | 0x20;
  *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x20) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x20) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

