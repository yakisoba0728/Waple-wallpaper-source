// Function: FUN_1404a1eac
// Addr: 1404a1eac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1eac(byte *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined3 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int in_EAX;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  ulonglong uVar10;
  longlong unaff_RBX;
  byte in_CF;
  bool bVar11;
  char *pcVar9;
  
  uVar6 = (in_EAX + -0x521004a) - (uint)in_CF;
  uVar6 = CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + *(char *)(ulonglong)uVar6) + 0xbc000af4;
  bVar11 = (uVar6 & 0x1000) != 0;
  bVar3 = (byte)uVar6;
  uVar1 = (undefined2)(uVar6 >> 0x10);
  pbVar8 = (byte *)(ulonglong)
                   (CONCAT22(uVar1,CONCAT11(((char)bVar3 < '\0') << 7 | (bVar3 == 0) << 6 |
                                            bVar11 << 4 | ((POPCOUNT(bVar3) & 1U) == 0) << 2,bVar3))
                   | 0x200);
  bRam00000001406b1f14 = bRam00000001406b1f14 >> 1;
  bVar4 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar3;
  bRam00000001504b1f24 = bRam00000001504b1f24 >> 1;
  uVar6 = CONCAT31((int3)(CONCAT22(uVar1,CONCAT11(((char)*pbVar8 < '\0') << 7 | (*pbVar8 == 0) << 6
                                                  | bVar11 << 4 |
                                                  ((POPCOUNT(*pbVar8) & 1U) == 0) << 2 | 2U |
                                                  CARRY1(bVar4,bVar3),bVar3)) >> 8),bVar3);
  bVar4 = *param_1;
  *param_1 = *param_1 + bVar3;
  iVar7 = uVar6 + *(int *)(ulonglong)uVar6 + (uint)CARRY1(bVar4,bVar3);
  uVar2 = (undefined3)((uint)iVar7 >> 8);
  bVar4 = (char)iVar7 - 0x10;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar2,bVar4);
  pbVar8 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + pcVar9[0x21]);
  *pbVar8 = *pbVar8 | bVar4;
  *pcVar9 = *pcVar9 + (char)param_1;
  uVar10 = (ulonglong)CONCAT31(uVar2,bVar4) ^ 0x18;
  pcVar9 = (char *)(uVar10 - 0x60);
  *pcVar9 = *pcVar9 + (char)uVar10;
  cVar5 = cRam0021004a1e080004 + *(char *)(ulonglong)CONCAT31(uVar2,cRam0021004a1e080004);
  uVar10 = (ulonglong)CONCAT31(uVar2,cVar5);
  pcVar9 = (char *)(uVar10 + unaff_RBX);
  *pcVar9 = *pcVar9 + (char)(iVar7 >> 0x1f);
  pcVar9 = (char *)(uVar10 - 0x60);
  *pcVar9 = *pcVar9 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

