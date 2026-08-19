// Function: FUN_1404b4910
// Addr: 1404b4910
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b491c) overlaps instruction at (ram,0x0001404b491b)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b493e) */

void FUN_1404b4910(longlong param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  ulonglong uVar6;
  undefined1 uVar8;
  byte bVar9;
  undefined6 uVar10;
  longlong unaff_RBP;
  uint uVar5;
  uint *puVar7;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar8 = SUB81(param_2,0);
  *param_2 = *param_2 + (uint)param_1;
  uVar6 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                   CONCAT11((byte)((ulonglong)in_RAX >> 8) | *(byte *)(unaff_RBP + param_1),
                            (char)in_RAX));
  bVar9 = (byte)((ulonglong)param_2 >> 8) | *(byte *)((longlong)param_2 + 6);
  while( true ) {
    bVar3 = (byte)uVar6 | *(byte *)(uVar6 * 2);
    uVar5 = (uint)CONCAT71((int7)(CONCAT62((int6)(uVar6 >> 0x10),CONCAT11((char)(uVar6 >> 8),bVar3))
                                 >> 8),bVar3);
    uVar4 = uVar5 + 0x60000a34;
    puVar7 = (uint *)(ulonglong)uVar4;
    out(CONCAT11(bVar9,uVar8),(char)uVar4);
    uVar2 = (uint)(0x9ffff5cb < uVar5);
    uVar5 = *puVar7;
    uVar1 = *puVar7;
    *puVar7 = (uVar1 - uVar4) - uVar2;
    if ((int)*puVar7 < 0) break;
    *(uint *)CONCAT62(uVar10,CONCAT11(bVar9,uVar8)) =
         *(uint *)CONCAT62(uVar10,CONCAT11(bVar9,uVar8)) & (uint)param_1;
    uVar6 = (ulonglong)uVar4;
  }
  *puVar7 = (*puVar7 - uVar4) - (uint)(uVar5 < uVar4 || uVar1 - uVar4 < uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

