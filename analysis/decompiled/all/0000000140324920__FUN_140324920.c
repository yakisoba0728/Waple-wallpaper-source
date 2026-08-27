// Function: FUN_140324920
// Addr: 140324920
// Size: 710 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140324920(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  lVar11 = *(longlong *)(param_1 + 8);
  uVar7 = param_3 - 1;
  if (param_3 == 0) {
    uVar7 = 0;
  }
  if ((lVar11 != 0) && (uVar7 < *(uint *)(lVar11 + 0x218))) {
    local_58 = param_2;
    if (((param_4 & 9) == 0) &&
       (uVar4 = FUN_140326e20(param_1,param_2,uVar7,param_4 >> 0x16 & 0xffffff01), (int)uVar4 == 0))
    {
      return uVar4;
    }
    if ((param_4 >> 0xe & 1) == 0) {
      uVar1 = *(undefined8 *)(lVar11 + 0xa0);
      local_50 = *(longlong *)(lVar11 + 0x228) + (ulonglong)uVar7 * 0x10;
      uVar3 = *(undefined4 *)(lVar11 + 0x110);
      uVar10 = *(undefined4 *)(local_50 + 8);
      FUN_1402f1060(*(undefined8 *)(param_1 + 0x120));
      *(undefined4 *)(param_1 + 0x110) = 0;
      local_68 = uVar10;
      uVar4 = FUN_140325860(param_1 + 0xf8,uVar1,uVar3);
      lVar8 = local_58;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      lVar5 = *(longlong *)(param_1 + 0x120);
      *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
      uVar1 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar5 + 0x18);
      *(undefined8 *)(param_1 + 0xa0) = uVar1;
      uVar3 = *(undefined4 *)(lVar5 + 0x2c);
      uVar10 = *(undefined4 *)(lVar5 + 0x30);
      uVar2 = *(undefined4 *)(lVar5 + 0x34);
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(lVar5 + 0x28);
      *(undefined4 *)(param_1 + 0xac) = uVar3;
      *(undefined4 *)(param_1 + 0xb0) = uVar10;
      *(undefined4 *)(param_1 + 0xb4) = uVar2;
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar5 + 0x38);
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 4;
      if (*(ushort *)(local_58 + 0x1a) < 0x18) {
        *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x100;
      }
      uVar10 = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      uVar3 = *(undefined4 *)(local_50 + 4);
      if (*(int *)(lVar11 + 0x18c) != *(int *)(lVar11 + 0x188)) {
        uVar3 = FUN_1402f20b0(uVar3);
        uVar10 = *(undefined4 *)(param_1 + 0x40);
      }
      iVar9 = 0;
      if ((*(byte *)(lVar11 + 0x1a0) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x40) = uVar3;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = uVar3;
        uVar3 = uVar10;
      }
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined8 *)(param_1 + 0x44) = 0;
      if ((param_4 & 1) == 0) {
        lVar11 = (longlong)*(int *)(lVar8 + 0x1c);
        lVar8 = (longlong)*(int *)(lVar8 + 0x20);
        piVar6 = *(int **)(param_1 + 0xa0);
        if (*(short *)(param_1 + 0x9a) != 0) {
          do {
            lVar5 = *piVar6 * lVar11;
            iVar9 = iVar9 + 1;
            *piVar6 = (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
            lVar5 = piVar6[1] * lVar8;
            piVar6[1] = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
            piVar6 = piVar6 + 2;
          } while (iVar9 < (int)(uint)*(ushort *)(param_1 + 0x9a));
        }
        lVar11 = *(int *)(param_1 + 0x40) * lVar11;
        *(int *)(param_1 + 0x40) = (int)((ulonglong)((lVar11 >> 0x3f) + 0x8000 + lVar11) >> 0x10);
        lVar8 = *(int *)(param_1 + 0x4c) * lVar8;
        *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
      }
      FUN_1402f3050((undefined8 *)(param_1 + 0x98),&local_50);
      *(int *)(param_1 + 0x38) = (int)local_50;
      *(int *)(param_1 + 0x30) = local_48 - (int)local_50;
      *(int *)(param_1 + 0x34) = local_44 - local_50._4_4_;
      *(int *)(param_1 + 0x3c) = local_44 - (local_44 - local_50._4_4_);
      return uVar4 & 0xffffffff;
    }
  }
  return 6;
}

