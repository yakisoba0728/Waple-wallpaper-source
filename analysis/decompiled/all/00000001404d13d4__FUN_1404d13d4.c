// Function: FUN_1404d13d4
// Addr: 1404d13d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d13d4(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  longlong unaff_RBX;
  
  *(byte *)(in_RAX + unaff_RBX) = *(byte *)(in_RAX + unaff_RBX) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

