// Function: FUN_1404b8af4
// Addr: 1404b8af4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8b4d) overlaps instruction at (ram,0x0001404b8b49)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b8b5a) */

void FUN_1404b8af4(int *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_RAX;
  undefined7 uVar10;
  byte *pbVar9;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  uint *puVar7;
  char *pcVar8;
  
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (char)in_RAX + unaff_BH;
  *(byte *)CONCAT71(uVar10,bVar3) = *(byte *)CONCAT71(uVar10,bVar3) | bVar3;
  cVar4 = bVar3 + (char)((ulonglong)param_1 >> 8);
  puVar7 = (uint *)CONCAT71(uVar10,cVar4);
  *puVar7 = *puVar7 | (uint)puVar7;
  bVar3 = cVar4 + unaff_BL;
  cVar4 = (char)param_1;
  puVar7 = (uint *)CONCAT71(uVar10,(bVar3 | *(byte *)CONCAT71(uVar10,bVar3)) + cVar4);
  uVar5 = (uint)puVar7 | *puVar7;
  *(char *)((ulonglong)uVar5 - 0x57fffff4) = *(char *)((ulonglong)uVar5 - 0x57fffff4) + unaff_BH;
  uVar6 = uVar5 | 0xe980000;
  pcVar8 = (char *)(ulonglong)uVar6;
  bVar3 = (byte)uVar5;
  *pcVar8 = *pcVar8 + bVar3;
  *unaff_RDI = cVar4;
  *pcVar8 = *pcVar8 + bVar3;
  if (-1 < *pcVar8) {
    *pcVar8 = *pcVar8 + bVar3;
    *(undefined1 *)(ulonglong)(uVar6 & 0x26d40000) = *(undefined1 *)(ulonglong)(uVar6 & 0x26d40000);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = *pcVar8;
  *pcVar8 = *pcVar8 + bVar3;
  if (*pcVar8 == '\0') {
    if (SCARRY1(cVar1,bVar3)) {
      *(byte *)((longlong)param_1 + -1) = *(byte *)((longlong)param_1 + -1) ^ (byte)(uVar5 >> 8);
      pbVar9 = (byte *)((ulonglong)uVar6 * 2);
      bVar2 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar3;
      pcVar8 = (char *)((ulonglong)uVar6 - 0x77f9fffc);
      *pcVar8 = *pcVar8 + unaff_BL + CARRY1(bVar2,bVar3);
      uVar6 = uVar6 + 0x1ea31000;
      pbVar9 = (byte *)(ulonglong)uVar6;
      bVar3 = *pbVar9;
      uRam0021004b8a70001e = uVar6;
      *pbVar9 = *pbVar9 + (byte)uVar6;
      pcVar8 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x5c2affe2);
      *pcVar8 = *pcVar8 + (char)(uVar6 >> 8) + CARRY1(bVar3,(byte)uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar8 = *pcVar8 + bVar3;
  *(uint *)(pcVar8 + in_FS_OFFSET) = *(int *)(pcVar8 + in_FS_OFFSET) - uVar6;
  *(char *)(param_2 + unaff_RBP) = *(char *)(param_2 + unaff_RBP) + (char)param_2;
  cVar1 = cRam94001e8aeb001e8a;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (int)param_1;
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + (int)&stack0x00000000;
  uVar5 = CONCAT31((int3)(uVar6 >> 8),cVar1);
  if (cVar1 < '\0') {
    *param_1 = *param_1 + (int)param_2;
    *(char *)param_1 = (char)*param_1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_BL;
  *(int *)(ulonglong)uVar5 = *(int *)(ulonglong)uVar5 + uVar5 + (uint)CARRY1(bVar3,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

