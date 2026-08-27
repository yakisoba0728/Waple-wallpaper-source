// Function: FUN_14035b900
// Addr: 14035b900
// Size: 597 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14035b900(undefined8 param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_2f8 [32];
  uint local_2d8;
  uint local_2d4;
  longlong local_2d0;
  undefined1 local_2c8 [640];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_2f8;
  lVar3 = *(longlong *)(param_2 + 0x70);
  uVar12 = (ulonglong)param_3;
  uVar8 = (ulonglong)param_3;
  uVar13 = 0xdc;
  local_2d4 = param_4;
  local_2d0 = param_2;
  do {
    uVar7 = (uint)uVar8;
    while (uVar6 = (uint)uVar8, uVar7 < param_4) {
      uVar2 = *(ushort *)(lVar3 + 0x10 + uVar8 * 0x14);
      if (((uVar2 & 0x1f) - 10 < 3) && (uVar13 <= uVar2 >> 8)) goto LAB_14035b98e;
      uVar7 = uVar6 + 1;
      uVar8 = (ulonglong)uVar7;
    }
    if (uVar7 == param_4) {
      return;
    }
LAB_14035b98e:
    uVar2 = *(ushort *)(lVar3 + 0x10 + uVar8 * 0x14);
    if (((2 < (uVar2 & 0x1f) - 10) || (uVar2 >> 8 <= uVar13)) && (uVar5 = uVar8, uVar6 < param_4)) {
      while( true ) {
        uVar2 = *(ushort *)(lVar3 + 0x10 + uVar5 * 0x14);
        if ((2 < (uVar2 & 0x1f) - 10) || (uVar2 >> 8 != uVar13)) break;
        uVar7 = 0;
        while (*(int *)(lVar3 + uVar5 * 0x14) != (&DAT_140454498)[uVar7]) {
          uVar7 = uVar7 + 1;
          if (0xd < uVar7) goto LAB_14035ba16;
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
        if (param_4 <= uVar7) break;
      }
LAB_14035ba16:
      uVar7 = (uint)uVar5;
      if (uVar6 != uVar7) {
        uVar11 = (uint)uVar12;
        local_2d8 = uVar7;
        if (1 < uVar7 - uVar11) {
          if (*(uint *)(param_2 + 0x1c) < 2) {
            FUN_1403ec280(param_2,uVar12,uVar5);
          }
          else {
            FUN_14040eef0();
          }
        }
        lVar9 = (ulonglong)(uVar7 - uVar6) * 0x14;
        FUN_1404210f0(local_2c8,lVar3 + uVar8 * 0x14,lVar9);
        uVar10 = (uVar11 - uVar6) + uVar7;
        lVar1 = lVar3 + uVar12 * 0x14;
        FUN_1404210f0(lVar3 + (ulonglong)uVar10 * 0x14,lVar1,(ulonglong)(uVar6 - uVar11) * 0x14);
        FUN_1404210f0(lVar1,local_2c8,lVar9);
        while (uVar11 < uVar10) {
          uVar2 = *(ushort *)(lVar3 + 0x10 + uVar12 * 0x14);
          if ((uVar2 & 0x1f) - 10 < 3) {
            uVar4 = 0x1a00;
            if (uVar13 == 0xdc) {
              uVar4 = 0x1900;
            }
            *(ushort *)(lVar3 + uVar12 * 0x14 + 0x10) = uVar4 | uVar2 & 0xff;
          }
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          uVar7 = local_2d8;
        }
        uVar8 = (ulonglong)uVar7;
        param_2 = local_2d0;
        param_4 = local_2d4;
      }
    }
    uVar13 = uVar13 + 10;
    if (0xe6 < uVar13) {
      return;
    }
  } while( true );
}

