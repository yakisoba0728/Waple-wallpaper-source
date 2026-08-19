// Function: FUN_1404a951c
// Addr: 1404a951c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a951c(char *param_1,int param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  char *pcVar4;
  undefined1 uVar5;
  char unaff_SPL;
  int *unaff_RSI;
  
  uVar5 = (undefined1)((ulonglong)param_1 >> 8);
  uVar3 = in_EAX + 0x30000874;
  pcVar4 = (char *)(ulonglong)uVar3;
  *(undefined1 *)(unaff_RSI + -0x3dcfffd) = uVar5;
  *param_4 = *param_4 + unaff_SPL;
  bVar2 = (byte)uVar3;
  *pcVar4 = *pcVar4 + bVar2;
  *pcVar4 = *pcVar4 + (char)((uint)param_2 >> 8);
  *(undefined1 *)(unaff_RSI + -0x3dcfffd) = uVar5;
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar2;
  *unaff_RSI = *unaff_RSI + uVar3 + (uint)CARRY1(bVar1,bVar2);
  *param_1 = *param_1 + (char)param_2;
  iRam0000000144ba9a47 = iRam0000000144ba9a47 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

