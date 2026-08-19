// Function: FUN_1404b4e7c
// Addr: 1404b4e7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4e7c(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined3 uVar4;
  byte bVar5;
  byte bVar6;
  int in_EAX;
  uint uVar7;
  byte bVar9;
  int unaff_EBX;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *unaff_RDI;
  undefined2 in_CS;
  char *pcVar8;
  
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  uVar7 = in_EAX + 0x40000a54;
  iVar3 = *(int *)param_2;
  pbVar1 = param_1 + 0x2b;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar9;
  uVar4 = (undefined3)(uVar7 >> 8);
  bVar5 = ((char)uVar7 - *(char *)(ulonglong)uVar7) - CARRY1(bVar2,bVar9);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar4,bVar5);
  *(undefined2 *)(unaff_RBP + 0x4b) = in_CS;
  *param_1 = *param_1 + (char)(uVar7 >> 8);
  *pcVar8 = *pcVar8 + bVar5;
  pbVar1 = (byte *)(pcVar8 + 0x2b);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  bVar6 = (bVar5 - *pcVar8) - CARRY1(bVar2,bVar5);
  bVar2 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  pbVar1 = (byte *)((ulonglong)CONCAT31(uVar4,bVar6) * 2);
  bVar5 = bVar6 - *pbVar1;
  uVar7 = CONCAT22((short)(uVar7 >> 0x10),
                   CONCAT11(-(bVar6 < *pbVar1 || bVar5 < CARRY1(bVar2,unaff_SPL)),
                            bVar5 - CARRY1(bVar2,unaff_SPL)));
  uVar7 = (uVar7 | *(uint *)(ulonglong)uVar7) + 0x834;
  bVar5 = (byte)(unaff_EBX - iVar3);
  *param_2 = *param_2 ^ bVar5;
  *unaff_RDI = *unaff_RDI + bVar9;
  *param_2 = *param_2 ^ bVar5;
  *(char *)((ulonglong)uVar7 + 0x15) = *(char *)((ulonglong)uVar7 + 0x15) + (char)param_2;
  bVar2 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  pcVar8 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar8 = *pcVar8 + (char)param_2;
  *param_2 = *param_2 ^ bVar5;
  pcVar8 = (char *)((ulonglong)
                    (CONCAT31((int3)(uVar7 >> 8),(char)uVar7 + '\x04' + CARRY1(bVar2,unaff_SPL)) +
                    0x2f000a54) + 0x1a + unaff_RSI);
  *pcVar8 = *pcVar8 + (char)((uint)(unaff_EBX - iVar3) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

