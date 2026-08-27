// Function: FUN_1403f1030
// Addr: 1403f1030
// Size: 930 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403f1030(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  longlong local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined1 local_108 [40];
  undefined1 local_e0 [48];
  longlong local_b0;
  ulonglong local_78;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_158;
  if ((*(byte *)(param_1 + 0xb5) & 1) == 0) {
    if ((*(byte *)(param_1 + 0xb5) & 8) != 0) {
      FUN_1403d10d0();
    }
  }
  else {
    local_128 = FUN_1403c4ed0(*(longlong *)(param_2 + 0x20) + 0x148);
    local_44 = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    local_48 = (undefined1)((uint)uVar3 >> 0x18);
    local_47 = (undefined1)((uint)uVar3 >> 0x10);
    local_46 = (undefined1)((uint)uVar3 >> 8);
    local_45 = (undefined1)uVar3;
    if (((*(longlong *)(param_3 + 0xe8) == 0) ||
        (cVar6 = FUN_1403ec530(param_3,param_2,"start table GPOS script tag \'%s\'",&local_48),
        cVar6 != '\0')) &&
       (local_138 = (undefined8 *)param_3, FUN_14036b980(param_1 + 0x28,&local_128,param_1,param_2),
       *(longlong *)(param_3 + 0xe8) != 0)) {
      FUN_1403ec530(param_3,param_2,"end table GPOS script tag \'%s\'",&local_48);
    }
  }
  if ((*(byte *)(param_1 + 0xb5) & 2) != 0) {
    puVar7 = (ulonglong *)FUN_1403c54d0(*(longlong *)(param_2 + 0x20) + 0x130);
    local_138 = (undefined8 *)*puVar7;
    FUN_140394860(local_108,param_1,param_2,param_3);
    cVar6 = FUN_1403ec530(param_3,param_2,"start table kern");
    if (cVar6 == '\0') {
      FUN_1403beff0(local_e0);
      if (local_b0 != 0) {
        FUN_1403beff0(local_e0);
      }
    }
    else {
      puVar1 = puVar7 + 4;
      local_78 = FUN_1403bc830(puVar1);
      puVar9 = &DAT_14045dd10;
      if ((undefined8 *)*puVar7 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)*puVar7;
      }
      if (*(uint *)(puVar9 + 3) < 4) {
        pbVar10 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar10 = (byte *)puVar9[2];
      }
      iVar12 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
      if (iVar12 == 0) {
        FUN_1403a6ef0(pbVar10,local_108,puVar7 + 1);
      }
      else if (iVar12 == 1) {
        FUN_1403a6a80(pbVar10,local_108);
      }
      uVar5 = local_78;
      if (local_78 != 0) {
        LOCK();
        uVar2 = *puVar1;
        if (uVar2 == 0) {
          *puVar1 = local_78;
        }
        UNLOCK();
        if (uVar2 != 0) {
          FUN_1403c29e0(local_78);
          thunk_FUN_1402d9040(uVar5);
        }
      }
      FUN_1403ec530(param_3,param_2,"end table kern");
      FUN_1403beff0(local_e0);
      if (local_b0 != 0) {
        FUN_1403beff0(local_e0);
      }
    }
    goto LAB_1403f1350;
  }
  if ((*(byte *)(param_1 + 0xb5) & 4) == 0) goto LAB_1403f1350;
  if ((*(uint *)(param_3 + 0x38) & 0xfffffffe) == 4) {
    if (*(undefined **)(*(longlong *)(param_2 + 0x90) + 0x88) != PTR_FUN_1404df4b0)
    goto LAB_1403f12bb;
    puVar11 = *(undefined **)(param_2 + 0x18);
    if ((puVar11 != (undefined *)0x0) && (puVar11 != &DAT_1404ded88)) {
      uVar8 = 0xd;
LAB_1403f12ab:
      cVar6 = FUN_1403d0d40(puVar11,uVar8);
      if (cVar6 != '\0') goto LAB_1403f12bb;
    }
LAB_1403f12b4:
    bVar4 = true;
  }
  else {
    if (*(undefined **)(*(longlong *)(param_2 + 0x90) + 0x90) == PTR_FUN_1404df4b8) {
      puVar11 = *(undefined **)(param_2 + 0x18);
      if ((puVar11 != (undefined *)0x0) && (puVar11 != &DAT_1404ded88)) {
        uVar8 = 0xe;
        goto LAB_1403f12ab;
      }
      goto LAB_1403f12b4;
    }
LAB_1403f12bb:
    bVar4 = false;
  }
  if ((!bVar4) && (cVar6 = FUN_1403ec530(param_3,param_2,"start fallback kern"), cVar6 != '\0')) {
    uVar13 = *(uint *)(param_3 + 0x38) & 0xfffffffd;
    if (uVar13 == 5) {
      FUN_1403f8e70(param_3,0,*(undefined4 *)(param_3 + 0x60));
    }
    local_120 = *(undefined4 *)(param_3 + 0x38);
    local_118 = &local_128;
    local_110 = 0;
    local_138 = (undefined8 *)((ulonglong)local_138 & 0xffffffffffffff00);
    local_128 = param_2;
    FUN_1403ea0a0(&local_118,param_2,param_3,*(undefined4 *)(param_1 + 0xb0));
    if (uVar13 == 5) {
      FUN_1403f8e70(param_3,0,*(undefined4 *)(param_3 + 0x60));
    }
    FUN_1403ec530(param_3,param_2,"end fallback kern");
  }
LAB_1403f1350:
  if ((*(byte *)(param_1 + 0xb5) & 0x20) != 0) {
    uVar8 = FUN_1403c5750(*(longlong *)(param_2 + 0x20) + 0x178);
    local_138 = &DAT_14045dd10;
    FUN_140394860(local_108,param_1,param_2,param_3);
    FUN_1403ad480(uVar8,local_108,0);
    FUN_1403beff0(local_e0);
    if (local_b0 != 0) {
      FUN_1403beff0(local_e0);
    }
  }
  return;
}

