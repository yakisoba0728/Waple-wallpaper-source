// Function: FUN_1403d73c0
// Addr: 1403d73c0
// Size: 846 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1403d73c0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  ulonglong param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 *local_90;
  longlong local_88;
  undefined1 local_78 [8];
  undefined4 local_70;
  int local_6c;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_c8;
  puVar3 = (undefined8 *)FUN_140397f70(*(longlong *)(param_1 + 0x20) + 400);
  pbVar8 = (byte *)&DAT_14045dd10;
  puVar7 = &DAT_14045dd10;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar3;
  }
  if (*(uint *)(puVar7 + 3) < 0xe) {
    pbVar9 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar9 = (byte *)puVar7[2];
  }
  if (((uint)pbVar9[3] + (uint)pbVar9[2] * 0x100 == 0) &&
     ((ushort)((ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1]) == 0)) {
LAB_1403d7501:
    puVar3 = (undefined8 *)FUN_1403982e0(*(longlong *)(param_1 + 0x20) + 0x1b0);
    puVar7 = &DAT_14045dd10;
    if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar3;
    }
    if (*(uint *)(puVar7 + 3) < 10) {
      puVar7 = &DAT_14045dd10;
    }
    else {
      puVar7 = (undefined8 *)puVar7[2];
    }
    if (((uint)*(byte *)((longlong)puVar7 + 3) * 0x10000 +
         (uint)*(byte *)((longlong)puVar7 + 4) * 0x100 +
         (uint)*(byte *)((longlong)puVar7 + 2) * 0x1000000 + (uint)*(byte *)((longlong)puVar7 + 5)
         != 0) && (puVar7 = (undefined8 *)FUN_1403f6f70(puVar3,param_3), puVar7 != &DAT_14045dd10))
    {
      local_88 = 0;
      if (*(longlong *)(param_4 + 0x98) != 0) {
        local_88 = *(longlong *)(*(longlong *)(param_4 + 0x98) + 0x48);
      }
      local_90 = (undefined1 *)0x0;
      local_98 = 0;
      local_a0 = 0x73766720;
      local_a8 = local_a8 & 0xffffffff00000000;
      iVar2 = (**(code **)(param_4 + 0x58))(param_4,param_5,puVar7,0);
      FUN_140414150(puVar7);
      if (iVar2 != 0) goto LAB_1403d76d2;
    }
    lVar4 = FUN_140397ed0(*(longlong *)(param_1 + 0x20) + 0x1a0);
    puVar7 = &DAT_14045dd10;
    if (*(undefined8 **)(lVar4 + 8) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(lVar4 + 8);
    }
    if (3 < *(uint *)(puVar7 + 3)) {
      pbVar8 = (byte *)puVar7[2];
    }
    if (((uint)pbVar8[1] + (uint)*pbVar8 * 0x100 != 0) &&
       (iVar2 = FUN_1403c99a0(param_1,param_3,local_68,0), iVar2 != 0)) {
      local_a8 = local_a8 & 0xffffffffffffff00;
      cVar1 = FUN_1403c7e70(lVar4,param_1,param_3,local_78);
      if ((cVar1 != '\0') &&
         (lVar4 = FUN_1403f7170(lVar4,param_1,param_3), *(char *)(lVar4 + 4) != '\0')) {
        local_88 = 0;
        if (*(longlong *)(param_4 + 0x98) != 0) {
          local_88 = *(longlong *)(*(longlong *)(param_4 + 0x98) + 0x48);
        }
        local_90 = local_68;
        local_98 = 0;
        local_a0 = 0x706e6720;
        local_a8 = CONCAT44(local_a8._4_4_,-local_6c);
        iVar2 = (**(code **)(param_4 + 0x58))(param_4,param_5,lVar4,local_70);
        FUN_140414150(lVar4);
        if (iVar2 != 0) goto LAB_1403d76d2;
      }
    }
    uVar5 = FUN_140398ba0(*(longlong *)(param_1 + 0x20) + 0x1a8);
    local_a8 = param_5;
    cVar1 = FUN_1403f0470(uVar5,param_1,param_3,param_4);
    bVar10 = cVar1 != '\0';
  }
  else {
    lVar4 = puVar3[1];
    if (lVar4 == 0) {
LAB_1403d7483:
      lVar4 = _calloc_base(1,0x48);
      if (lVar4 != 0) goto LAB_1403d749e;
    }
    else {
      LOCK();
      bVar10 = lVar4 == puVar3[1];
      if (bVar10) {
        puVar3[1] = 0;
      }
      UNLOCK();
      if (!bVar10) goto LAB_1403d7483;
LAB_1403d749e:
      puVar7 = &DAT_14045dd10;
      if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*puVar3;
      }
      puVar6 = &DAT_14045dd10;
      if (0xd < *(uint *)(puVar7 + 3)) {
        puVar6 = (undefined8 *)puVar7[2];
      }
      local_90 = (undefined1 *)CONCAT71(local_90._1_7_,1);
      local_98 = param_7;
      local_a0 = param_6;
      local_a8 = param_5;
      local_88 = lVar4;
      cVar1 = FUN_1403ee850(puVar6,param_1,param_3,param_4);
      FUN_1403f7430(puVar3,lVar4);
      if (cVar1 == '\0') goto LAB_1403d7501;
    }
LAB_1403d76d2:
    bVar10 = true;
  }
  return bVar10;
}

