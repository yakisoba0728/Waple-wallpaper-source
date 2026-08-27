// Function: FUN_14036add0
// Addr: 14036add0
// Size: 463 bytes


undefined1
FUN_14036add0(int *param_1,byte *param_2,undefined8 param_3,longlong *param_4,undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_38 [2];
  undefined8 local_30;
  
  cVar3 = FUN_140409110(param_2,param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar7 = 0;
  uVar8 = param_2[1] + 1 + (uint)*param_2 * 0x100;
  if (uVar8 != 0) {
    do {
      local_30 = *param_5;
      uVar10 = (ulonglong)(uint)param_1[6];
      lVar1 = uVar7 * 8;
      lVar2 = *param_4;
      pbVar5 = param_2 + lVar1 + 10;
      pcVar4 = "OUT-OF-RANGE";
      uVar9 = (longlong)pbVar5 - *(longlong *)(param_1 + 2);
      if (uVar9 <= uVar10) {
        pcVar4 = "OK";
      }
      FUN_1402fc370("SANITIZE",pbVar5,0,1,*param_1 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar5
                    ,*(longlong *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar4);
      if (uVar10 < uVar9) {
        return 0;
      }
      if ((uint)param_2[lVar1 + 3] * 0x10000 + (uint)param_2[lVar1 + 4] * 0x100 +
          (uint)param_2[lVar1 + 2] * 0x1000000 + (uint)param_2[lVar1 + 5] == 0x73666e74) {
        local_38[0] = (uint)param_2[lVar1 + 6] * 0x100 + 1 + (uint)param_2[lVar1 + 7];
      }
      else {
        local_38[0] = 0;
      }
      cVar3 = FUN_1404093d0(param_2 + lVar1 + 8,param_1,lVar2);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = FUN_1403743d0(param_1,(ulonglong)param_2[lVar1 + 9] +
                                    (ulonglong)param_2[lVar1 + 8] * 0x100 + lVar2,local_38,&local_30
                           );
      if (cVar3 == '\0') {
        return 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar8);
  }
  return 1;
}

