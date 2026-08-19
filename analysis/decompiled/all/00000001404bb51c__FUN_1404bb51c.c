// Function: FUN_1404bb51c
// Addr: 1404bb51c
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404bb552) overlaps instruction at (ram,0x0001404bb550)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404bb5b4) */

void FUN_1404bb51c(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar4;
  undefined8 in_RAX;
  undefined6 uVar5;
  int *piVar2;
  byte bVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  char *unaff_RBX;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar10;
  uint *puVar3;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  uVar5 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar4 = (char)((ulonglong)in_RAX >> 8) + bVar9;
  puVar3 = (uint *)CONCAT62(uVar5,CONCAT11(cVar4 * '\x02',
                                           (byte)in_RAX |
                                           *(byte *)CONCAT62(uVar5,CONCAT11(cVar4,(byte)in_RAX))));
  *puVar3 = *puVar3 | (uint)puVar3;
  *(byte *)((longlong)puVar3 + (longlong)param_1) =
       *(byte *)((longlong)puVar3 + (longlong)param_1) + cVar8;
  piVar2 = (int *)CONCAT62(uVar5,CONCAT11(0x4b,bRam0c00215c2500215b));
  bVar10 = CARRY1(*param_1,bRam0c00215c2500215b);
  *param_1 = *param_1 + bRam0c00215c2500215b;
  iVar7 = (int)param_1 + *piVar2 + (uint)bVar10;
  *unaff_RBX = *unaff_RBX + cVar8;
  uVar1 = (uint)piVar2 | *(uint *)(in_FS_OFFSET + (longlong)piVar2);
  puVar3 = (uint *)(ulonglong)uVar1;
  *unaff_RBX = *unaff_RBX + cVar8;
  bVar6 = (byte)iVar7 ^ *unaff_RDI;
  if (CONCAT31((int3)((uint)iVar7 >> 8),bVar6) == 1 || bVar6 == 0) {
    *unaff_RBX = *unaff_RBX;
    *puVar3 = *puVar3 & (uint)&stack0x00000000;
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11((byte)(uVar1 >> 8) & bVar9,(byte)uVar1));
    *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
    puVar3 = (uint *)(ulonglong)(uVar1 + 0x70000854);
  }
  else {
    *(byte *)puVar3 = (byte)*puVar3 | (byte)uVar1;
  }
  *puVar3 = *puVar3 & (uint)puVar3;
  return;
}

