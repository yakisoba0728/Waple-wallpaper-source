// Function: FUN_1404bdf94
// Addr: 1404bdf94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdf94(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char *in_RAX;
  longlong unaff_RBP;
  
  in_RAX[param_1] = in_RAX[param_1] + (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)(unaff_RBP + 0x1a21004b + (ulonglong)((uint)in_RAX & 0x25a72800));
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

