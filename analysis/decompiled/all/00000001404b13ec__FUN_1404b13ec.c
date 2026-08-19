// Function: FUN_1404b13ec
// Addr: 1404b13ec
// Size: 1 bytes


void FUN_1404b13ec(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *in_RAX;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  int *unaff_RBX;
  char *unaff_RSI;
  uint *puVar5;
  
  bVar9 = (byte)param_2;
  *(uint *)(unaff_RSI + (longlong)in_RAX) = *(uint *)(unaff_RSI + (longlong)in_RAX) & (uint)param_1;
  bVar7 = (byte)param_1;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + bVar7;
  *in_RAX = *in_RAX | (uint)in_RAX;
  bVar1 = (byte)in_RAX;
  pbVar6 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar1,bVar1));
  iVar2 = (int)CONCAT71((int7)((ulonglong)pbVar6 >> 8),(bVar1 | *pbVar6) + 100);
  uVar4 = iVar2 + 0x4b130800;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  uVar3 = iVar2 + 0x60d28300 + (uint)CARRY1(bRam00000000bf7affd4,bVar9);
  puVar5 = (uint *)(ulonglong)uVar3;
  uVar4 = *puVar5;
  *(byte *)puVar5 = (byte)*puVar5 + bVar7;
  uVar8 = (uint)param_1 + *unaff_RBX + (uint)CARRY1((byte)uVar4,bVar7);
  *puVar5 = *puVar5 & uVar3;
  *(byte *)puVar5 = (byte)*puVar5 + (char)uVar3;
  uVar3 = uVar3 ^ 0x570015bf;
  pbVar6 = (byte *)(ulonglong)uVar3;
  *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
  *pbVar6 = *pbVar6 + (char)uVar3;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar9;
  uVar4 = uVar3 + 0x49e56400 + (uint)CARRY1(bVar1,bVar9);
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)(uVar4 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar8;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

