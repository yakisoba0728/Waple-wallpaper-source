// Function: FUN_1404a1ecc
// Addr: 1404a1ecc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1ecc(byte *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 in_RAX;
  int *piVar6;
  ulonglong uVar8;
  byte *pbVar9;
  longlong unaff_RBX;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  char *pcVar7;
  
  bVar2 = (byte)in_RAX;
  bRam00000001504b1f24 = bRam00000001504b1f24 >> 1;
  piVar6 = (int *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                           CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 |
                                                    in_PF << 2 | 2U | in_CF,bVar2)) >> 8),bVar2);
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar2;
  iVar5 = (int)piVar6 + *piVar6 + (uint)CARRY1(bVar3,bVar2);
  uVar1 = (undefined3)((uint)iVar5 >> 8);
  bVar3 = (char)iVar5 - 0x10;
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar1,bVar3);
  pbVar9 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + pcVar7[0x21]);
  *pbVar9 = *pbVar9 | bVar3;
  *pcVar7 = *pcVar7 + (char)param_1;
  uVar8 = (ulonglong)CONCAT31(uVar1,bVar3) ^ 0x18;
  pcVar7 = (char *)(uVar8 - 0x60);
  *pcVar7 = *pcVar7 + (char)uVar8;
  cVar4 = cRam0021004a1e080004 + *(char *)(ulonglong)CONCAT31(uVar1,cRam0021004a1e080004);
  uVar8 = (ulonglong)CONCAT31(uVar1,cVar4);
  pcVar7 = (char *)(uVar8 + unaff_RBX);
  *pcVar7 = *pcVar7 + (char)(iVar5 >> 0x1f);
  pcVar7 = (char *)(uVar8 - 0x60);
  *pcVar7 = *pcVar7 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

