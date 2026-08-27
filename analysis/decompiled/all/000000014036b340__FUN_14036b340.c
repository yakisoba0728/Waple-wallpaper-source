// Function: FUN_14036b340
// Addr: 14036b340
// Size: 463 bytes


undefined1 FUN_14036b340(int *param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res10 [2];
  
  uVar6 = (uint)param_4[1] * 0x10000 + (uint)param_4[2] * 0x100 + (uint)*param_4 * 0x1000000 +
          (uint)param_4[3];
  cVar2 = FUN_140409a20(param_2,param_1,uVar6);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    uVar1 = (undefined1)local_res10[0];
    do {
      uVar11 = (ulonglong)(uint)param_1[6];
      lVar8 = uVar7 * 8;
      lVar5 = param_2 + 8 + lVar8;
      pcVar3 = "OUT-OF-RANGE";
      uVar10 = lVar5 - *(longlong *)(param_1 + 2);
      if (uVar10 <= uVar11) {
        pcVar3 = "OK";
      }
      FUN_1402fc370("SANITIZE",lVar5,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",lVar5,
                    *(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar3);
      if (uVar11 < uVar10) {
        return 0;
      }
      uVar4 = (uint)*(byte *)(lVar8 + 3 + param_2) + (uint)*(byte *)(lVar8 + 2 + param_2) * 0x100;
      uVar9 = (uint)*(byte *)(lVar8 + 1 + param_2) + (uint)*(byte *)(lVar8 + param_2) * 0x100;
      if (uVar4 < uVar9) {
        return 0;
      }
      lVar8 = lVar8 + param_2;
      local_res10[0] = (uVar4 - uVar9) + 1;
      cVar2 = FUN_140409580(lVar8 + 4,param_1,param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar4 = (uint)*(byte *)(lVar8 + 5) * 0x10000 + (uint)*(byte *)(lVar8 + 6) * 0x100 +
              (uint)*(byte *)(lVar8 + 4) * 0x1000000 + (uint)*(byte *)(lVar8 + 7);
      if ((uVar4 != 0) &&
         (cVar2 = FUN_14036b180(param_1,(ulonglong)uVar4 + param_2,uVar1,local_res10), cVar2 == '\0'
         )) {
        return 0;
      }
      uVar4 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar4;
    } while (uVar4 < uVar6);
  }
  return 1;
}

