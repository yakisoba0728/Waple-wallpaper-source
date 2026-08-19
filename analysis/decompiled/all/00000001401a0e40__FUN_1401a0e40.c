// Function: FUN_1401a0e40
// Addr: 1401a0e40
// Size: 57 bytes


undefined8 * FUN_1401a0e40(float *param_1,undefined8 *param_2,byte *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  float fVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 2);
  uVar5 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar4 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar4 != puVar6) {
    lVar1 = puVar4[2];
    puVar6 = puVar4;
    while( true ) {
      if (*(longlong *)param_3 == lVar1) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar6 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar6 = (undefined8 *)puVar6[1];
      lVar1 = puVar6[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)func_0x00014028aff0(0x18);
  puVar4[2] = *(undefined8 *)param_3;
  fVar7 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar7 && fVar7 != *param_1) {
    FUN_1401a28f0(param_1);
    puVar6 = *(undefined8 **)(param_1 + 2);
    puVar2 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar2 != puVar6) {
      lVar1 = puVar2[2];
      puVar6 = puVar2;
      while (puVar4[2] != lVar1) {
        if (puVar6 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar5 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto code_r0x0001401a1002;
        puVar6 = (undefined8 *)puVar6[1];
        lVar1 = puVar6[2];
      }
      puVar6 = (undefined8 *)*puVar6;
    }
  }
code_r0x0001401a1002:
  puVar2 = (undefined8 *)puVar6[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = puVar6;
  puVar4[1] = puVar2;
  *puVar2 = puVar4;
  puVar6[1] = puVar4;
  lVar1 = *(longlong *)(param_1 + 6);
  uVar5 = *(ulonglong *)(param_1 + 0xc) & uVar5;
  puVar3 = *(undefined8 **)(lVar1 + uVar5 * 0x10);
  if (puVar3 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar1 + uVar5 * 0x10) = puVar4;
  }
  else {
    if (puVar3 == puVar6) {
      *(undefined8 **)(lVar1 + uVar5 * 0x10) = puVar4;
      *param_2 = puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(undefined8 **)(lVar1 + 8 + uVar5 * 0x10) != puVar2) goto code_r0x0001401a1062;
  }
  *(undefined8 **)(lVar1 + 8 + uVar5 * 0x10) = puVar4;
code_r0x0001401a1062:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

