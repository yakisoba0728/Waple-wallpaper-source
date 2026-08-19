// Function: FUN_1404b0d48
// Addr: 1404b0d48
// Size: 1 bytes


void FUN_1404b0d48(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 in_RAX;
  longlong lVar6;
  byte bVar8;
  int unaff_EBP;
  char *pcVar7;
  
  bVar8 = (byte)param_2;
  lVar6 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x34);
  LocalDescriptorTableRegister(*(undefined2 *)(lVar6 + -0x5cffea6b));
  uVar4 = unaff_EBP + 0x4b08d400 + (uint)(0xcb < (byte)in_RAX);
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *param_2 = *param_2 + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  uVar3 = in(9);
  uVar4 = CONCAT31((int3)(uVar4 >> 8),uVar3);
  pbVar1 = (byte *)((ulonglong)uVar4 - 0x5cffea6b);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  uVar5 = (int)lVar6 + 0x4b08d400 + (uint)CARRY1(bVar2,bVar8);
  pcVar7 = (char *)(ulonglong)uVar5;
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *pcVar7 = *pcVar7 + (char)uVar5;
  pbVar1 = (byte *)(pcVar7 + -0x5cffea6b);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  uVar4 = uVar4 + 0x4b08d400 + (uint)CARRY1(bVar2,bVar8);
  pcVar7 = (char *)(ulonglong)uVar4;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *pcVar7 = *pcVar7 + bVar8;
  *pcVar7 = *pcVar7 + (char)uVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

