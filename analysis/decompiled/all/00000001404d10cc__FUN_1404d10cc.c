// Function: FUN_1404d10cc
// Addr: 1404d10cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d1118) overlaps instruction at (ram,0x0001404d1117)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d1117) */

void FUN_1404d10cc(byte *param_1,undefined8 param_2,char *param_3,char param_4)

{
  char *pcVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  byte bVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RBP;
  int unaff_ESI;
  uint *puVar10;
  byte *unaff_RDI;
  byte unaff_R12B;
  
  puVar10 = (uint *)(ulonglong)(unaff_ESI + *in_RAX);
  bVar7 = (char)param_2 + (byte)in_RAX[0x14];
  uVar4 = *in_RAX;
  bVar5 = (byte)param_1;
  *(byte *)in_RAX = (byte)*in_RAX + bVar5;
  *unaff_RBP = *unaff_RBP + bVar5 + CARRY1((byte)uVar4,bVar5);
  bVar3 = *param_1;
  *param_1 = *param_1 - bVar7;
  *unaff_RBP = *unaff_RBP + bVar5 + (bVar3 < bVar7);
  uVar8 = (uint)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x2b,bVar7)) & *in_RAX;
  *param_3 = *param_3 + param_4;
  bVar7 = (byte)uVar8 | *(byte *)((longlong)in_RAX + 0x76);
  puVar9 = (uint *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar7);
  *(byte *)puVar10 = (byte)*puVar10;
  *(byte *)((longlong)in_RAX + 0x6e) = *(byte *)((longlong)in_RAX + 0x6e) + unaff_BL;
  *(byte *)((longlong)in_RAX + -0x45efffd5) = *(byte *)((longlong)in_RAX + -0x45efffd5) - 2;
  uVar4 = (int)in_RAX + 0xee045c08;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4);
  *puVar9 = *puVar9 | uVar4;
  *(byte *)puVar10 = (byte)*puVar10 | (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_BL;
  uVar4 = uVar4 | *puVar10;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar5;
  uVar2 = (undefined3)(uVar4 >> 8);
  bVar3 = (byte)uVar4 ^ *unaff_RDI;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || bVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)((ulonglong)CONCAT31(uVar2,bVar3) + 0x10);
  *pcVar1 = *pcVar1 + bVar7;
  pbVar6 = (byte *)(param_3 + 0x55);
  bVar5 = *pbVar6;
  *pbVar6 = *pbVar6 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  *unaff_RBP = *unaff_RBP + (char)param_1 + CARRY1(bVar5,unaff_R12B);
  pbVar6 = (byte *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) + bVar3,(char)param_1));
  bVar5 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar3;
  pcVar1 = (char *)((ulonglong)CONCAT22((short)(uVar8 >> 0x10),CONCAT11(0x2b,bVar7)) +
                   (ulonglong)CONCAT31(uVar2,bVar3 + 9 + CARRY1(bVar5,bVar3)) * 4);
  *pcVar1 = *pcVar1 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

