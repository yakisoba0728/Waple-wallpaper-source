// Function: FUN_1404a112c
// Addr: 1404a112c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a112c(char *param_1,byte param_2)

{
  byte *in_RAX;
  char *pcVar1;
  char unaff_SPL;
  longlong unaff_RBP;
  bool bVar2;
  
  *in_RAX = *in_RAX & param_2;
  *param_1 = *param_1 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)(unaff_RBP + -0x48fffc60) = *(char *)(unaff_RBP + -0x48fffc60) + param_2;
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cRam0021004a10040003);
  bVar2 = SCARRY1(*pcVar1,cRam0021004a10040003);
  *pcVar1 = *pcVar1 + cRam0021004a10040003;
  if (!bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

