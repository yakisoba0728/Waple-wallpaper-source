// Function: FUN_1404aef04
// Addr: 1404aef04
// Size: 1 bytes


void FUN_1404aef04(char *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  int *piVar5;
  char *pcVar6;
  uint *puVar7;
  byte bVar8;
  undefined1 unaff_BL;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  byte *pbVar4;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)(unaff_RSI + (longlong)in_RAX) = *(uint *)(unaff_RSI + (longlong)in_RAX) & (uint)param_1;
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_2 * 8);
  *pcVar6 = *pcVar6 + (char)param_1;
  *in_RAX = *in_RAX | (uint)in_RAX;
  bVar1 = (byte)in_RAX;
  pbVar4 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar1,bVar1));
  piVar5 = (int *)CONCAT71((int7)((ulonglong)pbVar4 >> 8),(bVar1 | *pbVar4) + 100);
  uVar3 = (int)piVar5 + *piVar5;
  pcVar6 = (char *)(ulonglong)uVar3;
  *param_1 = *param_1 + unaff_SPL;
  cVar2 = (char)uVar3;
  *pcVar6 = *pcVar6 + cVar2;
  pbVar4 = (byte *)(unaff_RDI + -0x20ffec7d);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar8;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(0x83,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(0x83,unaff_BL)) + (uint)CARRY1(bVar1,bVar8);
  bVar8 = bVar8 & (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar6 = *pcVar6 + cVar2;
  pbVar4 = (byte *)(unaff_RBP + -0x48ffec7d);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + (byte)param_2;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(0x83,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(0x83,unaff_BL)) + (uint)CARRY1(bVar1,(byte)param_2);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2 + -0x12);
  puVar7 = (uint *)(ulonglong)uVar3;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)puVar7 = (char)*puVar7 + cVar2 + -0x12;
  pbVar4 = (byte *)((longlong)puVar7 + -0x7d);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar8;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(0x83,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(0x83,unaff_BL)) +
       (uint)(CARRY4(uVar3,*puVar7) || CARRY4(uVar3 + *puVar7,(uint)CARRY1(bVar1,bVar8)));
  uVar3 = in(0x49);
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

