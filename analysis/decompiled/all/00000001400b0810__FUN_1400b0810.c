// Function: FUN_1400b0810
// Addr: 1400b0810
// Size: 1185 bytes


char * FUN_1400b0810(longlong param_1,uint *param_2,longlong *param_3,undefined1 param_4)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte bVar12;
  byte *pbVar13;
  byte local_res8;
  uint local_78;
  longlong local_68 [3];
  undefined8 local_50;
  
  bVar12 = 0;
  local_78 = 0;
  uVar9 = 0;
  pbVar10 = (byte *)0x0;
  pbVar13 = (byte *)0x0;
  if ((param_3 != (longlong *)0x0) && (lVar2 = *param_3, lVar2 != 0)) {
    pbVar10 = (byte *)(param_3[3] + lVar2);
    pbVar13 = (byte *)(param_3[2] + lVar2);
  }
  iVar6 = *(int *)(param_1 + 0x10c);
  bVar3 = true;
  if (iVar6 == 0) {
    iVar6 = 1;
LAB_1400b08cf:
    if (pbVar10 != pbVar13) {
      bVar1 = *pbVar10;
      bVar12 = 1;
      pbVar10 = pbVar10 + 1;
      local_res8 = 1;
      *(byte *)(param_1 + 0x4b) = -((bVar1 & 0x40) != 0) & 4;
      if ((char)bVar1 < '\0') {
        local_78 = 1 << (bVar1 & 7) + 1;
        uVar9 = 0;
        goto LAB_1400b0914;
      }
      if ((*(char *)(param_1 + 0x46) != '\0') && (*(char *)(param_1 + 0x4a) == '\0')) {
        pcVar8 = "#gif: bad palette";
        goto LAB_1400b0a3a;
      }
      if (*(char *)(param_1 + 0x5c) == '\0') {
        bVar12 = 0;
        local_res8 = 0;
      }
      else {
        FUN_1404210f0(param_1 + 0x1518,param_1 + 0x1118,0x400);
        bVar12 = 1;
      }
      goto LAB_1400b0b00;
    }
LAB_1400b0a13:
    pcVar8 = "$base: short read";
  }
  else {
    bVar12 = *(byte *)(param_1 + 0xfde0);
    local_78 = *(uint *)(param_1 + 0xfde4);
    uVar9 = *(uint *)(param_1 + 65000);
    if (iVar6 == 1) goto LAB_1400b08cf;
    local_res8 = bVar12;
    if (iVar6 == 2) goto LAB_1400b091d;
    if (iVar6 == 3) {
      while (pbVar10 != pbVar13) {
        uVar7 = *(uint *)(param_1 + 0xfdf0);
        *(ulonglong *)(param_1 + 0xfdf0) = *(ulonglong *)(param_1 + 0xfdf0) & 0xffffffffffffff00;
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        uVar4 = uVar7 & 0xff;
        uVar11 = (ulonglong)bVar1 << (0x38U - (char)uVar7 & 0x3f) | *(ulonglong *)(param_1 + 0xfdf0)
        ;
        *(ulonglong *)(param_1 + 0xfdf0) = uVar11;
        if (uVar4 == 0x10) {
          uVar11 = uVar11 >> 0x28;
          while( true ) {
            uVar7 = uVar9 * 4;
            *(char *)((ulonglong)uVar7 + 0x1518 + param_1) = (char)uVar11;
            *(char *)((ulonglong)(uVar7 + 1) + 0x1518 + param_1) = (char)(uVar11 >> 8);
            *(char *)((ulonglong)(uVar7 + 2) + 0x1518 + param_1) = (char)(uVar11 >> 0x10);
            uVar9 = uVar9 + 1;
            *(undefined1 *)((ulonglong)(uVar7 + 3) + 0x1518 + param_1) = 0xff;
LAB_1400b0914:
            if (local_78 <= uVar9) goto joined_r0x0001400b0a68;
LAB_1400b091d:
            if ((longlong)pbVar13 - (longlong)pbVar10 < 3) break;
            uVar11 = (ulonglong)CONCAT21(CONCAT11(*pbVar10,pbVar10[1]),pbVar10[2]);
            pbVar10 = pbVar10 + 3;
          }
          *(undefined8 *)(param_1 + 0xfdf0) = 0;
          iVar6 = 3;
        }
        else {
          *(ulonglong *)(param_1 + 0xfdf0) = uVar4 + 8 | uVar11;
        }
      }
      goto LAB_1400b0a13;
    }
    if (iVar6 == 4) goto LAB_1400b0c63;
    bVar3 = false;
    pcVar8 = (char *)0x0;
  }
  *(byte *)(param_1 + 0xfde0) = bVar12;
  *(uint *)(param_1 + 0xfde4) = local_78;
  iVar5 = 0;
  if (bVar3) {
    iVar5 = iVar6;
  }
  *(uint *)(param_1 + 65000) = uVar9;
  *(int *)(param_1 + 0x10c) = iVar5;
LAB_1400b0a3a:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)pbVar10 - *param_3;
  }
  return pcVar8;
joined_r0x0001400b0a68:
  for (; uVar9 < 0x100; uVar9 = uVar9 + 1) {
    uVar7 = uVar9 * 4;
    *(undefined1 *)(param_1 + 0x1518 + (ulonglong)uVar7) = 0;
    *(undefined1 *)(param_1 + 0x1518 + (ulonglong)(uVar7 + 1)) = 0;
    *(undefined1 *)(param_1 + 0x1518 + (ulonglong)(uVar7 + 2)) = 0;
    *(undefined1 *)(param_1 + 0x1518 + (ulonglong)(uVar7 + 3)) = 0xff;
  }
LAB_1400b0b00:
  if (*(char *)(param_1 + 0x5c) != '\0') {
    *(undefined1 *)(param_1 + 0x1518 + (ulonglong)*(byte *)(param_1 + 0x5d) * 4) = 0;
    *(undefined1 *)(param_1 + 0x1519 + (ulonglong)*(byte *)(param_1 + 0x5d) * 4) = 0;
    *(undefined1 *)(param_1 + 0x151a + (ulonglong)*(byte *)(param_1 + 0x5d) * 4) = 0;
    *(undefined1 *)(param_1 + 0x151b + (ulonglong)*(byte *)(param_1 + 0x5d) * 4) = 0;
  }
  local_68[0] = (ulonglong)bVar12 * 0x400 + 0x1118 + param_1;
  if ((((param_2 == (uint *)0x0) || ((*param_2 & 0x40000) == 0)) ||
      (*(longlong *)(param_2 + 0x1e) != 0x400)) || (*(longlong *)(param_2 + 0x20) != 1)) {
    local_68[2] = param_1 + 0x1918;
    if (param_2 == (uint *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *param_2;
    }
  }
  else {
    local_68[2] = *(longlong *)(param_2 + 0x1c);
    uVar7 = *param_2;
  }
  local_68[1] = 0x400;
  local_50 = 0x400;
  pcVar8 = (char *)FUN_1400a24c0(param_1 + 0xb0,uVar7,local_68 + 2,0x83040008,local_68,param_4);
  if (pcVar8 == (char *)0x0) {
    if ((*(char *)(param_1 + 0x48) != '\0') &&
       ((undefined4 *)(param_1 + 0x1d18) != (undefined4 *)0x0)) {
      *(undefined4 *)(param_1 + 0x1d1c) = 0;
      FUN_1404217a0(param_1 + 0x1d30,0,0x2048);
      *(undefined4 *)(param_1 + 0x1d18) = 0x3ccb6c71;
      *(char **)(param_1 + 0x1d20) = "{vtable}wuffs_base__io_transformer";
      *(undefined ***)(param_1 + 0x1d28) = &PTR_FUN_14047a540;
    }
    iVar6 = 4;
LAB_1400b0c63:
    bVar12 = local_res8;
    if (pbVar10 == pbVar13) goto LAB_1400b0a13;
    bVar12 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    if (8 < bVar12) {
      pcVar8 = "#gif: bad literal width";
      goto LAB_1400b0a3a;
    }
    if (((int *)(param_1 + 0x1d18) != (int *)0x0) && (*(int *)(param_1 + 0x1d18) == 0x3ccb6c71)) {
      *(uint *)(param_1 + 0x1d40) = bVar12 + 1;
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
    pcVar8 = (char *)0x0;
  }
  else {
    if (*pcVar8 == '#') goto LAB_1400b0a3a;
    if (*pcVar8 == '$') {
      pcVar8 = "#base: cannot return a suspension";
      goto LAB_1400b0a3a;
    }
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  goto LAB_1400b0a3a;
}

