// Function: FUN_140135c40
// Addr: 140135c40
// Size: 453 bytes


undefined8 FUN_140135c40(longlong param_1,uint *param_2,int *param_3,longlong param_4)

{
  int *piVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong *plVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 local_48 [16];
  
  if (*(longlong *)(param_1 + 0x60) == *(longlong *)(param_1 + 0x68)) {
LAB_140135dee:
    uVar6 = 0;
  }
  else {
    uVar14 = (int)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3) * 0x38e38e39;
    do {
      while( true ) {
        uVar14 = uVar14 - 1;
        if ((int)uVar14 < 0) goto LAB_140135dee;
        uVar13 = 0xcbf29ce484222325;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar14 * 0x48);
        if (*(int *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar14 * 0x48) == 0) break;
        puVar3 = *(undefined8 **)(param_1 + 0x140);
        for (puVar12 = *(undefined8 **)(param_1 + 0x138); puVar12 != puVar3; puVar12 = puVar12 + 5)
        {
          if (*(int *)((longlong)puVar12 + 0x24) == *piVar1) {
            if (*(ulonglong *)(piVar1 + 8) < 8) {
              piVar11 = piVar1 + 2;
            }
            else {
              piVar11 = *(int **)(piVar1 + 2);
            }
            puVar8 = puVar12;
            if (7 < (ulonglong)puVar12[3]) {
              puVar8 = (undefined8 *)*puVar12;
            }
            if ((puVar12[2] == *(longlong *)(piVar1 + 6)) &&
               ((puVar12[2] == 0 || (iVar4 = FUN_1400158b0(puVar8,piVar11), iVar4 == 0))))
            goto LAB_140135d31;
          }
        }
      }
      piVar11 = piVar1 + 2;
      piVar9 = piVar11;
      if (7 < *(ulonglong *)(piVar1 + 8)) {
        piVar9 = *(int **)piVar11;
      }
      uVar7 = 0;
      if (*(longlong *)(piVar1 + 6) * 2 != 0) {
        do {
          pbVar2 = (byte *)(uVar7 + (longlong)piVar9);
          uVar7 = uVar7 + 1;
          uVar13 = (uVar13 ^ *pbVar2) * 0x100000001b3;
        } while (uVar7 < (ulonglong)(*(longlong *)(piVar1 + 6) * 2));
      }
      lVar5 = FUN_14007cbd0(param_1 + 0xf8,local_48,piVar11,uVar13);
      lVar5 = *(longlong *)(lVar5 + 8);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(param_1 + 0x100);
      }
    } while (lVar5 == *(longlong *)(param_1 + 0x100));
LAB_140135d31:
    plVar10 = (longlong *)(piVar1 + 10);
    *param_2 = uVar14;
    *param_3 = piVar1[1];
    if ((longlong *)param_4 != plVar10) {
      if (0xf < *(ulonglong *)(piVar1 + 0x10)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_14000f880(param_4,plVar10,*(undefined8 *)(piVar1 + 0xe));
    }
    uVar6 = 1;
  }
  return uVar6;
}

