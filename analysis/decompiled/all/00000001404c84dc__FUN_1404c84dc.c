// Function: FUN_1404c84dc
// Addr: 1404c84dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c84fd) overlaps instruction at (ram,0x0001404c84fc)
    */

void FUN_1404c84dc(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  char *in_RAX;
  uint *puVar5;
  byte bVar8;
  longlong lVar9;
  byte *pbVar10;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RSI;
  byte *unaff_RDI;
  undefined2 in_DS;
  uint *puVar6;
  undefined7 uVar7;
  
  cVar3 = (char)in_RAX + *in_RAX;
  uVar7 = (undefined7)
          (CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                    CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar3,cVar3)) >> 8);
  lVar9 = param_1 + -1;
  if (lVar9 != 0 && cVar3 != '\0') {
    cVar3 = cVar3 + '1';
  }
  puVar5 = (uint *)CONCAT71(uVar7,cVar3);
  uRam00000001406d852c = in_DS;
  *puVar5 = *puVar5 ^ (uint)puVar5;
  *(int *)(lVar9 + unaff_RSI) = *(int *)(lVar9 + unaff_RSI) + (uint)puVar5;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x21004a +
                   CONCAT71(unaff_00000019,unaff_BL));
  *pcVar1 = *pcVar1 + (char)lVar9;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  pbVar10 = (byte *)(param_1 + -2);
  if (pbVar10 != (byte *)0x0 && (char)*puVar5 != '\0') {
    puVar5 = (uint *)CONCAT71(uVar7,cVar3 + '1');
  }
  *puVar5 = *puVar5 ^ (uint)puVar5;
  *(uint *)(pbVar10 + unaff_RSI) = *(int *)(pbVar10 + unaff_RSI) + (uint)puVar5;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1901004a +
                   CONCAT71(unaff_00000019,unaff_BL));
  *pcVar1 = *pcVar1 + (byte)pbVar10;
  uVar2 = *puVar5;
  *(int *)(&stack0x00000000 + param_2) = *(int *)(&stack0x00000000 + param_2) - (int)unaff_RSI;
  bVar8 = *pbVar10;
  *pbVar10 = *pbVar10 + unaff_BL;
  uVar4 = (int)param_2 + 0x11e013f0 + (uint)CARRY1(bVar8,unaff_BL);
  puVar6 = (uint *)(ulonglong)uVar4;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(int *)((longlong)puVar6 + 0x54a8000a) = *(int *)((longlong)puVar6 + 0x54a8000a) + unaff_EBP;
  *(byte *)puVar6 = (byte)*puVar6 | (byte)uVar4;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + ((byte)puVar5 | (byte)uVar2);
  bVar8 = (byte)pbVar10 ^ *unaff_RDI;
  if (CONCAT71((int7)((ulonglong)pbVar10 >> 8),bVar8) == 1 || bVar8 == 0) {
    *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL) =
         *(undefined1 *)CONCAT71(unaff_00000019,unaff_BL);
    uRam000000013451853c = uRam000000013451853c & uVar4;
    *puVar6 = *puVar6 | uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar6 = *puVar6 ^ uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

