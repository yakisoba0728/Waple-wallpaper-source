// Function: FUN_1404a1ec0
// Addr: 1404a1ec0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1ec0(byte *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 in_RAX;
  undefined6 uVar10;
  byte *pbVar6;
  int *piVar7;
  ulonglong uVar9;
  longlong unaff_RBX;
  byte in_CF;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  char *pcVar8;
  
  uVar10 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar2 = (byte)in_RAX;
  pbVar6 = (byte *)CONCAT71((int7)(CONCAT62(uVar10,CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 |
                                                            in_PF << 2 | 2U | in_CF,bVar2)) >> 8),
                            bVar2);
  bRam00000001406b1f14 = bRam00000001406b1f14 >> 1;
  bVar3 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar2;
  bRam00000001504b1f24 = bRam00000001504b1f24 >> 1;
  piVar7 = (int *)CONCAT71((int7)(CONCAT62(uVar10,CONCAT11(((char)*pbVar6 < '\0') << 7 |
                                                           (*pbVar6 == 0) << 6 | in_AF << 4 |
                                                           ((POPCOUNT(*pbVar6) & 1U) == 0) << 2 | 2U
                                                           | CARRY1(bVar3,bVar2),bVar2)) >> 8),bVar2
                          );
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar2;
  iVar5 = (int)piVar7 + *piVar7 + (uint)CARRY1(bVar3,bVar2);
  uVar1 = (undefined3)((uint)iVar5 >> 8);
  bVar3 = (char)iVar5 - 0x10;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar1,bVar3);
  pbVar6 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + pcVar8[0x21]);
  *pbVar6 = *pbVar6 | bVar3;
  *pcVar8 = *pcVar8 + (char)param_1;
  uVar9 = (ulonglong)CONCAT31(uVar1,bVar3) ^ 0x18;
  pcVar8 = (char *)(uVar9 - 0x60);
  *pcVar8 = *pcVar8 + (char)uVar9;
  cVar4 = cRam0021004a1e080004 + *(char *)(ulonglong)CONCAT31(uVar1,cRam0021004a1e080004);
  uVar9 = (ulonglong)CONCAT31(uVar1,cVar4);
  pcVar8 = (char *)(uVar9 + unaff_RBX);
  *pcVar8 = *pcVar8 + (char)(iVar5 >> 0x1f);
  pcVar8 = (char *)(uVar9 - 0x60);
  *pcVar8 = *pcVar8 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

