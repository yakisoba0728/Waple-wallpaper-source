// Function: FUN_1403458d0
// Addr: 1403458d0
// Size: 216 bytes


ulonglong FUN_1403458d0(longlong param_1,uint *param_2,ulonglong *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar5 = param_2[1];
  uVar9 = (ulonglong)uVar5;
  if ((uVar5 != *param_2) && (lVar6 = *(longlong *)(param_1 + 0x4e0), lVar6 != 0)) {
    puVar7 = *(undefined1 **)(param_2 + 2);
    puVar8 = *(undefined1 **)(lVar6 + 0x30);
    if ((puVar8 <= puVar7 + (-4 - (ulonglong)(uVar5 * 4))) &&
       (((puVar7 + (-4 - (ulonglong)(uVar5 * 4)) <
          puVar8 + (ulonglong)(uint)(*(int *)(lVar6 + 0x28) << 2) + 4 && (puVar8 <= puVar7)) &&
        (puVar7 <= (undefined1 *)
                   (((ulonglong)*(uint *)(lVar6 + 0x88) - 4) + *(longlong *)(lVar6 + 0x80)))))) {
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *(undefined1 *)(param_3 + 1) = 0;
      uVar10 = (ulonglong)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) +
               *(longlong *)(lVar6 + 0x30);
      if ((*(ulonglong *)(lVar6 + 0x40) <= uVar10) &&
         (uVar9 = (ulonglong)*(uint *)(lVar6 + 0x88) + *(longlong *)(lVar6 + 0x80), uVar10 < uVar9))
      {
        *param_3 = uVar10;
        param_2[1] = param_2[1] + 1;
        *(undefined1 **)(param_2 + 2) = puVar7 + 4;
        return CONCAT71((int7)(uVar9 >> 8),1);
      }
    }
  }
  return uVar9 & 0xffffffffffffff00;
}

