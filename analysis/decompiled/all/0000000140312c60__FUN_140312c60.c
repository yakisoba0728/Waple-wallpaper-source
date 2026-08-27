// Function: FUN_140312c60
// Addr: 140312c60
// Size: 453 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140312c60(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_48 [32];
  char local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1404dc040 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0x438);
  uVar7 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x3f8);
    uVar9 = 0;
    uVar10 = 0;
    uVar12 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x440);
      if (*(short *)(param_1 + 0x132) == 0) {
        puVar8 = (undefined1 *)((ulonglong)(uVar12 * 2) + lVar3);
        uVar4 = (uint)CONCAT11(*puVar8,puVar8[1]);
        if (puVar8 + 4 <= (undefined1 *)((ulonglong)(uVar1 * 2) + lVar3)) {
          uVar4 = (uint)CONCAT11(puVar8[2],puVar8[3]);
        }
        uVar11 = (uint)CONCAT11(*puVar8,puVar8[1]) * 2;
        uVar6 = (ulonglong)(uVar4 * 2);
      }
      else {
        puVar8 = (undefined1 *)((ulonglong)(uVar12 * 4) + lVar3);
        uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]);
        if ((undefined1 *)((ulonglong)(uVar1 * 4) + lVar3) < puVar8 + 8) {
          uVar6 = (ulonglong)uVar11;
        }
        else {
          uVar6 = (ulonglong)CONCAT31(CONCAT21(CONCAT11(puVar8[4],puVar8[5]),puVar8[6]),puVar8[7]);
        }
      }
      uVar4 = uVar9;
      if (uVar11 <= uVar2) {
        if (uVar2 < (uint)uVar6) {
          uVar6 = (ulonglong)(uVar1 - 2);
          if (uVar12 != uVar1 - 2) goto LAB_140312d98;
          uVar6 = (ulonglong)uVar2;
        }
        iVar5 = uVar2 - uVar11;
        if (uVar11 <= (uint)uVar6) {
          iVar5 = (uint)uVar6 - uVar11;
        }
        if ((iVar5 != 0) && (uVar10 = uVar10 + 1, uVar4 = uVar12, 1 < uVar10)) break;
      }
LAB_140312d98:
      uVar9 = uVar4;
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar1);
    if (uVar10 == 1) {
      if (uVar9 == 0) {
        uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
      }
      else {
        iVar5 = FUN_1402f0170(param_1,uVar9,local_28,8);
        if ((iVar5 == 0) && (local_28[0] == '.')) {
          iVar5 = strncmp(local_28,".notdef",8);
          uVar7 = (ulonglong)(iVar5 == 0);
        }
      }
    }
  }
  return uVar7;
}

