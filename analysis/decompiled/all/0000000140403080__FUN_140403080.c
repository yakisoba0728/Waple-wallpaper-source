// Function: FUN_140403080
// Addr: 140403080
// Size: 646 bytes


ulonglong FUN_140403080(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  ulonglong uVar10;
  char *pcVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  lVar1 = param_1 + 6;
  uVar6 = (ulonglong)(uint)param_2[6];
  pcVar11 = "OUT-OF-RANGE";
  uVar10 = lVar1 - *(longlong *)(param_2 + 2);
  pcVar4 = "OUT-OF-RANGE";
  if (uVar10 <= uVar6) {
    pcVar4 = "OK";
  }
  uVar13 = *(undefined8 *)(param_2 + 4);
  uVar5 = FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",
                        lVar1,*(longlong *)(param_2 + 2),uVar13,pcVar4);
  if (uVar10 <= uVar6) {
    uVar5 = 0;
    uVar12 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    if (uVar12 != 0) {
      uVar7 = uVar12 * 2;
      if ((((ulonglong)(uint)param_2[6] < (ulonglong)(lVar1 - *(longlong *)(param_2 + 2))) ||
          ((uint)(param_2[4] - (int)lVar1) < uVar7)) ||
         (param_2[7] = param_2[7] + uVar12 * -2, param_2[7] < 1)) {
        cVar9 = '\0';
      }
      else {
        cVar9 = '\x01';
      }
      pcVar4 = "OUT-OF-RANGE";
      if (cVar9 != '\0') {
        pcVar4 = "OK";
      }
      uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),uVar7);
      uVar5 = FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,
                            "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",lVar1,
                            (ulonglong)uVar7 + lVar1,uVar13,*(longlong *)(param_2 + 2),
                            *(undefined8 *)(param_2 + 4),pcVar4);
      uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if (cVar9 != '\0') {
        uVar6 = 0;
        if (uVar12 != 0) {
          do {
            lVar2 = uVar6 * 2;
            uVar5 = FUN_1404093d0(param_1 + 6 + lVar2,param_2,param_1);
            if (((char)uVar5 == '\0') ||
               ((uVar7 = (uint)*(byte *)(lVar2 + 7 + param_1) +
                         (uint)*(byte *)(lVar2 + 6 + param_1) * 0x100, uVar7 != 0 &&
                (uVar5 = FUN_140374b40(param_2,(ulonglong)uVar7 + param_1), (char)uVar5 == '\0'))))
            goto LAB_1404032f5;
            uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
            uVar7 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar7;
          } while (uVar7 < uVar12);
        }
        iVar8 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100;
        uVar12 = iVar8 * 4;
        lVar1 = lVar1 + (ulonglong)
                        CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)) * 2;
        if ((((ulonglong)(uint)param_2[6] < (ulonglong)(lVar1 - *(longlong *)(param_2 + 2))) ||
            ((uint)(param_2[4] - (int)lVar1) < uVar12)) ||
           (param_2[7] = param_2[7] + iVar8 * -4, param_2[7] < 1)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pcVar11 = "OK";
        }
        uVar6 = FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,
                              "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",lVar1,
                              (ulonglong)uVar12 + lVar1,CONCAT44(uVar14,uVar12),
                              *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar11);
        return uVar6;
      }
    }
  }
LAB_1404032f5:
  return uVar5 & 0xffffffffffffff00;
}

