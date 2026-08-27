// Function: FUN_14040c100
// Addr: 14040c100
// Size: 297 bytes


void FUN_14040c100(longlong param_1,uint param_2,uint param_3,code *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  uVar7 = param_2;
  do {
    do {
      uVar8 = uVar7;
      uVar7 = uVar8 + 1;
      if (param_3 <= uVar7) {
        return;
      }
      uVar12 = (ulonglong)uVar7;
      uVar11 = uVar12;
    } while (uVar7 <= param_2);
    do {
      uVar13 = (uint)uVar11 - 1;
      iVar9 = (*param_4)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar13 * 0x14,
                         *(longlong *)(param_1 + 0x70) + uVar12 * 0x14);
      uVar10 = (uint)uVar11;
      if (iVar9 < 1) break;
      uVar11 = (ulonglong)uVar13;
      uVar10 = uVar13;
    } while (param_2 < uVar13);
    if (uVar7 != uVar10) {
      if (1 < (uVar7 - uVar10) + 1) {
        if (*(uint *)(param_1 + 0x1c) < 2) {
          FUN_1403ec280(param_1,uVar10,uVar8 + 2);
        }
        else {
          FUN_14040eef0();
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x70);
      puVar1 = (undefined8 *)(lVar4 + uVar12 * 0x14);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar3 = *(undefined4 *)(lVar4 + 0x10 + uVar12 * 0x14);
      lVar2 = (ulonglong)uVar10 * 0x14;
      FUN_1404210f0(lVar4 + (ulonglong)(uVar10 + 1) * 0x14,lVar2 + lVar4,
                    (ulonglong)(uVar7 - uVar10) * 0x14);
      lVar4 = *(longlong *)(param_1 + 0x70);
      puVar1 = (undefined8 *)(lVar4 + lVar2);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      *(undefined4 *)(lVar4 + 0x10 + lVar2) = uVar3;
    }
  } while( true );
}

