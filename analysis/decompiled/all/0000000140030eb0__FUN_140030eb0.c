// Function: FUN_140030eb0
// Addr: 140030eb0
// Size: 4 bytes


longlong * FUN_140030eb0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar2 = param_3[3];
  puVar8 = param_3;
  if (0xf < uVar2) {
    puVar8 = (undefined8 *)*param_3;
  }
  uVar3 = param_3[2];
  uVar7 = 0;
  uVar11 = 0xcbf29ce484222325;
  if (uVar3 != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar8 + uVar7);
      uVar7 = uVar7 + 1;
      uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < uVar3);
  }
  uVar11 = *(ulonglong *)(param_1 + 0x30) & uVar11;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar11 * 0x10);
  if (lVar10 == lVar4) {
    lVar10 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar11 * 0x10);
    while( true ) {
      plVar9 = (longlong *)(lVar10 + 0x10);
      if (0xf < *(ulonglong *)(lVar10 + 0x28)) {
        plVar9 = (longlong *)*plVar9;
      }
      puVar8 = param_3;
      if (0xf < uVar2) {
        puVar8 = (undefined8 *)*param_3;
      }
      if ((uVar3 == *(ulonglong *)(lVar10 + 0x20)) &&
         ((uVar3 == 0 || (iVar6 = func_0x0001404210c0(puVar8,plVar9,uVar3), iVar6 == 0))))
      goto code_r0x000140030f85;
      if (lVar10 == lVar5) break;
      lVar10 = *(longlong *)(lVar10 + 8);
    }
    lVar10 = 0;
  }
code_r0x000140030f85:
  if (lVar10 == 0) {
    lVar10 = lVar4;
  }
  *param_2 = lVar10;
  return param_2;
}

