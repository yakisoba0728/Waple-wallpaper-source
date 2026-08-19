// Function: FUN_1404c03a0
// Addr: 1404c03a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c03a0(undefined1 *param_1,uint *param_2)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  uint *unaff_RSI;
  int unaff_EDI;
  char *pcVar4;
  
  *param_1 = *param_1;
  uVar3 = unaff_EDI + 0x74050002;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
  *(undefined1 *)unaff_RSI = 0;
  uVar1 = (undefined3)(uVar3 >> 8);
  cVar2 = (byte)uVar3 + (char)((ulonglong)param_1 >> 8);
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  *pcVar4 = *pcVar4 - cVar2;
  *param_1 = *param_1;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,cVar2 * '\x02');
  *pcVar4 = *pcVar4 + cVar2 * -2;
  func_0x00017c4c2beb();
  *unaff_RSI = *unaff_RSI & (uint)param_1 & *param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

