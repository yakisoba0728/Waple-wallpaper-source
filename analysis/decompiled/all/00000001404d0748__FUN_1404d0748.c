// Function: FUN_1404d0748
// Addr: 1404d0748
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0748(undefined8 param_1)

{
  longlong in_RAX;
  longlong unaff_RBP;
  
  *(byte *)(in_RAX + 0x3b) = *(byte *)(in_RAX + 0x3b) ^ (byte)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RBP + 0x54003b68) = *(char *)(unaff_RBP + 0x54003b68) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

