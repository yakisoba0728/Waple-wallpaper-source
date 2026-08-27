// Function: FUN_14037b580
// Addr: 14037b580
// Size: 532 bytes


ulonglong FUN_14037b580(byte *param_1,int *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  pbVar1 = param_1 + 2;
  uVar11 = (ulonglong)(uint)param_2[6];
  pcVar5 = "OUT-OF-RANGE";
  uVar12 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar10 = 1;
  if (uVar12 <= uVar11) {
    pcVar5 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
  if (uVar12 <= uVar11) {
    iVar6 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    iVar9 = (int)uVar10;
    if (iVar6 == iVar9) {
      lVar2 = *(longlong *)(param_2 + 2);
      uVar10 = (ulonglong)(uint)param_2[6];
      FUN_1402fc370("SANITIZE",param_1 + 6,0);
      if (((ulonglong)((longlong)(param_1 + 6) - lVar2) <= uVar10) &&
         (cVar3 = FUN_1404093d0(pbVar1,param_2,param_1), cVar3 != '\0')) {
        bVar7 = param_1[3];
        uVar8 = (uint)*pbVar1 * 0x100 + (uint)bVar7;
        if (uVar8 != 0) {
          cVar3 = FUN_140374b40(param_2,param_1 + uVar8);
          if (cVar3 == '\0') {
            return 0;
          }
          bVar7 = param_1[3];
        }
        uVar8 = (uint)bVar7 + (uint)*pbVar1 * 0x100;
        if (uVar8 == 0) {
          param_1 = (byte *)&DAT_14045dd10;
        }
        else {
          param_1 = param_1 + uVar8;
        }
        uVar10 = FUN_1403ce2f0(param_1);
        uVar8 = param_2[7];
        if ((-1 < (int)uVar8) && (uVar4 = (uint)(uVar10 >> 1) & 0x7fffffff, uVar4 < uVar8)) {
          param_2[7] = uVar8 - uVar4;
          return 1;
        }
        param_2[7] = -1;
      }
    }
    else {
      if (iVar6 - iVar9 != iVar9) {
        return uVar10 & 0xff;
      }
      cVar3 = FUN_1404093d0(pbVar1,param_2,param_1);
      if ((cVar3 != '\0') &&
         (((uVar8 = (uint)param_1[3] + (uint)*pbVar1 * 0x100, uVar8 == 0 ||
           (cVar3 = FUN_140374b40(param_2,param_1 + uVar8), cVar3 != '\0')) &&
          (cVar3 = FUN_1404078b0(param_1 + 4,param_2), cVar3 != '\0')))) {
        return 1;
      }
    }
  }
  return 0;
}

