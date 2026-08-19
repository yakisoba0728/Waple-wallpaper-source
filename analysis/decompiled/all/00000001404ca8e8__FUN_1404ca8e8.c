// Function: FUN_1404ca8e8
// Addr: 1404ca8e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ca8f1) overlaps instruction at (ram,0x0001404ca8f0)
    */

void FUN_1404ca8e8(char *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar10;
  uint in_EAX;
  uint uVar7;
  char *pcVar9;
  byte bVar11;
  char cVar12;
  undefined6 uVar13;
  char cVar14;
  char unaff_BL;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  int iVar3;
  byte *pbVar8;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  uVar13 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar12 = (char)((ulonglong)param_1 >> 8);
  bVar11 = (byte)param_1;
  uVar7 = in_EAX + 0x8001274 + (uint)in_CF;
  pbVar8 = (byte *)(ulonglong)uVar7;
  pbVar1 = pbVar8 + in_FS_OFFSET;
  uVar4 = (uint)(0xf7ffed8b < in_EAX || CARRY4(in_EAX + 0x8001274,(uint)in_CF));
  iVar2 = *(int *)pbVar1;
  iVar3 = *(int *)pbVar1;
  *(uint *)pbVar1 = iVar3 + uVar7 + uVar4;
  if (SCARRY4(iVar2,uVar7) == SCARRY4(iVar3 + uVar7,uVar4)) {
    bVar5 = (byte)uVar7 ^ *pbVar8;
    pbVar8 = (byte *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar5);
    unaff_RDI = unaff_RDI + 4;
    *pbVar8 = *pbVar8 + bVar5;
  }
  else {
    *(char *)(unaff_RDI + 0x32ff) = *(char *)(unaff_RDI + 0x32ff) + cVar12;
  }
  cVar10 = (char)((ulonglong)pbVar8 >> 8);
  *param_1 = *param_1 + cVar10;
  bVar6 = (byte)pbVar8;
  *param_2 = *param_2 | bVar6;
  bVar5 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar11;
  *pbVar8 = *pbVar8 + bVar6 + CARRY1(bVar5,bVar11);
  cVar12 = cVar12 + cVar14;
  *pbVar8 = *pbVar8 + (char)param_2;
  *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar11)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar11)) + cVar10;
  *pbVar8 = *pbVar8 + bVar6;
  *(char *)(unaff_RDI + -0xaffccfd) = *(char *)(unaff_RDI + -0xaffccfd) + cVar12;
  *pbVar8 = *pbVar8 + (char)param_2;
  *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar11)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar11)) + cVar10;
  *pbVar8 = *pbVar8 + bVar6;
  pbVar8[-1] = pbVar8[-1] + cVar14;
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),bVar6 ^ *pbVar8);
  *pcVar9 = *pcVar9 + (bVar6 ^ *pbVar8);
  *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar11)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar11)) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

