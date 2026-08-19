// Function: FUN_1404d1d28
// Addr: 1404d1d28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1d28(char *param_1,longlong param_2)

{
  byte bVar1;
  char cVar5;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  *param_1 = *param_1 + unaff_SPL;
  uVar2 = in_EAX + 0xe4050002;
  bVar1 = (byte)uVar2;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | bVar1;
  uVar3 = uVar2 ^ 0x4d1c4800;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + bVar1;
  pcVar4 = (char *)(param_2 + -0x4d15ffcb + unaff_RSI * 4);
  *pcVar4 = *pcVar4 + bVar1;
  pcVar4 = (char *)(ulonglong)uVar2;
  cVar5 = (char)(uVar2 >> 8);
  *param_1 = *param_1 + cVar5;
  *pcVar4 = *pcVar4 + bVar1;
  *pcVar4 = *pcVar4 + cVar5;
  pcVar4 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8),0x35)) + 0x16d80035 +
                   unaff_RSI * 4);
  *pcVar4 = *pcVar4 + bVar1;
  *param_1 = *param_1 + unaff_BL;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) =
       *(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1;
  *unaff_RDI = *unaff_RDI + '5';
  *unaff_RDI = *unaff_RDI + '5';
  pcVar4 = (char *)(ulonglong)((uVar2 ^ 0xd1) + (int)param_1);
  *pcVar4 = *pcVar4 + '5';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

