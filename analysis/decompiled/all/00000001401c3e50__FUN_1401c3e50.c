// Function: FUN_1401c3e50
// Addr: 1401c3e50
// Size: 422 bytes


void FUN_1401c3e50(longlong *param_1,char *param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined1 local_68 [16];
  longlong local_58 [5];
  
  sVar5 = strlen(param_2);
  uVar12 = 0;
  uVar11 = 0xcbf29ce484222325;
  if (sVar5 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + uVar12);
      uVar12 = uVar12 + 1;
      uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
    } while (uVar12 < sVar5);
  }
  lVar9 = param_1[10];
  lVar10 = *(longlong *)(param_1[0xc] + 8 + (uVar11 & param_1[0xf]) * 0x10);
  if (lVar10 == lVar9) {
LAB_1401c3ef2:
    lVar10 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1[0xc] + (uVar11 & param_1[0xf]) * 0x10);
    cVar4 = FUN_14000d010(lVar10 + 0x10,param_2);
    while (cVar4 == '\0') {
      if (lVar10 == lVar2) goto LAB_1401c3ef2;
      lVar10 = *(longlong *)(lVar10 + 8);
      cVar4 = FUN_14000d010(lVar10 + 0x10,param_2);
    }
  }
  if ((lVar10 != 0) && (lVar10 != lVar9)) {
    FUN_1401c4220();
    return;
  }
  uVar6 = FUN_1401c3c70(param_1,*(undefined8 *)(*param_1 + 0x1898),param_2);
  uVar7 = FUN_14028af20(0x1e0);
  uVar7 = FUN_1401c17a0(uVar7);
  uVar13 = FUN_1401c5490(param_1,uVar6,uVar7);
  FUN_1401c4220(uVar13,uVar7,param_3);
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  sVar5 = strlen(param_2);
  FUN_140017480(local_58,param_2,sVar5);
  plVar8 = (longlong *)FUN_1401a7600(param_1 + 9,local_68,local_58);
  *(undefined8 *)(*plVar8 + 0x30) = uVar7;
  if (0xf < (ulonglong)local_58[3]) {
    uVar11 = local_58[3] + 1;
    lVar9 = local_58[0];
    if (0xfff < uVar11) {
      lVar9 = *(longlong *)(local_58[0] + -8);
      if (0x1f < (local_58[0] - lVar9) - 8U) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = local_58[3] + 0x28;
    }
    thunk_FUN_14028af80(lVar9,uVar11);
  }
  return;
}

