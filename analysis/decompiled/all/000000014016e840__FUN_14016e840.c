// Function: FUN_14016e840
// Addr: 14016e840
// Size: 655 bytes


undefined8 * FUN_14016e840(float *param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  
  puVar8 = *(undefined8 **)(param_1 + 2);
  uVar7 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar5 != puVar8) {
    iVar1 = *(int *)(puVar5 + 2);
    puVar8 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar8 = (undefined8 *)puVar8[1];
      iVar1 = *(int *)(puVar8 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x199999999999999) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_14028af20(0xa0);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  puVar5[3] = 0;
  *(undefined2 *)((longlong)puVar5 + 0x81) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x83) = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0xf;
  *(undefined1 *)(puVar5 + 4) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0xf;
  *(undefined1 *)(puVar5 + 8) = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0xf;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x84) = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar9 && fVar9 != *param_1) {
    uVar6 = FUN_140012f40(param_1);
    FUN_1401650d0(param_1,uVar6);
    puVar8 = *(undefined8 **)(param_1 + 2);
    puVar2 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar2 != puVar8) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar8 = puVar2;
      while (*(int *)(puVar5 + 2) != iVar1) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_14016ea51;
        puVar8 = (undefined8 *)puVar8[1];
        iVar1 = *(int *)(puVar8 + 2);
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_14016ea51:
  puVar2 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar8;
  puVar5[1] = puVar2;
  *puVar2 = puVar5;
  puVar8[1] = puVar5;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  puVar4 = *(undefined8 **)(lVar3 + uVar7 * 0x10);
  if (puVar4 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar7 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar8) {
      *(undefined8 **)(lVar3 + uVar7 * 0x10) = puVar5;
      *param_2 = puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) != puVar2) goto LAB_14016eab1;
  }
  *(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) = puVar5;
LAB_14016eab1:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

