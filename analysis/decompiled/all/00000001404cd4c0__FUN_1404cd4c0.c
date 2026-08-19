// Function: FUN_1404cd4c0
// Addr: 1404cd4c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd4c0(char *param_1)

{
  uint in_EAX;
  byte unaff_BL;
  undefined4 unaff_EBP;
  
  *(undefined4 *)param_1 = unaff_EBP;
  *(byte *)((ulonglong)in_EAX + 0x4b) = *(byte *)((ulonglong)in_EAX + 0x4b) & unaff_BL;
  *param_1 = *param_1 + (char)((uint)unaff_EBP >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

