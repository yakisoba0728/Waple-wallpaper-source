// Function: FUN_1402f91c0
// Addr: 1402f91c0
// Size: 440 bytes


uint FUN_1402f91c0(undefined8 param_1,undefined8 param_2,uint *param_3,longlong param_4,char param_5
                  )

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  
  plVar4 = (longlong *)FUN_1402f9140(param_1,param_3);
  if (*plVar4 != 0) {
    if (param_5 == '\0') {
      return 0;
    }
    *(undefined8 *)(*plVar4 + 8) = param_2;
    return 0;
  }
  puVar5 = (undefined8 *)(**(code **)(param_4 + 8))(param_4,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    return 0x40;
  }
  *plVar4 = (longlong)puVar5;
  uVar9 = 0;
  *puVar5 = param_1;
  puVar5[1] = param_2;
  if (param_3[2] < *param_3) goto LAB_1402f9329;
  uVar1 = param_3[1];
  uVar2 = uVar1 * 2;
  param_3[1] = uVar2;
  *param_3 = uVar2 / 3;
  if ((int)uVar2 < 0) {
    param_3[8] = 0;
    param_3[9] = 0;
    return 6;
  }
  plVar4 = *(longlong **)(param_3 + 8);
  if (uVar2 == 0) {
    uVar10 = 0;
    param_3[8] = 0;
    param_3[9] = 0;
LAB_1402f92ec:
    plVar8 = plVar4;
    if (uVar1 != 0) {
      do {
        if ((undefined8 *)*plVar8 != (undefined8 *)0x0) {
          plVar7 = (longlong *)FUN_1402f9140(*(undefined8 *)*plVar8,param_3);
          *plVar7 = *plVar8;
        }
        uVar9 = uVar9 + 1;
        plVar8 = plVar8 + 1;
      } while (uVar9 < uVar1);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4,plVar4);
      goto LAB_1402f9329;
    }
  }
  else {
    if (0xfffffff < (int)uVar2) {
      param_3[8] = 0;
      param_3[9] = 0;
      return 10;
    }
    lVar6 = (**(code **)(param_4 + 8))(param_4,uVar1 << 4);
    bVar3 = true;
    uVar10 = 0x40;
    if ((lVar6 != 0) && (bVar3 = false, uVar10 = uVar9, 0 < (int)uVar2)) {
      FUN_1404217a0(lVar6,0,(longlong)(int)(uVar1 << 4));
      *(longlong *)(param_3 + 8) = lVar6;
      goto LAB_1402f92ec;
    }
    *(longlong *)(param_3 + 8) = lVar6;
    if (!bVar3) goto LAB_1402f92ec;
  }
  if (uVar10 != 0) {
    return uVar10;
  }
LAB_1402f9329:
  param_3[2] = param_3[2] + 1;
  return 0;
}

