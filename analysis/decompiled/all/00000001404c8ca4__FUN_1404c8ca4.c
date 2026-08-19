// Function: FUN_1404c8ca4
// Addr: 1404c8ca4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c8cd6) overlaps instruction at (ram,0x0001404c8cd4)
    */

void FUN_1404c8ca4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  longlong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong unaff_RBP;
  uint *puVar5;
  
  uVar6 = (ulonglong)*(uint *)(in_RAX * 2 + 1);
  uVar4 = (uint)in_RAX | *(uint *)(in_RAX * 2);
  puVar5 = (uint *)(ulonglong)uVar4;
  uVar10 = (ulonglong)((uint)&stack0x00000000 | *(uint *)(param_2 + uVar6));
  uVar8 = (uint)param_2 | *(uint *)(param_2 + 7);
  lVar7 = uVar6 - 1;
  if (lVar7 == 0 || uVar8 == 0) {
    bVar9 = (byte)(uVar8 >> 8) | *(byte *)(lVar7 * 2);
    uVar4 = CONCAT31((int3)(uVar4 >> 8),(byte)uVar4 | *(byte *)((longlong)puVar5 * 2)) + 0x10000834;
    puVar5 = (uint *)(ulonglong)uVar4;
    *(undefined8 *)(uVar10 - 8) = 0x31;
    *(char *)(unaff_RBP + 0x6a) = *(char *)(unaff_RBP + 0x6a) + (char)lVar7;
    *puVar5 = *puVar5 ^ uVar4;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)*puVar5);
    pbVar3 = (byte *)(lVar7 * 2);
    bVar2 = *pbVar3;
    *pbVar3 = *pbVar3 + bVar9;
    pcVar1 = (char *)((ulonglong)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(bVar9,(char)uVar8)) + 0x31
                     );
    *pcVar1 = *pcVar1 + (char)((ulonglong)lVar7 >> 8) + CARRY1(bVar2,bVar9);
    *(char *)(unaff_RBP + 0x6a) = *(char *)(unaff_RBP + 0x6a) + (char)lVar7;
    *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 ^ uVar4;
  }
  else {
    *puVar5 = *puVar5 ^ uVar4;
    *(undefined8 *)(uVar10 - 8) = 0x31;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

