// Function: FUN_140402700
// Addr: 140402700
// Size: 1041 bytes


ulonglong FUN_140402700(byte *param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  
  pcVar6 = "OUT-OF-RANGE";
  pbVar1 = param_1 + 2;
  pcVar5 = "OUT-OF-RANGE";
  uVar8 = 1;
  uVar9 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar10 = (ulonglong)(uint)param_2[6];
  if (uVar9 <= uVar10) {
    pcVar5 = "OK";
  }
  iVar7 = 0;
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
  if (uVar9 <= uVar10) {
    switch((uint)*param_1 * 0x100 + (uint)param_1[1]) {
    case 0:
      lVar3 = *(longlong *)(param_2 + 2);
      uVar8 = (ulonglong)(uint)param_2[6];
      FUN_1402fc370("SANITIZE",param_1 + 0x106,0);
      return (ulonglong)((ulonglong)((longlong)(param_1 + 0x106) - lVar3) <= uVar8);
    default:
      return uVar8 & 0xff;
    case 4:
      uVar8 = (ulonglong)(uint)param_2[6];
      pbVar1 = param_1 + 0xe;
      uVar10 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
      uVar11 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
      FUN_1402fc370("SANITIZE",pbVar1);
      if (uVar8 < uVar10) {
        return 0;
      }
      uVar2 = ((uint)param_1[7] + (uint)param_1[6] * 0x100) * 4 + 2;
      if ((((ulonglong)(uint)param_2[6] < (ulonglong)((longlong)pbVar1 - *(longlong *)(param_2 + 2))
           ) || ((uint)(param_2[4] - (int)pbVar1) < uVar2)) ||
         (param_2[7] = param_2[7] - uVar2, param_2[7] <= iVar7)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      if ((char)uVar8 != '\0') {
        pcVar6 = "OK";
      }
      FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%u bytes) in [%p..%p] -> %s",pbVar1,pbVar1 + uVar2,
                    CONCAT44(uVar11,uVar2),*(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),
                    pcVar6);
      return uVar8 & 0xff;
    case 6:
      uVar8 = (ulonglong)(uint)param_2[6];
      uVar10 = (longlong)(param_1 + 10) - *(longlong *)(param_2 + 2);
      FUN_1402fc370("SANITIZE",param_1 + 10,0);
      if ((uVar10 <= uVar8) && (cVar4 = FUN_1404078b0(param_1 + 8,param_2), cVar4 != '\0')) {
        return 1;
      }
      break;
    case 10:
      uVar8 = (ulonglong)(uint)param_2[6];
      uVar10 = (longlong)(param_1 + 0x14) - *(longlong *)(param_2 + 2);
      FUN_1402fc370("SANITIZE",param_1 + 0x14,0);
      if ((uVar10 <= uVar8) && (cVar4 = FUN_140408850(param_1 + 0x10,param_2), cVar4 != '\0')) {
        return 1;
      }
      break;
    case 0xc:
    case 0xd:
      uVar8 = (ulonglong)(uint)param_2[6];
      uVar10 = (longlong)(param_1 + 0x10) - *(longlong *)(param_2 + 2);
      FUN_1402fc370("SANITIZE",param_1 + 0x10,0);
      if ((uVar10 <= uVar8) && (cVar4 = FUN_1404082a0(param_1 + 0xc,param_2), cVar4 != '\0')) {
        return 1;
      }
      break;
    case 0xe:
      uVar8 = FUN_140402b50(param_1,param_2);
      return uVar8;
    }
  }
  return 0;
}

