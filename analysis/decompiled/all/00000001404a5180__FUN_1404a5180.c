// Function: FUN_1404a5180
// Addr: 1404a5180
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5180(longlong param_1)

{
  undefined8 in_RAX;
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + param_1) = *(byte *)(unaff_RBX + param_1) | (byte)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

