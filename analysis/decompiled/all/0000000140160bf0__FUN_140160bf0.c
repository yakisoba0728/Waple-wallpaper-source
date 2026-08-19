// Function: FUN_140160bf0
// Addr: 140160bf0
// Size: 5 bytes


undefined8 * FUN_140160bf0(float *param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  float fVar8;
  
  puVar7 = *(undefined8 **)(param_1 + 2);
  uVar6 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar5 != puVar7) {
    iVar1 = *(int *)(puVar5 + 2);
    puVar7 = puVar5;
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = puVar7;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar7 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar7 = (undefined8 *)puVar7[1];
      iVar1 = *(int *)(puVar7 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)func_0x00014028aff0(0x18);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
  fVar8 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar8 && fVar8 != *param_1) {
    func_0x00014004f040(param_1);
    puVar7 = *(undefined8 **)(param_1 + 2);
    puVar2 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar2 != puVar7) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar7 = puVar2;
      while (*(int *)(puVar5 + 2) != iVar1) {
        if (puVar7 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto code_r0x000140160d84;
        puVar7 = (undefined8 *)puVar7[1];
        iVar1 = *(int *)(puVar7 + 2);
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
code_r0x000140160d84:
  puVar2 = (undefined8 *)puVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar7;
  puVar5[1] = puVar2;
  *puVar2 = puVar5;
  puVar7[1] = puVar5;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar6 = *(ulonglong *)(param_1 + 0xc) & uVar6;
  puVar4 = *(undefined8 **)(lVar3 + uVar6 * 0x10);
  if (puVar4 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar6 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar7) {
      *(undefined8 **)(lVar3 + uVar6 * 0x10) = puVar5;
      *param_2 = puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar6 * 0x10) != puVar2) goto code_r0x000140160de4;
  }
  *(undefined8 **)(lVar3 + 8 + uVar6 * 0x10) = puVar5;
code_r0x000140160de4:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

