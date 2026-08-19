// Function: FUN_1404ca934
// Addr: 1404ca934
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ca962) overlaps instruction at (ram,0x0001404ca961)
    */

void FUN_1404ca934(uint *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte bVar8;
  int *in_RAX;
  byte *pbVar7;
  char *pcVar9;
  byte bVar10;
  char cVar11;
  undefined6 uVar12;
  uint *unaff_RBX;
  uint unaff_ESP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  byte in_CF;
  uint uVar3;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar11 = (char)((ulonglong)param_2 >> 8);
  uVar2 = *param_1;
  uVar6 = (uint)in_RAX;
  uVar3 = *param_1;
  *param_1 = (uVar3 - uVar6) - (uint)in_CF;
  *in_RAX = (*in_RAX - uVar6) - (uint)(uVar2 < uVar6 || uVar3 - uVar6 < (uint)in_CF);
  uVar6 = uVar6 | 0x9e00bf0;
  pbVar7 = (byte *)(ulonglong)uVar6;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  bVar10 = (char)param_2 + pbVar7[0x20];
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
  pbVar7[0x19000000] = pbVar7[0x19000000] + cVar11;
  bVar5 = (byte)uVar6;
  *unaff_RDI = *unaff_RDI & bVar5;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)param_1;
  piVar1 = (int *)((longlong)pbVar7 * 2 + 7);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + unaff_ESI;
  pcVar9 = (char *)((longlong)param_1 + -1);
  if (pcVar9 == (char *)0x0 || *piVar1 == 0) {
    if (!SCARRY4(iVar4,unaff_ESI)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar7 = *pbVar7 ^ bVar5;
    *pbVar7 = *pbVar7 + (char)(uVar6 >> 8);
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
    pbVar7[3] = pbVar7[3] + cVar11;
  }
  else {
    cVar11 = cVar11 + *pbVar7;
    *pbVar7 = *pbVar7 + bVar5;
    pbVar7 = (byte *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar5 & bVar10);
    pbVar7[3] = pbVar7[3] + cVar11;
  }
  *pbVar7 = *pbVar7 + (char)pbVar7;
  uRam000000013471a978 = uRam000000013471a978 & unaff_ESP;
  bVar5 = (char)pbVar7 - 0x2c;
  bVar8 = (byte)((ulonglong)pbVar7 >> 8) | bVar5;
  pbVar7 = (byte *)CONCAT62((int6)((ulonglong)pbVar7 >> 0x10),CONCAT11(bVar8,bVar5));
  *pbVar7 = *pbVar7 | 0x33;
  cRam00000000c04cdc8e = cRam00000000c04cdc8e + bVar10;
  *pcVar9 = *pcVar9 + bVar8;
  *pbVar7 = *pbVar7 + bVar5;
  pbVar7[0x15003308] = pbVar7[0x15003308] + bVar5;
  *unaff_RBX = *unaff_RBX | unaff_ESI;
  pbVar7[0x1004ca8] = pbVar7[0x1004ca8] + bVar5;
  *(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) + (char)pcVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

