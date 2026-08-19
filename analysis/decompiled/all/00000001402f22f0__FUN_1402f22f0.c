// Function: FUN_1402f22f0
// Addr: 1402f22f0
// Size: 8 bytes


int FUN_1402f22f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if (param_1 == 0) {
    return 0x23;
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 == 0) {
    return 6;
  }
  lVar2 = *(longlong *)(lVar1 + 0x10);
  iVar4 = *(int *)(*(longlong *)(lVar1 + 0x18) + 0x40);
  if (iVar4 < 1) {
    puVar5 = (undefined8 *)0x0;
    if (iVar4 < 0) {
      iVar9 = 6;
      goto code_r0x0001402f23d7;
    }
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(lVar2 + 8))(lVar2,iVar4);
    iVar9 = 0x40;
    if (puVar5 == (undefined8 *)0x0) {
code_r0x0001402f23d7:
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = 0;
      }
      return iVar9;
    }
    func_0x000140421870(puVar5,0,(longlong)iVar4);
  }
  iVar4 = 0;
  puVar5[1] = param_1;
  puVar8 = *(undefined8 **)(param_1 + 0x90);
  lVar1 = puVar8[3];
  lVar3 = puVar8[2];
  *puVar5 = puVar8[1];
  puVar6 = (undefined8 *)(**(code **)(lVar3 + 8))(lVar3,0x38);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar5[0x1e] = puVar6;
    if ((*(uint *)*puVar8 & 0x200) == 0) {
      plVar7 = (longlong *)(**(code **)(lVar3 + 8))(lVar3,0xb0);
      if (plVar7 == (longlong *)0x0) {
        iVar4 = 0x40;
      }
      else {
        func_0x000140421870(plVar7 + 1,0,0xa8);
        *plVar7 = lVar3;
        *puVar6 = plVar7;
      }
      if (iVar4 == 0) goto code_r0x0001402f2457;
    }
    else {
code_r0x0001402f2457:
      if (*(code **)(lVar1 + 0x68) != (code *)0x0) {
        iVar4 = (**(code **)(lVar1 + 0x68))(puVar5);
      }
    }
    if ((*(uint *)(puVar5[1] + 8) & 0x10000) == 0) {
      if (iVar4 == 0) {
code_r0x0001402f24af:
        puVar5[2] = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 **)(param_1 + 0x78) = puVar5;
        if (param_2 == (undefined8 *)0x0) {
          return 0;
        }
        *param_2 = puVar5;
        return 0;
      }
      goto code_r0x0001402f24ef;
    }
    puVar8 = (undefined8 *)(**(code **)(lVar3 + 8))(lVar3,0x48);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar5[0x1d] = puVar8;
      goto code_r0x0001402f24af;
    }
  }
  iVar4 = 0x40;
code_r0x0001402f24ef:
  FUN_1402f7150(puVar5);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
  return iVar4;
}

