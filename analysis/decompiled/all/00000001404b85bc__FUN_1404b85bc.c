// Function: FUN_1404b85bc
// Addr: 1404b85bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b85bc(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar7;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char cVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  longlong unaff_RBX;
  bool in_CF;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  if (!in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = in_EAX | (uint)param_2;
  uVar5 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + -0x20);
  cVar8 = (char)param_2 + *(char *)(ulonglong)uVar5;
  bVar3 = *param_1;
  bVar7 = (byte)(uVar4 >> 8);
  *param_1 = *param_1 + bVar7;
  uVar5 = (uVar5 + 0xbe2fff8) - (uint)CARRY1(bVar3,bVar7);
  pcVar6 = (char *)(ulonglong)uVar5;
  pbVar1 = (byte *)(unaff_RBX + CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,cVar8))));
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 - bVar9;
  pcVar2 = (char *)(CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,cVar8))) +
                   CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,cVar8))));
  *pcVar2 = *pcVar2 + (char)(uVar5 >> 8) + (bVar3 < bVar9);
  pcVar6[CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,cVar8)))] =
       pcVar6[CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,cVar8)))] | bVar9;
  *pcVar6 = *pcVar6 + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

