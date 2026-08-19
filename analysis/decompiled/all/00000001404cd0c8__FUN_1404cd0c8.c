// Function: FUN_1404cd0c8
// Addr: 1404cd0c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd0c8(char *param_1,uint param_2)

{
  char *pcVar1;
  byte bVar4;
  int in_EAX;
  uint uVar2;
  char cVar5;
  uint *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char *pcVar3;
  
  *unaff_RBX = *unaff_RBX & param_2;
  uVar2 = in_EAX + 0x30000b34U ^ 0x35a64f00;
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar1 = (char *)(unaff_RBP + unaff_RDI + 0x4b);
  *pcVar1 = *pcVar1 + (char)param_2;
  bVar4 = (byte)(uVar2 >> 8);
  *param_1 = *param_1 + bVar4;
  *(char *)((longlong)pcVar3 * 2) = *(char *)((longlong)pcVar3 * 2) + (char)(in_EAX + 0x30000b34U);
  pcVar3[unaff_RSI + 1] = pcVar3[unaff_RSI + 1] + bVar4;
  cVar5 = (char)(param_2 >> 8);
  *(char *)((longlong)unaff_RBX + (longlong)param_1) =
       *(char *)((longlong)unaff_RBX + (longlong)param_1) + cVar5;
  *pcVar3 = *pcVar3 + cVar5;
  pcVar1 = (char *)(unaff_RBP + unaff_RDI + 0x4c);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_1 = *param_1 + (bVar4 ^ 0x4f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

