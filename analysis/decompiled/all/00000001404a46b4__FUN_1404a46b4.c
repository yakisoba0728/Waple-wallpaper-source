// Function: FUN_1404a46b4
// Addr: 1404a46b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a46b4(longlong param_1,undefined8 param_2)

{
  byte in_AH;
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + param_1) = *(byte *)(unaff_RBX + param_1) | in_AH;
  *(char *)(unaff_RBX + -0x73) = *(char *)(unaff_RBX + -0x73) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

