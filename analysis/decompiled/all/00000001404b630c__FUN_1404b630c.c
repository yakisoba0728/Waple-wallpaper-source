// Function: FUN_1404b630c
// Addr: 1404b630c
// Size: 1 bytes


void FUN_1404b630c(char *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  byte *pbVar6;
  longlong unaff_RBX;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  char in_CF;
  uint uVar5;
  char *pcVar7;
  
  uVar5 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11((char)((ulonglong)in_RAX >> 8) + param_1[unaff_RBX] + in_CF,
                                  (char)in_RAX));
  uVar4 = uVar5 + 0xa34;
  uVar4 = (uVar4 - *(int *)(ulonglong)uVar4) - (uint)(0xfffff5cb < uVar5);
  pbVar6 = (byte *)(ulonglong)uVar4;
  *param_1 = *param_1 + -8;
  bVar2 = (byte)uVar4;
  *pbVar6 = *pbVar6 + bVar2;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar2;
  uVar4 = (uVar4 - *(int *)pbVar6) - (uint)CARRY1(bVar1,bVar2);
  *param_1 = *param_1 + -0x10;
  *unaff_RSI = *unaff_RSI + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  cVar3 = in(0xc);
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar3);
  pcVar7 = (char *)(ulonglong)uVar4;
  *pcVar7 = *pcVar7 + cVar3;
  uVar4 = uVar4 | *(uint *)(pcVar7 + in_FS_OFFSET);
  pbVar6 = (byte *)(ulonglong)uVar4;
  param_1[param_2] = param_1[param_2] + (char)((ulonglong)param_2 >> 8);
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + (byte)uVar4;
  uVar4 = (uVar4 - *(int *)pbVar6) - (uint)CARRY1(bVar1,(byte)uVar4);
  *param_1 = *param_1 + -0x18;
  *unaff_RDI = *unaff_RSI;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
  unaff_RDI[1] = unaff_RSI[1];
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

