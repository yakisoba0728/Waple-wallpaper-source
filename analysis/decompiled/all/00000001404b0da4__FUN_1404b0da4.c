// Function: FUN_1404b0da4
// Addr: 1404b0da4
// Size: 1 bytes


void FUN_1404b0da4(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte bVar8;
  undefined8 in_RAX;
  uint *puVar4;
  int *piVar5;
  byte *pbVar6;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  char *pcVar7;
  
  bVar2 = (char)in_RAX + '\n' + in_CF;
  pcVar7 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar7 = *pcVar7 + (byte)param_2;
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',
                                     bVar2 | *(byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2)
                                    ));
  piVar5 = (int *)((ulonglong)((uint)puVar4 | *puVar4) | 0x74);
  iVar1 = (int)piVar5 + *piVar5;
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar1 >> 8);
  uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),(byte)iVar1 + 0x54);
  *(int *)(ulonglong)uVar3 = *(int *)(ulonglong)uVar3 + uVar3 + (uint)(0xab < (byte)iVar1);
  *(byte *)(unaff_RDI + -0x68b6ffeb) = *(byte *)(unaff_RDI + -0x68b6ffeb) & (byte)param_2;
  uVar3 = uVar3 + 0x4b096000;
  pbVar6 = (byte *)(ulonglong)uVar3;
  bVar8 = (byte)(uVar3 >> 8);
  *param_1 = *param_1 + bVar8;
  *pbVar6 = *pbVar6 + (char)uVar3;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar8;
  uVar3 = (int)unaff_RDI + 0x15974900 + (uint)CARRY1(bVar2,bVar8);
  pcVar7 = (char *)(ulonglong)uVar3;
  pcVar7[9] = pcVar7[9] + (char)(uVar3 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + (char)param_1;
  *pcVar7 = *pcVar7 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

