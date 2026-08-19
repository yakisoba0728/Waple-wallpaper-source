// Function: FUN_1404b1454
// Addr: 1404b1454
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404b149e) */

void FUN_1404b1454(byte *param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined7 uVar6;
  byte bVar7;
  char cVar8;
  undefined6 uVar9;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  bool bVar10;
  byte *pbVar5;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar8 = (char)((ulonglong)param_2 >> 8);
  bVar7 = (byte)param_2;
  param_1[0x15bf1000] = param_1[0x15bf1000] + cVar8;
  cRam00000001a44b2a20 = cRam00000001a44b2a20 + cVar8;
  uVar4 = in(0x49);
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = in(8);
  pbVar5 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  bVar10 = CARRY1(*pbVar5,bVar2);
  *pbVar5 = *pbVar5 + bVar2;
  if (*pbVar5 != 0) {
    *pbVar5 = *pbVar5 + bVar2;
    pbVar5 = (byte *)((ulonglong)CONCAT31(uVar1,bVar2) ^ 0xd);
    bVar10 = CARRY1(*pbVar5,bVar7);
    *pbVar5 = *pbVar5 + bVar7;
  }
  uVar4 = (int)pbVar5 + 0x49e56400 + (uint)bVar10;
  bVar2 = *param_1;
  bVar3 = (byte)uVar4;
  *param_1 = *param_1 + bVar3;
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  bVar2 = (char)param_1 + *(char *)(ulonglong)uVar4 + CARRY1(bVar2,bVar3);
  *param_2 = *param_2 + bVar7;
  *(byte *)CONCAT62(uVar9,CONCAT11(cVar8 + param_2[CONCAT71(uVar6,bVar2)],bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8 + param_2[CONCAT71(uVar6,bVar2)],bVar7)) + bVar7;
  bVar2 = bVar2 ^ *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
  if (CONCAT71(uVar6,bVar2) != 1 && bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

