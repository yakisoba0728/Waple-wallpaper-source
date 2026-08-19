// Function: FUN_1404c84ec
// Addr: 1404c84ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c84fd) overlaps instruction at (ram,0x0001404c84fc)
    */

void FUN_1404c84ec(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *in_RAX;
  byte bVar5;
  byte *pbVar6;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  byte *unaff_RDI;
  byte in_CF;
  uint *puVar4;
  
  *(int *)(param_1 + unaff_RSI) = *(int *)(param_1 + unaff_RSI) + (int)in_RAX + (uint)in_CF;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x21004a +
                   CONCAT71(unaff_00000019,unaff_BL));
  *pcVar1 = *pcVar1 + (char)param_1;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar6 = (byte *)(param_1 + -1);
  if (pbVar6 != (byte *)0x0 && (char)*in_RAX != '\0') {
    in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '1');
  }
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  *(uint *)(pbVar6 + unaff_RSI) = *(int *)(pbVar6 + unaff_RSI) + (uint)in_RAX;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1901004a +
                   CONCAT71(unaff_00000019,unaff_BL));
  *pcVar1 = *pcVar1 + (byte)pbVar6;
  uVar2 = *in_RAX;
  *(int *)(&stack0x00000000 + param_2) = *(int *)(&stack0x00000000 + param_2) - (int)unaff_RSI;
  bVar5 = *pbVar6;
  *pbVar6 = *pbVar6 + unaff_BL;
  uVar3 = (int)param_2 + 0x11e013f0 + (uint)CARRY1(bVar5,unaff_BL);
  puVar4 = (uint *)(ulonglong)uVar3;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(int *)((longlong)puVar4 + 0x54a8000a) = *(int *)((longlong)puVar4 + 0x54a8000a) + unaff_EBP;
  *(byte *)puVar4 = (byte)*puVar4 | (byte)uVar3;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + ((byte)in_RAX | (byte)uVar2);
  bVar5 = (byte)pbVar6 ^ *unaff_RDI;
  if (CONCAT71((int7)((ulonglong)pbVar6 >> 8),bVar5) == 1 || bVar5 == 0) {
    *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) =
         *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL);
    uRam000000013451853c = uRam000000013451853c & uVar3;
    *puVar4 = *puVar4 | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar4 = *puVar4 ^ uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

