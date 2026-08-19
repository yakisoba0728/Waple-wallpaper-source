// Function: FUN_140169210
// Addr: 140169210
// Size: 366 bytes


void FUN_140169210(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  char local_118 [8];
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  
  lVar1 = *(longlong *)(param_2 + 8);
  uVar5 = *(ulonglong *)(param_2 + 0x30) & 0xc26e191bbabdc4c9;
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 8 + uVar5 * 0x10);
  lVar8 = 0;
  if (lVar7 != lVar1) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x18) + uVar5 * 0x10);
    while( true ) {
      plVar6 = (longlong *)(lVar7 + 0x10);
      if (0xf < *(ulonglong *)(lVar7 + 0x28)) {
        plVar6 = (longlong *)*plVar6;
      }
      if (((*(longlong *)(lVar7 + 0x20) == 8) &&
          (iVar3 = func_0x0001404210c0(plVar6,"LIGHTING"), lVar8 = lVar7, iVar3 == 0)) ||
         (lVar8 = 0, lVar7 == lVar2)) break;
      lVar7 = *(longlong *)(lVar7 + 8);
    }
  }
  plVar6 = param_1 + 2;
  if (lVar8 == 0) {
    lVar8 = lVar1;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (((*plVar6 == 10) && (iVar3 = func_0x0001404210c0(param_1,"LightingV1"), iVar3 == 0)) &&
     (lVar8 != lVar1)) {
    plVar6 = (longlong *)(lVar8 + 0x30);
    if (0xf < *(ulonglong *)(lVar8 + 0x48)) {
      plVar6 = (longlong *)*plVar6;
    }
    iVar3 = func_0x0001402c8390(plVar6);
    if (iVar3 != 0) {
      local_108 = 0xc;
      local_100 = 0xf;
      local_118[0] = s_LIGHTS_POINT_140487700[0];
      local_118[1] = s_LIGHTS_POINT_140487700[1];
      local_118[2] = s_LIGHTS_POINT_140487700[2];
      local_118[3] = s_LIGHTS_POINT_140487700[3];
      local_118[4] = s_LIGHTS_POINT_140487700[4];
      local_118[5] = s_LIGHTS_POINT_140487700[5];
      local_118[6] = s_LIGHTS_POINT_140487700[6];
      local_118[7] = s_LIGHTS_POINT_140487700[7];
      uStack_110 = (ulonglong)(uint)s_LIGHTS_POINT_140487700._8_4_;
      puVar4 = (undefined8 *)FUN_14016e620(param_2,local_118);
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      func_0x0001402c8390(puVar4);
                    /* WARNING: Subroutine does not return */
      FUN_140017310(local_118);
    }
  }
  return;
}

