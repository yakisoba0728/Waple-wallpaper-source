// Function: FUN_1403ad480
// Addr: 1403ad480
// Size: 463 bytes


undefined8 FUN_1403ad480(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x10);
  fVar10 = *(float *)(lVar3 + 0x70);
  if ((*(uint *)(lVar2 + 0x38) & 0xfffffffe) == 4) {
    if (fVar10 <= 0.0) {
      fVar10 = DAT_14049287c;
    }
    uVar5 = (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7);
    if (uVar5 == 0) {
      puVar4 = &DAT_14045dd10;
    }
    else {
      puVar4 = (undefined8 *)((ulonglong)uVar5 + param_1);
    }
    fVar10 = (float)FUN_1403ced40(puVar4,param_1,fVar10,param_3);
    FUN_14041a5c0(fVar10 * *(float *)(lVar3 + 0x50) + DAT_1404926c0);
    uVar5 = *(uint *)(lVar2 + 0x60);
    if (uVar5 != 0) {
      uVar7 = 0;
      do {
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        if (uVar5 <= uVar6) break;
      } while (*(char *)(*(longlong *)(lVar2 + 0x70) + 0x10 + uVar7 * 0x14) < '\0');
      uVar9 = 0;
      if (uVar5 != 0) {
        do {
          uVar8 = uVar7;
          piVar1 = (int *)(*(longlong *)(lVar2 + 0x80) + uVar9 * 0x14);
          *piVar1 = *piVar1 + (int)extraout_XMM0_Da;
          uVar7 = uVar8;
          do {
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            if (*(uint *)(lVar2 + 0x60) <= uVar6) break;
          } while (*(char *)(*(longlong *)(lVar2 + 0x70) + 0x10 + uVar7 * 0x14) < '\0');
          uVar9 = uVar8;
          if (uVar5 <= (uint)uVar8) {
            return 1;
          }
        } while( true );
      }
    }
  }
  else {
    if (fVar10 <= 0.0) {
      fVar10 = DAT_14049287c;
    }
    uVar5 = (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100;
    if (uVar5 == 0) {
      puVar4 = &DAT_14045dd10;
    }
    else {
      puVar4 = (undefined8 *)((ulonglong)uVar5 + param_1);
    }
    fVar10 = (float)FUN_1403ced40(puVar4,param_1,fVar10,param_3);
    FUN_14041a5c0(fVar10 * *(float *)(lVar3 + 0x54) + DAT_1404926c0);
    uVar5 = *(uint *)(lVar2 + 0x60);
    if (uVar5 != 0) {
      uVar9 = 0;
      uVar7 = uVar9;
      do {
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        if (uVar5 <= uVar6) break;
      } while (*(char *)(*(longlong *)(lVar2 + 0x70) + 0x10 + uVar7 * 0x14) < '\0');
      if (uVar5 != 0) {
        do {
          uVar8 = uVar7;
          piVar1 = (int *)(*(longlong *)(lVar2 + 0x80) + 4 + uVar9 * 0x14);
          *piVar1 = *piVar1 + (int)extraout_XMM0_Da_00;
          uVar7 = uVar8;
          do {
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            if (*(uint *)(lVar2 + 0x60) <= uVar6) break;
          } while (*(char *)(*(longlong *)(lVar2 + 0x70) + 0x10 + uVar7 * 0x14) < '\0');
          uVar9 = uVar8;
        } while ((uint)uVar8 < uVar5);
      }
    }
  }
  return 1;
}

