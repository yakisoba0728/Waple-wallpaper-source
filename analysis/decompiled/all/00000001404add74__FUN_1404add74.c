// Function: FUN_1404add74
// Addr: 1404add74
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404add99) overlaps instruction at (ram,0x0001404add98)
    */
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_1404add74(char *param_1,byte *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint3 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  byte bVar9;
  undefined8 in_RAX;
  uint *puVar7;
  byte *pbVar8;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong in_FS_OFFSET;
  char in_CF;
  
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x3c + in_CF);
  uVar6 = (uint)puVar7 | *puVar7 | 0x4001054;
  pbVar8 = (byte *)((ulonglong)uVar6 ^ 0xf);
  pbVar1 = pbVar8 + -0x57ffed89;
  bVar2 = *pbVar1;
  bVar9 = (byte)(uVar6 >> 8);
  *pbVar1 = *pbVar1 + bVar9;
  bVar4 = (byte)pbVar8;
  uVar3 = (uint3)(uVar6 >> 8);
  if (CARRY1(bVar2,bVar9) || *pbVar1 == 0) {
    pbVar8[-0x1c] = pbVar8[-0x1c] + (char)((ulonglong)param_2 >> 8);
    *param_4 = *param_4;
    *param_2 = *param_2 | bVar4;
    bVar2 = *pbVar8;
    *pbVar8 = *pbVar8 + (byte)param_1;
    *(uint *)(pbVar8 + in_FS_OFFSET) =
         *(int *)(pbVar8 + in_FS_OFFSET) + (int)pbVar8 + (uint)CARRY1(bVar2,(byte)param_1);
    return CONCAT31(uVar3,bVar4 + *pbVar8);
  }
  if (-1 < (char)*pbVar1) {
    (&stack0x0021004a)[CONCAT44(unaff_0000001c,unaff_EBX) * 8] =
         (&stack0x0021004a)[CONCAT44(unaff_0000001c,unaff_EBX) * 8] + (char)param_2;
    *pbVar8 = *pbVar8 + bVar4;
    pbVar8 = (byte *)((ulonglong)uVar3 << 8);
  }
  cVar5 = in(0x49);
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),cVar5);
  *param_1 = *param_1 + cVar5;
  *puVar7 = *puVar7 | (uint)puVar7;
  *puVar7 = *puVar7 + unaff_EBX;
  *param_2 = *param_2 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

