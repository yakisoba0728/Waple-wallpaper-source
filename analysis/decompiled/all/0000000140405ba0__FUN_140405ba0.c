// Function: FUN_140405ba0
// Addr: 140405ba0
// Size: 530 bytes


undefined8 FUN_140405ba0(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte bVar8;
  int iVar9;
  char cVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  lVar1 = param_1 + 6;
  uVar5 = (ulonglong)(uint)param_2[6];
  pcVar12 = "OUT-OF-RANGE";
  uVar11 = lVar1 - *(longlong *)(param_2 + 2);
  pcVar4 = "OUT-OF-RANGE";
  if (uVar11 <= uVar5) {
    pcVar4 = "OK";
  }
  uVar13 = *(undefined8 *)(param_2 + 4);
  FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                *(longlong *)(param_2 + 2),uVar13,pcVar4);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  if ((uVar11 <= uVar5) && (cVar2 = FUN_1404093d0(param_1 + 2,param_2,param_1), cVar2 != '\0')) {
    bVar8 = *(byte *)(param_1 + 3);
    uVar6 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)bVar8;
    if (uVar6 != 0) {
      cVar2 = FUN_140374b40(param_2,(ulonglong)uVar6 + param_1);
      if (cVar2 == '\0') {
        return 0;
      }
      bVar8 = *(byte *)(param_1 + 3);
    }
    uVar6 = (uint)bVar8 + (uint)*(byte *)(param_1 + 2) * 0x100;
    if (uVar6 == 0) {
      puVar7 = &DAT_14045dd10;
    }
    else {
      puVar7 = (undefined8 *)((ulonglong)uVar6 + param_1);
    }
    uVar5 = FUN_1403ce2f0(puVar7);
    uVar6 = param_2[7];
    if ((-1 < (int)uVar6) && (uVar3 = (uint)(uVar5 >> 1) & 0x7fffffff, uVar3 < uVar6)) {
      iVar9 = uVar6 - uVar3;
      param_2[7] = iVar9;
      uVar6 = ((uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 5) & 0xf] +
              (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 5) >> 4]) * 2;
      if (((ulonglong)(uint)param_2[6] < (ulonglong)(lVar1 - *(longlong *)(param_2 + 2))) ||
         (((uint)(param_2[4] - (int)lVar1) < uVar6 ||
          (iVar9 = iVar9 + ((uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 5) & 0xf] +
                           (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 5) >> 4]) * -2,
          param_2[7] = iVar9, iVar9 < 1)))) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      if (cVar2 != '\0') {
        pcVar12 = "OK";
      }
      cVar10 = '\0';
      FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",lVar1,
                    (ulonglong)uVar6 + lVar1,CONCAT44(uVar14,uVar6),*(longlong *)(param_2 + 2),
                    *(undefined8 *)(param_2 + 4),pcVar12);
      if (cVar2 == '\0') {
        return 0;
      }
      if (((*(char *)((longlong)param_2 + 0x3d) == cVar10) && ((*(byte *)(param_1 + 5) & 0xf0) != 0)
          ) && (cVar2 = FUN_140409de0(param_1 + 4,param_2,param_1,lVar1), cVar2 == '\0')) {
        return 0;
      }
      return 1;
    }
    param_2[7] = -1;
  }
  return 0;
}

