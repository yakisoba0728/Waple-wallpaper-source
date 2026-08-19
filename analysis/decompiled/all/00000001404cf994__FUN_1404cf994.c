// Function: FUN_1404cf994
// Addr: 1404cf994
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf994(char *param_1)

{
  uint uVar1;
  char *in_RAX;
  longlong unaff_RBP;
  char unaff_R12B;
  char *pcVar2;
  
  *in_RAX = *in_RAX + (char)param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  uRam00000001a451f9a8 = uRam00000001a451f9a8 & (uint)in_RAX;
  uVar1 = (uint)in_RAX | 0x3f086000;
  pcVar2 = (char *)(ulonglong)uVar1;
  *(char *)(unaff_RBP + -0x43ffc0f8) = *(char *)(unaff_RBP + -0x43ffc0f8) + (char)param_1;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)in_RAX;
  pcVar2[8] = pcVar2[8] + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

