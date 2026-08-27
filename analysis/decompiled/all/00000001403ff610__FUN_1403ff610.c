// Function: FUN_1403ff610
// Addr: 1403ff610
// Size: 753 bytes


undefined8 FUN_1403ff610(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  
  lVar1 = param_1 + 0x10;
  uVar10 = (ulonglong)(uint)param_2[6];
  pcVar13 = "OUT-OF-RANGE";
  uVar11 = lVar1 - *(longlong *)(param_2 + 2);
  pcVar5 = "OUT-OF-RANGE";
  if (uVar11 <= uVar10) {
    pcVar5 = "OK";
  }
  uVar15 = *(undefined8 *)(param_2 + 4);
  FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                *(longlong *)(param_2 + 2),uVar15,pcVar5);
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (((((uVar10 < uVar11) || (cVar4 = FUN_1404093d0(param_1 + 2,param_2,param_1), cVar4 == '\0'))
       || ((uVar6 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100, uVar6 != 0
           && (cVar4 = FUN_140374b40(param_2,(ulonglong)uVar6 + param_1), cVar4 == '\0')))) ||
      (cVar4 = FUN_1404093d0(param_1 + 8,param_2,param_1), cVar4 == '\0')) ||
     ((((uVar6 = (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100, uVar6 != 0 &&
        (cVar4 = FUN_140374830(param_2,(ulonglong)uVar6 + param_1), cVar4 == '\0')) ||
       (cVar4 = FUN_1404093d0(param_1 + 10,param_2,param_1), cVar4 == '\0')) ||
      ((uVar6 = (uint)*(byte *)(param_1 + 0xb) + (uint)*(byte *)(param_1 + 10) * 0x100, uVar6 != 0
       && (cVar4 = FUN_140374830(param_2,(ulonglong)uVar6 + param_1), cVar4 == '\0')))))) {
    return 0;
  }
  bVar2 = (&DAT_140470560)[*(byte *)(param_1 + 5) & 0xf];
  bVar3 = (&DAT_140470560)[*(byte *)(param_1 + 5) >> 4];
  iVar7 = (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 7) >> 4] +
          (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 7) & 0xf] + (uint)bVar2 + (uint)bVar3;
  uVar12 = ((uint)*(byte *)(param_1 + 0xf) + (uint)*(byte *)(param_1 + 0xe) * 0x100) *
           ((uint)*(byte *)(param_1 + 0xd) + (uint)*(byte *)(param_1 + 0xc) * 0x100);
  uVar6 = iVar7 * 2;
  if ((iVar7 == 0) || (uVar12 < (uint)(0xffffffff / (ulonglong)uVar6))) {
    uVar9 = uVar12 * uVar6;
    if (((ulonglong)(uint)param_2[6] < (ulonglong)(lVar1 - *(longlong *)(param_2 + 2))) ||
       (((uint)(param_2[4] - (int)lVar1) < uVar9 ||
        (param_2[7] = param_2[7] - uVar9, param_2[7] < 1)))) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    if (cVar4 != '\0') {
      pcVar13 = "OK";
    }
    uVar14 = 0;
    cVar8 = '\0';
    FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",lVar1,(ulonglong)uVar9 + lVar1
                  ,CONCAT44(uVar16,uVar9),*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),
                  pcVar13);
    if (cVar4 != '\0') {
      if (*(char *)((longlong)param_2 + 0x3d) == cVar8) {
        cVar4 = FUN_140409f40(param_1 + 4,param_2,param_1,lVar1,uVar12,CONCAT44(uVar14,uVar6));
        if (cVar4 == '\0') {
          return 0;
        }
        cVar4 = FUN_140409f40(param_1 + 6,param_2,param_1,
                              param_1 + ((ulonglong)((uint)bVar2 + (uint)bVar3) + 8) * 2,uVar12,
                              uVar6);
        if (cVar4 == '\0') {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

