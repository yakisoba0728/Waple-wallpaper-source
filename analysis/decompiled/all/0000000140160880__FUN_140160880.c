// Function: FUN_140160880
// Addr: 140160880
// Size: 489 bytes


longlong FUN_140160880(float *param_1,byte *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  float fVar8;
  
  uVar6 = (((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1]) *
            0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
          0x100000001b3;
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  puVar7 = *(undefined8 **)(param_1 + 2);
  if (puVar5 != *(undefined8 **)(param_1 + 2)) {
    if (*(int *)param_2 == *(int *)(puVar5 + 2)) goto LAB_140160a4e;
    while (puVar7 = puVar5,
          puVar5 != *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
    {
      puVar5 = (undefined8 *)puVar5[1];
      if (*(int *)param_2 == *(int *)(puVar5 + 2)) {
        return (longlong)puVar5 + 0x14;
      }
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_14028af20(0x18);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
  fVar8 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar8 && fVar8 != *param_1) {
    FUN_14004ef70(param_1);
    puVar7 = *(undefined8 **)(param_1 + 2);
    puVar2 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar2 != puVar7) {
      iVar1 = *(int *)(puVar2 + 2);
      puVar7 = puVar2;
      while (*(int *)(puVar5 + 2) != iVar1) {
        if (puVar7 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar6 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_1401609f1;
        puVar7 = (undefined8 *)puVar7[1];
        iVar1 = *(int *)(puVar7 + 2);
      }
      puVar7 = (undefined8 *)*puVar7;
    }
  }
LAB_1401609f1:
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
      return (longlong)puVar5 + 0x14;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar6 * 0x10) != puVar2) goto LAB_140160a4e;
  }
  *(undefined8 **)(lVar3 + 8 + uVar6 * 0x10) = puVar5;
LAB_140160a4e:
  return (longlong)puVar5 + 0x14;
}

