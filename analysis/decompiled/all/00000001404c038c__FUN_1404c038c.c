// Function: FUN_1404c038c
// Addr: 1404c038c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c038c(undefined1 *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong in_RAX;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  undefined7 uVar7;
  uint *unaff_RSI;
  char *unaff_RDI;
  
  uVar7 = (undefined7)((ulonglong)param_2 >> 8);
  cVar6 = (char)param_2;
  pcVar4 = (char *)(in_RAX & 0xffffffffffffff26);
  *pcVar4 = *pcVar4 - (char)pcVar4;
  *param_1 = *param_1;
  *unaff_RDI = *unaff_RDI + (char)unaff_RDI;
  *unaff_RDI = *unaff_RDI + cVar6;
  *unaff_RDI = *unaff_RDI - (char)unaff_RDI;
  pcVar5 = (char *)((ulonglong)unaff_RDI & 0xffffffffffffff26);
  *pcVar5 = *pcVar5 - (char)pcVar5;
  *param_1 = *param_1;
  uVar3 = (int)pcVar4 + 0x74050002;
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
  *unaff_RSI = *unaff_RSI & (uint)param_1 & *(uint *)CONCAT71(uVar7,cVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

