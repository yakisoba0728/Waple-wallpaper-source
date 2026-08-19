// Function: FUN_1404cc674
// Addr: 1404cc674
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc674(byte *param_1,longlong param_2)

{
  char *pcVar1;
  uint in_EAX;
  longlong unaff_RBP;
  
  *param_1 = *param_1 & (byte)in_EAX;
  pcVar1 = (char *)(unaff_RBP + 0x4c + (ulonglong)(in_EAX ^ 0x3501e900) * 8);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (byte)in_EAX;
  pcVar1 = (char *)(param_2 + ((ulonglong)(in_EAX ^ 0x3501e900) | 5) * 2);
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

