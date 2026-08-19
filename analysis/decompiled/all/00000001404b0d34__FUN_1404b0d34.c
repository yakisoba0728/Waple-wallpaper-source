// Function: FUN_1404b0d34
// Addr: 1404b0d34
// Size: 1 bytes


void FUN_1404b0d34(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_RAX;
  uint *puVar7;
  undefined7 uVar11;
  int *piVar8;
  longlong lVar9;
  byte bVar12;
  int unaff_EBP;
  char in_CF;
  char *pcVar10;
  
  bVar12 = (byte)param_2;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(-in_CF,(char)in_RAX));
  *puVar7 = *puVar7 | (uint)puVar7;
  bVar3 = (char)in_RAX - 0x2c;
  uVar11 = (undefined7)((ulonglong)puVar7 >> 8);
  bVar2 = *(byte *)CONCAT71(uVar11,bVar3);
  param_1[(longlong)&stack0x00000000] =
       param_1[(longlong)&stack0x00000000] + (char)((ulonglong)param_2 >> 8);
  piVar8 = (int *)(CONCAT71(uVar11,bVar3 | bVar2) | 100);
  *piVar8 = *piVar8 + (int)piVar8;
  *(byte *)((longlong)piVar8 + (longlong)param_2) =
       *(byte *)((longlong)piVar8 + (longlong)param_2) | bVar12;
  lVar9 = CONCAT71(uVar11,(byte)piVar8 + 0x34);
  LocalDescriptorTableRegister(*(undefined2 *)(lVar9 + -0x5cffea6b));
  uVar5 = unaff_EBP + 0x4b08d400 + (uint)(0xcb < (byte)piVar8);
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *param_2 = *param_2 + (char)uVar5;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  uVar4 = in(9);
  uVar5 = CONCAT31((int3)(uVar5 >> 8),uVar4);
  pbVar1 = (byte *)((ulonglong)uVar5 - 0x5cffea6b);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  uVar6 = (int)lVar9 + 0x4b08d400 + (uint)CARRY1(bVar2,bVar12);
  pcVar10 = (char *)(ulonglong)uVar6;
  *param_1 = *param_1 + (char)(uVar6 >> 8);
  *pcVar10 = *pcVar10 + (char)uVar6;
  pbVar1 = (byte *)(pcVar10 + -0x5cffea6b);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  uVar5 = uVar5 + 0x4b08d400 + (uint)CARRY1(bVar2,bVar12);
  pcVar10 = (char *)(ulonglong)uVar5;
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *pcVar10 = *pcVar10 + bVar12;
  *pcVar10 = *pcVar10 + (char)uVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

