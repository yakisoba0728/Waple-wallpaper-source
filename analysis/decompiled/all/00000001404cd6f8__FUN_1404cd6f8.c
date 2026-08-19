// Function: FUN_1404cd6f8
// Addr: 1404cd6f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd6f8(char param_1,longlong param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  
  *(byte *)(param_2 + 0x41) = *(byte *)(param_2 + 0x41) ^ in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

