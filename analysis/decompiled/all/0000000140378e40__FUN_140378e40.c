// Function: FUN_140378e40
// Addr: 140378e40
// Size: 251 bytes


undefined8 FUN_140378e40(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint local_res8 [2];
  
  cVar2 = *(char *)(param_1 + 7);
  if (cVar2 == '\0') {
    uVar7 = FUN_140400540(param_1 + 0xc,param_2,0);
    return uVar7;
  }
  if (cVar2 == '\x01') {
    lVar1 = param_1 + 0xc;
    uVar5 = 0;
    local_res8[0] = 0;
    cVar2 = FUN_1403ffbd0(lVar1,param_2,local_res8);
    if (cVar2 == '\0') {
      return 0;
    }
    uVar8 = 0;
    lVar9 = (ulonglong)*(byte *)(param_1 + 0x1b) +
            ((ulonglong)*(byte *)(param_1 + 0x1a) +
            (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)) *
            0x100) * 0x100 + lVar1;
    if (local_res8[0] != 0) {
      do {
        iVar3 = (uint)*(byte *)(lVar9 + 4 + uVar8 * 8) * 0x100 +
                (uint)*(byte *)(lVar9 + 5 + uVar8 * 8);
        uVar4 = uVar5;
        if ((iVar3 != 0xffff) && (uVar4 = iVar3 + 1, uVar4 <= uVar5)) {
          uVar4 = uVar5;
        }
        iVar3 = (uint)*(byte *)(uVar8 * 8 + 6 + lVar9) * 0x100 +
                (uint)*(byte *)(uVar8 * 8 + 7 + lVar9);
        uVar5 = uVar4;
        if ((iVar3 != 0xffff) && (uVar5 = iVar3 + 1, uVar5 <= uVar4)) {
          uVar5 = uVar4;
        }
        uVar4 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar4;
      } while (uVar4 < local_res8[0]);
    }
    cVar2 = func_0x000140409650(param_1 + 0x1c,param_2,lVar1);
    if ((cVar2 != '\0') &&
       (cVar2 = func_0x00014038bbc0((ulonglong)*(byte *)(param_1 + 0x1f) +
                                    ((ulonglong)*(byte *)(param_1 + 0x1e) +
                                    (ulonglong)
                                    CONCAT11(*(undefined1 *)(param_1 + 0x1c),
                                             *(undefined1 *)(param_1 + 0x1d)) * 0x100) * 0x100 +
                                    lVar1,param_2,uVar5), cVar2 != '\0')) {
      return 1;
    }
    return 0;
  }
  if (cVar2 == '\x02') {
    param_1 = param_1 + 0x28;
    pcVar6 = "OUT-OF-RANGE";
    if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
      pcVar6 = "OK";
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1
                  ,*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar6);
  }
  if (cVar2 == '\x04') {
    uVar7 = FUN_1403feaf0(param_1 + 0xc);
    return uVar7;
  }
  if (cVar2 != '\x05') {
    return 1;
  }
  param_1 = param_1 + 0x20;
  pcVar6 = "OUT-OF-RANGE";
  if ((ulonglong)(param_1 - *(longlong *)(param_2 + 2)) <= (ulonglong)(uint)param_2[6]) {
    pcVar6 = "OK";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SANITIZE",param_1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",param_1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar6);
}

