// Function: FUN_1403f4e60
// Addr: 1403f4e60
// Size: 553 bytes


void FUN_1403f4e60(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_1403bef40(param_2);
  uVar9 = *(uint *)(param_1 + 0x1c);
  puVar1 = (undefined1 *)(param_1 + 0x18);
  pdVar10 = (double *)&DAT_1404e4f20;
  if (uVar9 - 4 < uVar9) {
    local_38 = *(undefined8 *)(param_1 + ((ulonglong)(uVar9 - 4) + 4) * 8);
  }
  else {
    *puVar1 = 1;
    DAT_1404e4f20 = DAT_14045dd10;
    local_38 = DAT_14045dd10;
  }
  if (uVar9 - 3 < *(uint *)(param_1 + 0x1c)) {
    uStack_30 = *(undefined8 *)(puVar1 + ((ulonglong)(uVar9 - 3) + 1) * 8);
  }
  else {
    *puVar1 = 1;
    DAT_1404e4f20 = DAT_14045dd10;
    uStack_30 = DAT_14045dd10;
  }
  uVar6 = *(uint *)(param_1 + 0x1c);
  if (uVar9 - 2 < uVar6) {
    pdVar7 = (double *)(puVar1 + ((ulonglong)(uVar9 - 2) + 1) * 8);
  }
  else {
    *puVar1 = 1;
    DAT_1404e4f20 = DAT_14045dd10;
    pdVar7 = (double *)&DAT_1404e4f20;
    uVar6 = *(uint *)(param_1 + 0x1c);
  }
  uVar8 = (uint)*pdVar7;
  plVar2 = param_2 + 3;
  if (uVar8 < 0x100) {
    uVar5 = (uint)(byte)(&DAT_14045d050)[uVar8];
    lVar3 = *plVar2;
    if (*(undefined8 **)(lVar3 + 0x50) == &DAT_14045dd10) {
      if ((*(int *)(lVar3 + 0xf4) != 0) || (0xe4 < uVar8)) goto LAB_1403f4f9d;
    }
    else {
      uVar5 = FUN_1403c9290(*(undefined8 **)(lVar3 + 0x50),(&DAT_14045d050)[uVar8],
                            *(undefined4 *)(lVar3 + 0x128));
    }
  }
  else {
LAB_1403f4f9d:
    uVar5 = 0;
  }
  if (uVar9 - 1 < uVar6) {
    pdVar10 = (double *)(puVar1 + ((ulonglong)(uVar9 - 1) + 1) * 8);
  }
  else {
    *puVar1 = 1;
    DAT_1404e4f20 = DAT_14045dd10;
  }
  uVar9 = (uint)*pdVar10;
  lVar3 = *plVar2;
  if (uVar9 < 0x100) {
    uVar6 = (uint)(byte)(&DAT_14045d050)[uVar9];
    if (*(undefined8 **)(lVar3 + 0x50) != &DAT_14045dd10) {
      uVar6 = FUN_1403c9290(*(undefined8 **)(lVar3 + 0x50),(&DAT_14045d050)[uVar9],
                            *(undefined4 *)(lVar3 + 0x128));
      goto LAB_1403f5016;
    }
    if ((*(int *)(lVar3 + 0xf4) == 0) && (uVar9 < 0xe5)) goto LAB_1403f5016;
  }
  uVar6 = 0;
LAB_1403f5016:
  if ((((*(char *)(param_1 + 0x11e0) != '\0') || (uVar5 == 0)) || (uVar6 == 0)) ||
     ((cVar4 = FUN_14039b530(lVar3,*param_2,uVar5,param_2[1],1,0), cVar4 == '\0' ||
      (cVar4 = FUN_14039b530(*plVar2,*param_2,uVar6,param_2[1],1,&local_38), cVar4 == '\0')))) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}

