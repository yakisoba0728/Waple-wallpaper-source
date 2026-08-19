// Function: FUN_1404ae100
// Addr: 1404ae100
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ae115) overlaps instruction at (ram,0x0001404ae114)
    */

void FUN_1404ae100(char *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  byte *in_RAX;
  ulonglong uVar3;
  char *pcVar4;
  byte *pbVar5;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  byte *unaff_RDI;
  ulonglong uStack_8;
  
  *(int *)in_RAX = *(int *)in_RAX + unaff_EBX;
  *in_RAX = *in_RAX | (byte)in_RAX;
  *param_1 = *param_1 - (byte)in_RAX;
  uVar2 = (uint)in_RAX ^ 0x7f00900;
  pbVar5 = (byte *)(param_1 + -1);
  if (pbVar5 == (byte *)0x0 || uVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = *(char *)((ulonglong)uVar2 + 1);
  uVar3 = (ulonglong)uVar2 & 0xffffffffffffff0b;
  uStack_8 = uVar3;
  *(int *)(pbVar5 + CONCAT44(unaff_0000001c,unaff_EBX)) =
       *(int *)(pbVar5 + CONCAT44(unaff_0000001c,unaff_EBX)) + (int)&uStack_8;
  *(char *)((longlong)&uStack_8 + unaff_RSI) =
       *(char *)((longlong)&uStack_8 + unaff_RSI) + (char)(uVar3 >> 8);
  *pbVar5 = *pbVar5 | (byte)uVar3;
  pcVar4 = (char *)((ulonglong)uVar2 & 0xffffffffffffff01);
  *pcVar4 = *pcVar4 + '\x01';
  uVar2 = (int)pcVar4 + 0x11e013f0;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  *(int *)pbVar5 = *(int *)pbVar5 + CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

