// Function: FUN_1404ca980
// Addr: 1404ca980
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca980(char *param_1,char *param_2)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  uint *unaff_RBX;
  uint unaff_ESI;
  byte in_CF;
  char *pcVar3;
  
  uVar2 = in_EAX + -0x7fffccf7 + (uint)in_CF;
  pcVar3 = (char *)(ulonglong)uVar2;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  cVar1 = (char)uVar2;
  *pcVar3 = *pcVar3 + cVar1;
  pcVar3[0x15003308] = pcVar3[0x15003308] + cVar1;
  *unaff_RBX = *unaff_RBX | unaff_ESI;
  pcVar3[0x1004ca8] = pcVar3[0x1004ca8] + cVar1;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

