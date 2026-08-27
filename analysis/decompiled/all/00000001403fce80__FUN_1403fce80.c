// Function: FUN_1403fce80
// Addr: 1403fce80
// Size: 996 bytes


undefined8 FUN_1403fce80(longlong param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  pcVar4 = "OUT-OF-RANGE";
  lVar7 = param_1 + 0x24;
  pcVar2 = "OUT-OF-RANGE";
  bVar6 = 1;
  uVar9 = lVar7 - *(longlong *)(param_2 + 2);
  uVar8 = (ulonglong)(uint)param_2[6];
  if (uVar9 <= uVar8) {
    pcVar2 = "OK";
  }
  uVar10 = *(undefined8 *)(param_2 + 4);
  FUN_1402fc370("SANITIZE",lVar7,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar7,
                *(longlong *)(param_2 + 2),uVar10,pcVar2);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (uVar8 < uVar9) {
    return 0;
  }
  iVar3 = (int)param_1;
  if ((*(byte *)(param_1 + 0xf) & bVar6) == 0) {
    cVar1 = FUN_140409580(param_1 + 0x14,param_2,param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = FUN_1403fdda0((ulonglong)*(byte *)(param_1 + 0x17) +
                          ((ulonglong)*(byte *)(param_1 + 0x16) +
                          (ulonglong)
                          CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15))
                          * 0x100) * 0x100 + param_1,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = FUN_140409580(param_1 + 0x18,param_2,param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = FUN_1403fdda0((ulonglong)*(byte *)(param_1 + 0x1b) +
                          ((ulonglong)*(byte *)(param_1 + 0x1a) +
                          (ulonglong)
                          CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19))
                          * 0x100) * 0x100 + param_1,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    lVar7 = *(longlong *)(param_2 + 2);
    uVar5 = (uint)*(byte *)(param_1 + 0x1d) * 0x10000 + (uint)*(byte *)(param_1 + 0x1e) * 0x100 +
            (uint)*(byte *)(param_1 + 0x1c) * 0x1000000 + (uint)*(byte *)(param_1 + 0x1f);
    if ((((ulonglong)(param_1 - lVar7) <= (ulonglong)(uint)param_2[6]) &&
        (uVar5 <= (uint)(param_2[4] - iVar3))) && (param_2[7] = param_2[7] - uVar5, 0 < param_2[7]))
    {
      cVar1 = '\x01';
      goto LAB_1403fd101;
    }
  }
  else {
    cVar1 = FUN_140409580(param_1 + 0x14,param_2,param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = FUN_1403fe170((ulonglong)*(byte *)(param_1 + 0x17) +
                          ((ulonglong)*(byte *)(param_1 + 0x16) +
                          (ulonglong)
                          CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15))
                          * 0x100) * 0x100 + param_1,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = FUN_140409580(param_1 + 0x18,param_2,param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = FUN_1403fe170((ulonglong)*(byte *)(param_1 + 0x1b) +
                          ((ulonglong)*(byte *)(param_1 + 0x1a) +
                          (ulonglong)
                          CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19))
                          * 0x100) * 0x100 + param_1,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
    lVar7 = *(longlong *)(param_2 + 2);
    uVar5 = (uint)*(byte *)(param_1 + 0x1d) * 0x10000 + (uint)*(byte *)(param_1 + 0x1e) * 0x100 +
            (uint)*(byte *)(param_1 + 0x1c) * 0x1000000 + (uint)*(byte *)(param_1 + 0x1f);
    if ((((ulonglong)(param_1 - lVar7) <= (ulonglong)(uint)param_2[6]) &&
        (uVar5 <= (uint)(param_2[4] - iVar3))) && (param_2[7] = param_2[7] - uVar5, 0 < param_2[7]))
    {
      cVar1 = '\x01';
      goto LAB_1403fd101;
    }
  }
  cVar1 = '\0';
LAB_1403fd101:
  pcVar2 = "OUT-OF-RANGE";
  if (cVar1 != '\0') {
    pcVar2 = "OK";
  }
  FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                (ulonglong)uVar5 + param_1,CONCAT44(uVar11,uVar5),lVar7,*(undefined8 *)(param_2 + 4)
                ,pcVar2);
  if (cVar1 != '\0') {
    if ((uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
        (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb) != 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x21) * 0x10000 + (uint)*(byte *)(param_1 + 0x22) * 0x100 +
              (uint)*(byte *)(param_1 + 0x20) * 0x1000000 + (uint)*(byte *)(param_1 + 0x23);
      if ((((ulonglong)(uint)param_2[6] < (ulonglong)(param_1 - *(longlong *)(param_2 + 2))) ||
          ((uint)(param_2[4] - iVar3) < uVar5)) || (param_2[7] = param_2[7] - uVar5, param_2[7] < 1)
         ) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      if (cVar1 != '\0') {
        pcVar4 = "OK";
      }
      FUN_1402fc370("SANITIZE",param_1,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",param_1,
                    (ulonglong)uVar5 + param_1,uVar5,*(longlong *)(param_2 + 2),
                    *(undefined8 *)(param_2 + 4),pcVar4);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

