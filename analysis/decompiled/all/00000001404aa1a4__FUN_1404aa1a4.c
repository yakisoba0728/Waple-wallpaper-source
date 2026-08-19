// Function: FUN_1404aa1a4
// Addr: 1404aa1a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa1a4(longlong param_1,undefined8 param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  
  *(byte *)(CONCAT71(in_register_00000001,in_AL) | 0xc4) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) | 0xc4) - (in_AL | 0xc4);
  *(byte *)(param_1 + unaff_RBX) = *(byte *)(param_1 + unaff_RBX) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

