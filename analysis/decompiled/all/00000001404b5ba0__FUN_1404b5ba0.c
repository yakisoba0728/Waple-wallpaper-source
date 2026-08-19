// Function: FUN_1404b5ba0
// Addr: 1404b5ba0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b5bca) overlaps instruction at (ram,0x0001404b5bc8)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b5bca) */

void FUN_1404b5ba0(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  char *pcVar5;
  uint uVar6;
  byte *pbVar8;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  bool bVar9;
  undefined8 unaff_retaddr;
  byte *pbVar4;
  uint *puVar7;
  
  pbVar8 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),(byte)param_2 | *(byte *)(param_2 + 6));
  uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | *(byte *)(param_1 * 2),
                                 (char)in_RAX)) + 0x34050002;
  pbVar4 = (byte *)(ulonglong)uVar3;
  *pbVar4 = *pbVar4 | (byte)uVar3;
  bVar1 = (byte)uVar3 - *pbVar4;
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar1);
  param_1 = param_1 + -1;
  if (param_1 != 0 && bVar1 != 0) {
    *pbVar8 = *pbVar8 | bVar1;
    *pcVar5 = *pcVar5 + (char)param_1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar2 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8) + (char)param_1,bVar1));
  *param_4 = *param_4 + bVar1;
  uVar6 = (int)param_1 - *(int *)(ulonglong)uVar2;
  puVar7 = (uint *)(ulonglong)uVar6;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH ^ unaff_BL,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH ^ unaff_BL,unaff_BL)) + (char)(uVar6 >> 8)
  ;
  uVar3 = *puVar7;
  *puVar7 = *puVar7 + uVar6;
  bVar9 = bVar1 < 0xe0 || (byte)(bVar1 + 0x20) < CARRY4(uVar3,uVar6);
  pcVar5 = (char *)((ulonglong)CONCAT31((int3)(uVar2 >> 8),-bVar9) + 0x17);
  *pcVar5 = (*pcVar5 - (char)((ulonglong)unaff_retaddr >> 8)) - bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

