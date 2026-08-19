// Function: FUN_1404b5b8c
// Addr: 1404b5b8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b5bca) overlaps instruction at (ram,0x0001404b5bc8)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b5bca) */

void FUN_1404b5b8c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  undefined7 uVar6;
  char *pcVar5;
  uint uVar7;
  byte *pbVar9;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 unaff_RBP;
  bool bVar10;
  byte *pbVar4;
  uint *puVar8;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar3 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (-0x23 - *(char *)CONCAT71(uVar6,0xdd)) - CARRY1((byte)uVar3,(byte)in_RAX);
  *param_1 = *param_1 + bVar2;
  pbVar9 = (byte *)CONCAT71(0x94001a,bRam0000000094001ae4 | 0xde);
  uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | *(byte *)((longlong)param_1 * 2),
                                 bVar2 | *(byte *)(CONCAT71(uVar6,bVar2) * 2))) + 0x34050002;
  pbVar4 = (byte *)(ulonglong)uVar3;
  *pbVar4 = *pbVar4 | (byte)uVar3;
  bVar2 = (byte)uVar3 - *pbVar4;
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
  param_1 = param_1 + -1;
  if (param_1 != (char *)0x0 && bVar2 != 0) {
    *pbVar9 = *pbVar9 | bVar2;
    *pcVar5 = *pcVar5 + (char)param_1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8) + (char)param_1,bVar2));
  *param_4 = *param_4 + bVar2;
  uVar7 = (int)param_1 - *(int *)(ulonglong)uVar1;
  puVar8 = (uint *)(ulonglong)uVar7;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH ^ unaff_BL,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH ^ unaff_BL,unaff_BL)) + (char)(uVar7 >> 8)
  ;
  uVar3 = *puVar8;
  *puVar8 = *puVar8 + uVar7;
  bVar10 = bVar2 < 0xe0 || (byte)(bVar2 + 0x20) < CARRY4(uVar3,uVar7);
  pcVar5 = (char *)((ulonglong)CONCAT31((int3)(uVar1 >> 8),-bVar10) + 0x17);
  *pcVar5 = (*pcVar5 - (char)((ulonglong)unaff_RBP >> 8)) - bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

