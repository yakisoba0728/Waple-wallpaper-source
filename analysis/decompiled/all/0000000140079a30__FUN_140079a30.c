// Function: FUN_140079a30
// Addr: 140079a30
// Size: 244 bytes


longlong FUN_140079a30(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  uVar2 = param_2[3];
  uVar3 = param_2[2];
  puVar7 = param_2;
  if (0xf < uVar2) {
    puVar7 = (undefined8 *)*param_2;
  }
  uVar8 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (uVar3 != 0) {
    do {
      pbVar1 = (byte *)(uVar8 + (longlong)puVar7);
      uVar8 = uVar8 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar8 < uVar3);
  }
  uVar10 = uVar10 & *(ulonglong *)(param_1 + 0x30);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar10 * 0x10);
  if (lVar6 != *(longlong *)(param_1 + 8)) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar10 * 0x10);
    while( true ) {
      plVar9 = (longlong *)(lVar6 + 0x10);
      if (0xf < *(ulonglong *)(lVar6 + 0x28)) {
        plVar9 = (longlong *)*plVar9;
      }
      puVar7 = param_2;
      if (0xf < uVar2) {
        puVar7 = (undefined8 *)*param_2;
      }
      if ((uVar3 == *(ulonglong *)(lVar6 + 0x20)) &&
         ((uVar3 == 0 || (iVar5 = func_0x0001404210c0(puVar7,plVar9,uVar3), iVar5 == 0)))) {
        return lVar6 + 0x30;
      }
      if (lVar6 == lVar4) break;
      lVar6 = *(longlong *)(lVar6 + 8);
    }
  }
  if (*(longlong *)(param_1 + 0x10) == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("unordered_map/set too long");
  }
  lVar6 = func_0x00014028aff0(0x70);
                    /* WARNING: Subroutine does not return */
  FUN_140017090(lVar6 + 0x10,param_2);
}

