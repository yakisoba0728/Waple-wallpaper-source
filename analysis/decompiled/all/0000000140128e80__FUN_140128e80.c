// Function: FUN_140128e80
// Addr: 140128e80
// Size: 243 bytes


longlong * FUN_140128e80(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  puVar5 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  uVar4 = 0;
  uVar8 = 0xcbf29ce484222325;
  if (param_3[2] * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar5 + uVar4);
      uVar4 = uVar4 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)(param_3[2] * 2));
  }
  uVar8 = *(ulonglong *)(param_1 + 0x30) & uVar8;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar8 * 0x10);
  if (lVar7 != *(longlong *)(param_1 + 8)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x10);
    while( true ) {
      plVar6 = (longlong *)(lVar7 + 0x10);
      if (7 < *(ulonglong *)(lVar7 + 0x28)) {
        plVar6 = (longlong *)*plVar6;
      }
      puVar5 = param_3;
      if (7 < (ulonglong)param_3[3]) {
        puVar5 = (undefined8 *)*param_3;
      }
      if (param_3[2] == *(longlong *)(lVar7 + 0x20)) {
        if (param_3[2] == 0) {
          bVar9 = false;
        }
        else {
          iVar3 = FUN_1400158b0(puVar5,plVar6);
          bVar9 = iVar3 != 0;
        }
      }
      else {
        bVar9 = true;
      }
      if (!bVar9) break;
      if (lVar7 == lVar2) goto LAB_140128f5a;
      lVar7 = *(longlong *)(lVar7 + 8);
    }
    if (lVar7 != 0) {
      *param_2 = lVar7;
      return param_2;
    }
  }
LAB_140128f5a:
  *param_2 = *(longlong *)(param_1 + 8);
  return param_2;
}

