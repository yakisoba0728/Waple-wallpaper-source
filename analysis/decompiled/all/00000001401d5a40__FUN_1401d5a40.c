// Function: FUN_1401d5a40
// Addr: 1401d5a40
// Size: 526 bytes


undefined4 * FUN_1401d5a40(longlong *param_1,char *param_2)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  size_t sVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 local_res8 [8];
  undefined1 local_68 [16];
  longlong local_58 [5];
  
  sVar6 = strlen(param_2);
  uVar12 = 0;
  uVar11 = 0xcbf29ce484222325;
  if (sVar6 != 0) {
    do {
      pbVar2 = (byte *)(param_2 + uVar12);
      uVar12 = uVar12 + 1;
      uVar11 = (uVar11 ^ *pbVar2) * 0x100000001b3;
    } while (uVar12 < sVar6);
  }
  lVar8 = param_1[0x2c];
  lVar10 = *(longlong *)(param_1[0x2e] + 8 + (uVar11 & param_1[0x31]) * 0x10);
  if (lVar10 == lVar8) {
LAB_1401d5aeb:
    lVar10 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1[0x2e] + (uVar11 & param_1[0x31]) * 0x10);
    cVar5 = FUN_14000d010(lVar10 + 0x10,param_2);
    while (cVar5 == '\0') {
      if (lVar10 == lVar3) goto LAB_1401d5aeb;
      lVar10 = *(longlong *)(lVar10 + 8);
      cVar5 = FUN_14000d010(lVar10 + 0x10,param_2);
    }
  }
  if ((lVar10 != 0) && (lVar10 != lVar8)) {
    piVar1 = (int *)(*(longlong *)(lVar10 + 0x30) + 0x230);
    *piVar1 = *piVar1 + 1;
    return *(undefined4 **)(lVar10 + 0x30);
  }
  puVar7 = (undefined4 *)FUN_14028af20(0x250);
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  FUN_1401d5ca0(puVar7 + 4);
  *(undefined8 *)(puVar7 + 0x8c) = 1;
  *(undefined8 *)(puVar7 + 0x8e) = 0;
  *(undefined8 *)(puVar7 + 0x90) = 0;
  *(undefined8 *)(puVar7 + 0x92) = 0;
  local_res8[0] = 0;
  sVar6 = strlen(param_2);
  FUN_14000f880(puVar7 + 0x84,param_2,sVar6);
  lVar8 = FUN_1400d4160(*(undefined8 *)(*param_1 + 0x1898),param_2,local_res8,1);
  *(longlong *)(puVar7 + 2) = lVar8;
  if (lVar8 != 0) {
    FUN_140261880(lVar8,local_res8[0],puVar7 + 4);
    FUN_1401d7760(param_1,puVar7);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  sVar6 = strlen(param_2);
  FUN_140017480(local_58,param_2,sVar6);
  plVar9 = (longlong *)FUN_1401a7600(param_1 + 0x2b,local_68,local_58);
  *(undefined4 **)(*plVar9 + 0x30) = puVar7;
  if (0xf < (ulonglong)local_58[3]) {
    uVar11 = local_58[3] + 1;
    lVar8 = local_58[0];
    if (0xfff < uVar11) {
      lVar8 = *(longlong *)(local_58[0] + -8);
      if (0x1f < (local_58[0] - lVar8) - 8U) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        pcVar4 = (code *)swi(3);
        puVar7 = (undefined4 *)(*pcVar4)();
        return puVar7;
      }
      uVar11 = local_58[3] + 0x28;
    }
    thunk_FUN_14028af80(lVar8,uVar11);
  }
  return puVar7;
}

