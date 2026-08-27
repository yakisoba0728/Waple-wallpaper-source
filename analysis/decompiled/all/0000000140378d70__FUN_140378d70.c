// Function: FUN_140378d70
// Addr: 140378d70
// Size: 888 bytes


undefined8 FUN_140378d70(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint local_res8 [2];
  
  cVar3 = *(char *)(param_1 + 7);
  if (cVar3 == '\0') {
    uVar7 = FUN_140400470(param_1 + 0xc,param_2,0);
    return uVar7;
  }
  if (cVar3 == '\x01') {
    lVar1 = param_1 + 0xc;
    uVar5 = 0;
    local_res8[0] = 0;
    cVar3 = FUN_1403ffb00(lVar1,param_2,local_res8);
    if (cVar3 != '\0') {
      uVar9 = 0;
      lVar10 = (ulonglong)*(byte *)(param_1 + 0x1b) +
               ((ulonglong)*(byte *)(param_1 + 0x1a) +
               (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19))
               * 0x100) * 0x100 + lVar1;
      if (local_res8[0] != 0) {
        do {
          iVar8 = (uint)*(byte *)(lVar10 + 4 + uVar9 * 8) * 0x100 +
                  (uint)*(byte *)(lVar10 + 5 + uVar9 * 8);
          uVar4 = uVar5;
          if ((iVar8 != 0xffff) && (uVar4 = iVar8 + 1, uVar4 <= uVar5)) {
            uVar4 = uVar5;
          }
          iVar8 = (uint)*(byte *)(uVar9 * 8 + 6 + lVar10) * 0x100 +
                  (uint)*(byte *)(uVar9 * 8 + 7 + lVar10);
          uVar5 = uVar4;
          if ((iVar8 != 0xffff) && (uVar5 = iVar8 + 1, uVar5 <= uVar4)) {
            uVar5 = uVar4;
          }
          uVar4 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar4;
        } while (uVar4 < local_res8[0]);
      }
      cVar3 = FUN_140409580(param_1 + 0x1c,param_2,lVar1);
      if ((cVar3 != '\0') &&
         (cVar3 = FUN_14038baf0((ulonglong)*(byte *)(param_1 + 0x1f) +
                                ((ulonglong)*(byte *)(param_1 + 0x1e) +
                                (ulonglong)
                                CONCAT11(*(undefined1 *)(param_1 + 0x1c),
                                         *(undefined1 *)(param_1 + 0x1d)) * 0x100) * 0x100 + lVar1,
                                param_2,uVar5), cVar3 != '\0')) {
        return 1;
      }
      return 0;
    }
  }
  else {
    if (cVar3 == '\x02') {
      uVar9 = (ulonglong)(uint)param_2[6];
      lVar1 = param_1 + 0x28;
      uVar11 = lVar1 - *(longlong *)(param_2 + 2);
      pcVar6 = "OUT-OF-RANGE";
      if (uVar11 <= uVar9) {
        pcVar6 = "OK";
      }
      FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                    *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar6);
      if (uVar9 < uVar11) {
        return 0;
      }
      cVar3 = FUN_1403fffb0(param_1 + 0xc,param_2);
      if (cVar3 == '\0') {
        return 0;
      }
      if ((uint)*(byte *)(param_1 + 0x1d) * 0x10000 + (uint)*(byte *)(param_1 + 0x1e) * 0x100 +
          (uint)*(byte *)(param_1 + 0x1c) * 0x1000000 + (uint)*(byte *)(param_1 + 0x1f) == 0) {
        return 0;
      }
      if ((uint)*(byte *)(param_1 + 0x21) * 0x10000 + (uint)*(byte *)(param_1 + 0x22) * 0x100 +
          (uint)*(byte *)(param_1 + 0x20) * 0x1000000 + (uint)*(byte *)(param_1 + 0x23) == 0) {
        return 0;
      }
      iVar8 = (uint)*(byte *)(param_1 + 0x25) * 0x10000 + (uint)*(byte *)(param_1 + 0x26) * 0x100 +
              (uint)*(byte *)(param_1 + 0x24) * 0x1000000;
      bVar2 = *(byte *)(param_1 + 0x27);
    }
    else {
      if (cVar3 == '\x04') {
        uVar7 = FUN_1403fea20(param_1 + 0xc);
        return uVar7;
      }
      if (cVar3 != '\x05') {
        return 1;
      }
      uVar9 = (ulonglong)(uint)param_2[6];
      lVar1 = param_1 + 0x20;
      uVar11 = lVar1 - *(longlong *)(param_2 + 2);
      pcVar6 = "OUT-OF-RANGE";
      if (uVar11 <= uVar9) {
        pcVar6 = "OK";
      }
      FUN_1402fc370("SANITIZE",lVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar1,
                    *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar6);
      if (uVar9 < uVar11) {
        return 0;
      }
      cVar3 = FUN_1403ffb00(param_1 + 0xc,param_2);
      if (cVar3 == '\0') {
        return 0;
      }
      iVar8 = (uint)*(byte *)(param_1 + 0x1d) * 0x10000 + (uint)*(byte *)(param_1 + 0x1e) * 0x100 +
              (uint)*(byte *)(param_1 + 0x1c) * 0x1000000;
      bVar2 = *(byte *)(param_1 + 0x1f);
    }
    if (iVar8 + (uint)bVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

