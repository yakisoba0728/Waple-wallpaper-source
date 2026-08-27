// Function: FUN_1401c3c70
// Addr: 1401c3c70
// Size: 467 bytes


longlong FUN_1401c3c70(longlong param_1,undefined8 param_2,char *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  char cVar3;
  size_t sVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_88 [16];
  longlong local_78 [7];
  ulonglong local_40;
  
  sVar4 = strlen(param_3);
  uVar9 = 0;
  uVar8 = 0xcbf29ce484222325;
  if (sVar4 != 0) {
    do {
      pbVar1 = (byte *)(param_3 + uVar9);
      uVar9 = uVar9 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
    } while (uVar9 < sVar4);
  }
  uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x38);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + uVar8 * 0x10);
  if (lVar5 == *(longlong *)(param_1 + 0x10)) {
LAB_1401c3d0f:
    lVar5 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar8 * 0x10);
    cVar3 = FUN_14000d010(lVar5 + 0x10,param_3);
    while (cVar3 == '\0') {
      if (lVar5 == lVar7) goto LAB_1401c3d0f;
      lVar5 = *(longlong *)(lVar5 + 8);
      cVar3 = FUN_14000d010(lVar5 + 0x10,param_3);
    }
  }
  if ((lVar5 != 0) && (lVar5 != *(longlong *)(param_1 + 0x10))) {
    return *(longlong *)(lVar5 + 0x30);
  }
  FUN_1400d3f80(local_78 + 4,param_2,param_3,1);
  lVar5 = FUN_14028af20(0x28);
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined1 *)(lVar5 + 8) = 0;
  *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0xfffffeff;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  FUN_14003f220(local_78 + 4,lVar5,0);
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  sVar4 = strlen(param_3);
  FUN_140017480(local_78,param_3,sVar4);
  plVar6 = (longlong *)FUN_1401a7600(param_1 + 8,local_88,local_78);
  *(longlong *)(*plVar6 + 0x30) = lVar5;
  if (0xf < (ulonglong)local_78[3]) {
    uVar8 = local_78[3] + 1;
    lVar7 = local_78[0];
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(local_78[0] + -8);
      if (0x1f < (local_78[0] - lVar7) - 8U) goto LAB_1401c3e3b;
      uVar8 = local_78[3] + 0x28;
    }
    thunk_FUN_14028af80(lVar7,uVar8);
  }
  if (0xf < local_40) {
    uVar8 = local_40 + 1;
    lVar7 = local_78[4];
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(local_78[4] + -8);
      if (0x1f < (local_78[4] - lVar7) - 8U) {
LAB_1401c3e3b:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        lVar5 = (*pcVar2)();
        return lVar5;
      }
      uVar8 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(lVar7,uVar8);
  }
  return lVar5;
}

