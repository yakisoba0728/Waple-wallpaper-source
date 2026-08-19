// Function: FUN_1404d72a0
// Addr: 1404d72a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d732c) overlaps instruction at (ram,0x0001404d732b)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d72ef) */
/* WARNING: Removing unreachable block (ram,0x0001404d72bb) */
/* WARNING: Removing unreachable block (ram,0x0001404d72df) */
/* WARNING: Removing unreachable block (ram,0x0001404d733c) */
/* WARNING: Removing unreachable block (ram,0x0001404d7307) */

void FUN_1404d72a0(char *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte bVar8;
  undefined8 in_RAX;
  uint *puVar6;
  byte *pbVar10;
  byte bVar11;
  char cVar12;
  int unaff_EBX;
  byte *unaff_RSI;
  byte *unaff_RDI;
  bool in_OF;
  char *pcVar7;
  undefined7 uVar9;
  
  cVar3 = cRam3c0040e8160040e7;
  cVar12 = (char)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_2;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  puVar6 = (uint *)CONCAT71(uVar9,cRam3c0040e8160040e7);
  if (!in_OF) {
    *unaff_RDI = *unaff_RDI + cVar12;
    *(byte *)((longlong)puVar6 + (longlong)unaff_RDI) =
         *(byte *)((longlong)puVar6 + (longlong)unaff_RDI) & (byte)param_1;
    uVar5 = (uint)puVar6 ^ 0xdc00384d;
    *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 & uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)unaff_EBX;
  pcVar7 = (char *)(ulonglong)((uint)param_1 & *puVar6);
  *pcVar7 = *pcVar7 + bVar11;
  iRam00000001493d7cb7 = iRam00000001493d7cb7 + unaff_EBX;
  pbVar10 = (byte *)(pcVar7 + -1);
  if (pbVar10 != (byte *)0x0 && iRam00000001493d7cb7 != 0) {
    *(byte *)puVar6 = (byte)*puVar6 ^ (byte)((ulonglong)in_RAX >> 8);
    *unaff_RSI = *unaff_RSI >> 1;
    puVar6 = (uint *)CONCAT71(uVar9,cVar3 + bVar11);
  }
  *(byte *)puVar6 = (byte)*puVar6 << 3 | (byte)*puVar6 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  uVar2 = *puVar6;
  cVar3 = ((byte)puVar6 & bVar11) + bVar11;
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)puVar6 >> 8),cVar3);
  *pcVar7 = *pcVar7 + cVar3;
  bVar11 = *pbVar10;
  bVar8 = (byte)((ulonglong)puVar6 >> 8);
  *pbVar10 = *pbVar10 + bVar8;
  uVar5 = (uint)CARRY1(bVar11,bVar8);
  uVar1 = (uint)pcVar7 + 0xd4150004;
  iVar4 = uVar1 + uVar5;
  *unaff_RDI = *unaff_RDI | cVar12 + (byte)uVar2;
  unaff_RDI[CONCAT31((int3)((uint)iVar4 >> 8),
                     (char)iVar4 - (0x2beafffb < (uint)pcVar7 || CARRY4(uVar1,uVar5)))] =
       unaff_RDI[CONCAT31((int3)((uint)iVar4 >> 8),
                          (char)iVar4 - (0x2beafffb < (uint)pcVar7 || CARRY4(uVar1,uVar5)))] &
       (byte)pbVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

