// Function: FUN_140321c40
// Addr: 140321c40
// Size: 77 bytes


ulonglong FUN_140321c40(longlong param_1,undefined8 *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  pcVar1 = (char *)*param_2;
  lVar7 = (longlong)param_3;
  if (*pcVar1 == '\x1e') {
    uVar4 = FUN_14031ff80(pcVar1,*(undefined8 *)(param_1 + 0x10),param_3,0);
    return uVar4;
  }
  if (*pcVar1 == -1) {
    uVar5 = CONCAT31(CONCAT21(CONCAT11(pcVar1[1],pcVar1[2]),pcVar1[3]),pcVar1[4]);
    if (param_3 != 0) {
      uVar2 = -uVar5;
      if ((int)-uVar5 < 0) {
        uVar2 = uVar5;
      }
      if (*(int *)(&UNK_14043d9e8 + lVar7 * 4) < (int)uVar2) {
        uVar4 = 0x80000001;
        if (0 < (int)uVar5) {
          uVar4 = 0x7fffffff;
        }
        return uVar4;
      }
      uVar5 = uVar5 * *(int *)(&DAT_14043d9c0 + lVar7 * 4);
    }
    return (ulonglong)uVar5;
  }
  iVar3 = FUN_14031fe40(pcVar1,*(undefined8 *)(param_1 + 0x10));
  if ((int)lVar7 != 0) {
    iVar6 = -iVar3;
    if (-iVar3 < 0) {
      iVar6 = iVar3;
    }
    if (*(int *)(&UNK_14043d9e8 + lVar7 * 4) < iVar6 * 0x10000) {
      uVar4 = 0x80000001;
      if (0 < iVar3) {
        uVar4 = 0x7fffffff;
      }
      return uVar4;
    }
    iVar3 = iVar3 * *(int *)(&DAT_14043d9c0 + lVar7 * 4);
  }
  if (0x7fff < iVar3) {
    return 0x7fffffff;
  }
  if (iVar3 < -0x7fff) {
    return 0x80000001;
  }
  return (ulonglong)(uint)(iVar3 << 0x10);
}

