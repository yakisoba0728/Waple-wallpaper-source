// Function: FUN_1404ad6ac
// Addr: 1404ad6ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad6cb) overlaps instruction at (ram,0x0001404ad6ca)
    */

void FUN_1404ad6ac(longlong param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char *in_RAX;
  uint *puVar5;
  uint *puVar6;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  uint uVar7;
  undefined8 unaff_RBP;
  bool bVar8;
  
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & param_2;
  uVar7 = (uint)&stack0x00000000;
  puVar6 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | (byte)param_2,
                                     ((char)in_RAX - *in_RAX) - CARRY4(uVar7,uVar7)));
  uVar3 = (uint)puVar6 - *puVar6;
  puVar5 = (uint *)(ulonglong)uVar3;
  uVar2 = (uint)((uint)puVar6 < *puVar6);
  bVar8 = CARRY4(*puVar5,uVar3) || CARRY4(*puVar5 + uVar3,uVar2);
  *puVar5 = *puVar5 + uVar3 + uVar2;
  if (-1 < (int)*puVar5) {
    pbVar1 = (byte *)(param_1 + -3);
    bVar8 = CARRY1(*pbVar1,unaff_BH);
    *pbVar1 = *pbVar1 + unaff_BH;
  }
  *puVar5 = *puVar5 + uVar3 + (uint)bVar8;
  *(undefined8 *)(ulonglong)(uVar7 * 2) = unaff_RBP;
  *puVar5 = *puVar5 & (uint)param_1;
  bVar4 = (char)uVar3 + (char)*puVar5;
  bVar8 = false;
  uVar2 = CONCAT31((int3)(CONCAT22((short)(uVar3 >> 0x10),CONCAT11((byte)(uVar3 >> 8) | bVar4,bVar4)
                                  ) >> 8),bVar4);
  puVar6 = (uint *)(ulonglong)uVar2;
  if (-1 < (char)bVar4) {
    pbVar1 = (byte *)(param_1 + -3);
    bVar8 = CARRY1(*pbVar1,unaff_BH);
    *pbVar1 = *pbVar1 + unaff_BH;
  }
  uVar3 = *puVar6;
  uVar7 = *puVar6;
  *puVar6 = uVar7 + uVar2 + (uint)bVar8;
  do {
  } while (*puVar6 == 0);
  *puVar6 = *puVar6 + uVar2 + (uint)(CARRY4(uVar3,uVar2) || CARRY4(uVar7 + uVar2,(uint)bVar8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

