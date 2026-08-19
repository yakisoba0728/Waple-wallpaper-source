// Function: FUN_1404a87bc
// Addr: 1404a87bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a87bc(char param_1,char *param_2)

{
  char cVar1;
  char cVar5;
  uint in_EAX;
  uint uVar2;
  char *pcVar4;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  uint *puVar3;
  
  *unaff_RDI = *unaff_RDI + param_1;
  uVar2 = (in_EAX ^ 2) + 0x20000354;
  puVar3 = (uint *)(ulonglong)uVar2;
  *param_2 = *param_2 + (char)(uVar2 >> 8);
  pcVar4 = (char *)(unaff_RBX & 0xffffffff);
  unaff_RDI[0x21004a] = unaff_RDI[0x21004a] + (char)uVar2;
  *(char *)puVar3 = (char)*puVar3 + (char)uVar2;
  *(byte *)(unaff_RBP + -0x72ddfff5) = *(byte *)(unaff_RBP + -0x72ddfff5) & (byte)pcVar4;
  uVar2 = uVar2 | *puVar3;
  cVar5 = (char)(uVar2 >> 8);
  *pcVar4 = *pcVar4 + cVar5;
  cVar1 = (char)uVar2;
  *unaff_RSI = *unaff_RSI + cVar1;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + cVar1;
  pcVar4 = (char *)(ulonglong)uVar2;
  pcVar4[unaff_RBX] = pcVar4[unaff_RBX] + (char)param_2;
  pcVar4[(longlong)param_2] = pcVar4[(longlong)param_2] + (char)((ulonglong)param_2 >> 8);
  *pcVar4 = *pcVar4 + cVar5;
  *param_2 = *param_2 + cVar5;
  unaff_RDI[0x4021004a] = unaff_RDI[0x4021004a] + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

