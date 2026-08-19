// Function: FUN_1404b4e8c
// Addr: 1404b4e8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4e8c(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte bVar8;
  uint *in_RAX;
  uint *puVar7;
  byte bVar9;
  byte bVar10;
  int unaff_EBX;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *unaff_RDI;
  undefined2 in_CS;
  
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  iVar4 = *(int *)param_2;
  pbVar1 = param_1 + 0x2b;
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar9;
  bVar5 = ((char)in_RAX - (char)*in_RAX) - CARRY1(bVar3,bVar9);
  *(undefined2 *)(unaff_RBP + 0x4b) = in_CS;
  bVar3 = *param_1;
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar8;
  pbVar1 = (byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5) * 2);
  bVar10 = bVar5 - *pbVar1;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(-(bVar5 < *pbVar1 || bVar10 < CARRY1(bVar3,bVar8)),
                                     bVar10 - CARRY1(bVar3,bVar8)));
  uVar6 = ((uint)puVar7 | *puVar7) + 0x834;
  bVar10 = (byte)(unaff_EBX - iVar4);
  *param_2 = *param_2 ^ bVar10;
  *unaff_RDI = *unaff_RDI + bVar9;
  *param_2 = *param_2 ^ bVar10;
  *(char *)((ulonglong)uVar6 + 0x15) = *(char *)((ulonglong)uVar6 + 0x15) + (char)param_2;
  bVar3 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  pcVar2 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar2 = *pcVar2 + (char)param_2;
  *param_2 = *param_2 ^ bVar10;
  pcVar2 = (char *)((ulonglong)
                    (CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + '\x04' + CARRY1(bVar3,unaff_SPL)) +
                    0x2f000a54) + 0x1a + unaff_RSI);
  *pcVar2 = *pcVar2 + (char)((uint)(unaff_EBX - iVar4) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

