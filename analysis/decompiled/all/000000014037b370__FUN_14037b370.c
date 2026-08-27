// Function: FUN_14037b370
// Addr: 14037b370
// Size: 513 bytes


ulonglong FUN_14037b370(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  char *pcVar12;
  undefined8 uVar13;
  byte *pbVar14;
  longlong lVar15;
  undefined8 uVar16;
  
  pbVar1 = param_1 + 2;
  uVar10 = (ulonglong)(uint)param_2[6];
  pcVar12 = "OUT-OF-RANGE";
  pcVar4 = "OUT-OF-RANGE";
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar8 = 1;
  if (uVar9 <= uVar10) {
    pcVar4 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
  if (uVar10 < uVar9) {
    return 0;
  }
  iVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  iVar7 = (int)uVar8;
  if (iVar5 == iVar7) {
    uVar8 = FUN_140405ba0(param_1,param_2);
    return uVar8;
  }
  if (iVar5 - iVar7 == iVar7) {
    lVar15 = *(longlong *)(param_2 + 2);
    uVar8 = (ulonglong)(uint)param_2[6];
    uVar16 = *(undefined8 *)(param_2 + 4);
    pbVar2 = param_1 + 8;
    uVar10 = (longlong)pbVar2 - lVar15;
    if (uVar10 <= uVar8) {
      pcVar12 = "OK";
    }
    iVar5 = *param_2 + 1;
    pcVar4 = "check_point [%p] in [%p..%p] -> %s";
    uVar13 = 0;
    pbVar14 = pbVar2;
    FUN_1402fc370("SANITIZE",pbVar2,0);
    if (((uVar10 <= uVar8) && (cVar3 = FUN_1404093d0(pbVar1,param_2,param_1), cVar3 != '\0')) &&
       ((uVar6 = (uint)param_1[3] + (uint)*pbVar1 * 0x100, uVar6 == 0 ||
        (cVar3 = FUN_140374b40(param_2,param_1 + uVar6), cVar3 != '\0')))) {
      iVar11 = (uint)param_1[7] + (uint)param_1[6] * 0x100;
      iVar7 = ((uint)(byte)(&DAT_140470560)[param_1[5] & 0xf] +
              (uint)(byte)(&DAT_140470560)[param_1[5] >> 4]) * 2;
      cVar3 = FUN_14036f0c0(param_2,pbVar2,iVar11,iVar7,iVar5,uVar13,pcVar4,pbVar14,lVar15,uVar16,
                            pcVar12);
      if ((cVar3 != '\0') &&
         ((*(char *)((longlong)param_2 + 0x3d) != '\0' ||
          (cVar3 = FUN_140409f40(param_1 + 4,param_2,param_1,pbVar2,iVar11,iVar7), cVar3 != '\0'))))
      {
        return 1;
      }
    }
    return 0;
  }
  return uVar8 & 0xff;
}

