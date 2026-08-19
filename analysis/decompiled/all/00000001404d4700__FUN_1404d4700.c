// Function: FUN_1404d4700
// Addr: 1404d4700
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d473b) overlaps instruction at (ram,0x0001404d473a)
    */

void FUN_1404d4700(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *in_RAX;
  char *pcVar4;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined7 uVar9;
  byte *unaff_RSI;
  byte *unaff_RDI;
  bool in_CF;
  ulonglong unaff_retaddr;
  char *pcVar5;
  
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  cVar7 = (char)((ulonglong)param_1 >> 8);
  bVar6 = (byte)param_1;
  if (in_CF) {
    *(char *)in_RAX = (char)*in_RAX + cVar7;
    in_RAX = (int *)(ulonglong)((int)in_RAX + 0x8affb2ba);
  }
  *(char *)(param_1 + -0x577fb9fd) = *(char *)(param_1 + -0x577fb9fd) + (char)in_RAX;
  pcVar4 = (char *)((ulonglong)(uint)((int)in_RAX - *in_RAX) | 0xbc);
  unaff_RSI[2] = unaff_RSI[2] + bVar6;
  *pcVar4 = (*pcVar4 - (char)pcVar4) - ((unaff_retaddr & 1) != 0);
  iVar2 = func_0x00018a4d671b();
  uVar3 = iVar2 + 0xfee3fff6;
  pcVar5 = (char *)(ulonglong)uVar3;
  cRam000000014a2d5315 = cRam000000014a2d5315 + param_4;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar1 = pcVar5[0x40];
  *unaff_RSI = *unaff_RSI >> (bVar6 & 0x1f);
  unaff_RSI[(longlong)pcVar5 * 2 + 0x4d] = unaff_RSI[(longlong)pcVar5 * 2 + 0x4d] + cVar7;
  pcVar4 = (char *)(CONCAT71(uVar9,cVar8 + cVar1) + 2);
  *pcVar4 = *pcVar4 + (char)(uVar3 >> 8);
  *pcVar5 = *pcVar5 + (char)uVar3;
  cRam00000001b54d9488 = cRam00000001b54d9488 - cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

