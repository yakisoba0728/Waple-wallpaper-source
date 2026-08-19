// Function: FUN_140015530
// Addr: 140015530
// Size: 282 bytes


uint * FUN_140015530(uint *param_1,uint *param_2)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  short *psVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  
  uVar9 = *(ulonglong *)(param_2 + 6);
  puVar10 = param_2;
  if (7 < uVar9) {
    puVar10 = *(uint **)param_2;
  }
  lVar2 = *(longlong *)(param_2 + 4);
  lVar3 = lVar2 * 2;
  if ((lVar3 >> 1 < 2) || (0x19 < (*puVar10 & 0xffffffdf) - 0x3a0041)) {
    puVar4 = (uint *)FUN_140015f60(puVar10,(short *)(lVar3 + (longlong)puVar10));
    if (puVar10 != puVar4) goto LAB_1400155b9;
  }
  else if ((2 < lVar3 >> 1) && (((short)puVar10[1] == 0x5c || ((short)puVar10[1] == 0x2f)))) {
LAB_1400155b9:
    if (param_1 == param_2) {
      return param_1;
    }
    if (7 < uVar9) {
      param_2 = *(uint **)param_2;
    }
    FUN_140016bb0(param_1,param_2,lVar2);
    return param_1;
  }
  puVar10 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar10 = *(uint **)param_1;
  }
  psVar1 = (short *)((longlong)puVar10 + *(longlong *)(param_1 + 4) * 2);
  puVar4 = param_2;
  if (7 < uVar9) {
    puVar4 = *(uint **)param_2;
  }
  puVar12 = (uint *)(lVar3 + (longlong)puVar4);
  psVar5 = (short *)FUN_140015f60(puVar10,psVar1);
  puVar6 = (uint *)FUN_140015f60(puVar4,puVar12);
  if (puVar4 != puVar6) {
    uVar7 = (longlong)puVar6 - (longlong)puVar4 >> 1;
    uVar11 = (longlong)psVar5 - (longlong)puVar10 >> 1;
    uVar9 = uVar11;
    if (uVar7 < uVar11) {
      uVar9 = uVar7;
    }
    uVar8 = thunk_FUN_14028e320(puVar10,puVar4,uVar9);
    if (((uVar8 != uVar9) || (uVar11 < uVar7)) || (uVar7 < uVar11)) {
      if (param_1 == param_2) {
        return param_1;
      }
      if (7 < *(ulonglong *)(param_2 + 6)) {
        FUN_140016bb0(param_1,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 4));
        return param_1;
      }
      FUN_140016bb0(param_1,param_2,*(undefined8 *)(param_2 + 4));
      return param_1;
    }
  }
  if ((puVar6 == puVar12) || (((short)*puVar6 != 0x5c && ((short)*puVar6 != 0x2f)))) {
    if (psVar5 == psVar1) {
      if ((longlong)psVar5 - (longlong)puVar10 < 6) goto code_r0x0001400156e9;
    }
    else if ((psVar1[-1] == 0x5c) || (psVar1[-1] == 0x2f)) goto code_r0x0001400156e9;
    func_0x000140016200(param_1,0x5c);
  }
  else {
    func_0x0001400154f0(param_1,(longlong)psVar5 - (longlong)puVar10 >> 1);
  }
code_r0x0001400156e9:
  FUN_1400165a0(param_1,puVar6,(longlong)puVar12 - (longlong)puVar6 >> 1);
  return param_1;
}

