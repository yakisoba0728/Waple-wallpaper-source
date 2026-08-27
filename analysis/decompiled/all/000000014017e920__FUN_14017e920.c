// Function: FUN_14017e920
// Addr: 14017e920
// Size: 445 bytes


void FUN_14017e920(longlong param_1,char *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  lVar1 = *(longlong *)(param_1 + 0x1e0);
  local_48 = 0;
  local_40 = 0;
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  sVar8 = strlen(param_2);
  FUN_140017480(&local_58,param_2,sVar8);
  uVar5 = local_40;
  uVar12 = local_48;
  pppuVar4 = local_58;
  puVar11 = (undefined8 *)(*(undefined8 **)(lVar1 + 0x20))[1];
  cVar6 = *(char *)((longlong)puVar11 + 0x19);
  puVar14 = *(undefined8 **)(lVar1 + 0x20);
  while (cVar6 == '\0') {
    uVar2 = puVar11[6];
    puVar9 = puVar11 + 4;
    ppppuVar10 = &local_58;
    if (0xf < uVar5) {
      ppppuVar10 = (undefined8 ****)pppuVar4;
    }
    if (0xf < (ulonglong)puVar11[7]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    uVar13 = uVar2;
    if (uVar12 < uVar2) {
      uVar13 = uVar12;
    }
    iVar7 = memcmp(puVar9,ppppuVar10,uVar13);
    if (iVar7 == 0) {
      if (uVar2 < uVar12) {
        cVar6 = -1;
        goto LAB_14017e9e5;
      }
      if (uVar12 < uVar2) goto LAB_14017e9e3;
LAB_14017e9ef:
      puVar9 = (undefined8 *)*puVar11;
    }
    else {
      if (iVar7 < 0) {
        cVar6 = -1;
      }
      else {
LAB_14017e9e3:
        cVar6 = '\x01';
      }
LAB_14017e9e5:
      if (-1 < cVar6) goto LAB_14017e9ef;
      puVar9 = (undefined8 *)puVar11[2];
      puVar11 = puVar14;
    }
    puVar14 = puVar11;
    puVar11 = puVar9;
    cVar6 = *(char *)((longlong)puVar9 + 0x19);
  }
  if (*(char *)((longlong)puVar14 + 0x19) == '\0') {
    puVar11 = puVar14 + 4;
    uVar2 = puVar14[6];
    if (0xf < (ulonglong)puVar14[7]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    ppppuVar10 = &local_58;
    if (0xf < uVar5) {
      ppppuVar10 = (undefined8 ****)pppuVar4;
    }
    uVar13 = uVar12;
    if (uVar2 < uVar12) {
      uVar13 = uVar2;
    }
    iVar7 = memcmp(ppppuVar10,puVar11,uVar13);
    if (iVar7 == 0) {
      if (uVar2 <= uVar12) {
        if (uVar12 <= uVar2) goto LAB_14017ea57;
        goto LAB_14017ea4c;
      }
      cVar6 = -1;
    }
    else if (iVar7 < 0) {
      cVar6 = -1;
    }
    else {
LAB_14017ea4c:
      cVar6 = '\x01';
    }
    if (-1 < cVar6) goto LAB_14017ea57;
  }
  puVar14 = *(undefined8 **)(lVar1 + 0x20);
LAB_14017ea57:
  if (0xf < uVar5) {
    uVar12 = uVar5 + 1;
    ppppuVar10 = (undefined8 ****)pppuVar4;
    if (0xfff < uVar12) {
      ppppuVar10 = (undefined8 ****)pppuVar4[-1];
      if (0x1f < (ulonglong)((longlong)pppuVar4 + (-8 - (longlong)ppppuVar10))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar12 = uVar5 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar10,uVar12);
  }
  if (puVar14 != *(undefined8 **)(lVar1 + 0x20)) {
    FUN_1404210f0(param_1 + 0x120 + (longlong)*(char *)((longlong)puVar14 + 0x45) * 4,param_3,
                  (longlong)param_4 << 2);
    *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 3;
  }
  return;
}

