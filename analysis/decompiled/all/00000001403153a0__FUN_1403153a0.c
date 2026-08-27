// Function: FUN_1403153a0
// Addr: 1403153a0
// Size: 1346 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1403153a0(undefined8 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  longlong *plVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined2 extraout_var;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  short sVar19;
  undefined1 auStack_7e8 [32];
  undefined8 local_7c8;
  longlong local_7c0;
  undefined1 local_7b8;
  undefined4 local_7b0;
  code *local_7a8;
  undefined1 local_798 [8];
  undefined4 *local_790;
  undefined4 local_788;
  undefined4 local_784;
  undefined1 local_778 [8];
  longlong local_770;
  uint local_738;
  undefined1 local_71c;
  undefined1 local_71a;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_7e8;
  *param_2 = 1;
  lVar10 = FUN_1402f81e0(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  *(longlong *)(param_2 + 0xa6) = lVar10;
  lVar11 = FUN_1402f04b0(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
  *(longlong *)(param_2 + 0xa8) = lVar11;
  if (lVar11 == 0) {
    return 0xb;
  }
  uVar12 = FUN_1402f04b0(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
  *(undefined8 *)(param_2 + 0xc0) = uVar12;
  uVar8 = FUN_140319c60(param_2);
  if (uVar8 != 0) {
    return (ulonglong)uVar8;
  }
  if (param_3 < 0) {
    return 0;
  }
  if ((short)param_3 != 0) {
    return 6;
  }
  param_2[2] = param_2[2] | 0xa11;
  param_2[4] = param_2[0x90];
  uVar8 = param_2[2];
  uVar18 = 0;
  param_2[1] = 0;
  if (*(char *)(param_2 + 0x41) != '\0') {
    uVar8 = uVar8 | 4;
    param_2[2] = uVar8;
  }
  local_7c0 = *(longlong *)(param_2 + 0xb8);
  if (local_7c0 != 0) {
    param_2[2] = uVar8 | 0x100;
  }
  pcVar14 = *(char **)(param_2 + 0x3c);
  *(char **)(param_2 + 6) = pcVar14;
  *(undefined8 *)(param_2 + 8) = 0;
  if (pcVar14 == (char *)0x0) {
    if (*(longlong *)(param_2 + 0x76) != 0) {
      *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x76);
    }
  }
  else {
    pcVar13 = *(char **)(param_2 + 0x3a);
    if (pcVar13 != (char *)0x0) {
      cVar1 = *pcVar13;
      while (cVar1 != '\0') {
        cVar2 = *pcVar14;
        if (cVar1 == cVar2) {
          pcVar14 = pcVar14 + 1;
LAB_1403154fc:
          pcVar13 = pcVar13 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_1403154fc;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (cVar2 == '\0') {
              *(char **)(param_2 + 8) = pcVar13;
            }
            goto LAB_140315542;
          }
          pcVar14 = pcVar14 + 1;
        }
        cVar1 = *pcVar13;
      }
      *(char **)(param_2 + 8) = "Regular";
    }
  }
LAB_140315542:
  if (*(longlong *)(param_2 + 8) == 0) {
    pcVar14 = "Regular";
    if (*(char **)(param_2 + 0x3e) != (char *)0x0) {
      pcVar14 = *(char **)(param_2 + 0x3e);
    }
    *(char **)(param_2 + 8) = pcVar14;
  }
  param_2[3] = 0;
  if (param_2[0x40] != 0) {
    param_2[3] = 1;
  }
  lVar4 = *(longlong *)(param_2 + 0x3e);
  uVar17 = uVar18;
  if (lVar4 == 0) goto LAB_1403155db;
  do {
    uVar15 = uVar17 + 1;
    uVar16 = uVar18;
    if (*(char *)(lVar4 + uVar17) != (&DAT_14043cd50)[uVar17]) goto LAB_1403155c0;
    uVar17 = uVar15;
  } while (uVar15 != 5);
  goto LAB_1403155d3;
  while (uVar16 = uVar17, uVar17 != 6) {
LAB_1403155c0:
    uVar17 = uVar16 + 1;
    if (*(char *)(lVar4 + uVar16) != "Black"[uVar16]) goto LAB_1403155db;
  }
LAB_1403155d3:
  param_2[3] = param_2[0x40] != 0 | 2;
LAB_1403155db:
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0x16] = (int)*(short *)((longlong)param_2 + 0x27e);
  sVar3 = *(short *)((longlong)param_2 + 0x282);
  uVar7 = *(ushort *)(param_2 + 0x1a);
  param_2[0x17] = (int)sVar3;
  param_2[0x18] = param_2[0xa1] + 0xffff >> 0x10;
  param_2[0x19] = param_2[0xa2] + 0xffff >> 0x10;
  if (uVar7 == 0) {
    uVar7 = 1000;
    *(undefined2 *)(param_2 + 0x1a) = 1000;
  }
  sVar19 = (short)((uint)(param_2[0xa2] + 0xffff) >> 0x10);
  *(short *)((longlong)param_2 + 0x6a) = sVar19;
  *(short *)(param_2 + 0x1b) = sVar3;
  sVar6 = (short)((((uint)uVar7 + (uint)uVar7 * 2) * 4) / 10);
  *(short *)((longlong)param_2 + 0x6e) = sVar6;
  if ((int)sVar6 < (int)sVar19 - (int)sVar3) {
    *(short *)((longlong)param_2 + 0x6e) = sVar19 - sVar3;
  }
  *(short *)(param_2 + 0x1c) = (short)((uint)(param_2[0xa1] + 0xffff) >> 0x10);
  lVar4 = *(longlong *)(param_2 + 0xa8);
  local_7a8 = FUN_14031a280;
  local_7c8 = *(undefined8 *)(param_2 + 0x92);
  local_7b0 = 0;
  local_7b8 = 0;
  iVar9 = (*(code *)**(undefined8 **)(lVar4 + 0x18))(local_778,param_2,0,0);
  if (iVar9 == 0) {
    local_104 = param_2[0x88];
    local_100 = *(undefined8 *)(param_2 + 0x8a);
    local_f8 = *(undefined8 *)(param_2 + 0x8c);
    local_f0 = *(undefined8 *)(param_2 + 0x8e);
    local_58 = *(undefined8 *)(param_2 + 0xbe);
    local_50 = param_2[0xbc];
    local_71a = 1;
    local_71c = 0;
    uVar17 = uVar18;
    uVar16 = uVar18;
    if (0 < (int)param_2[0x90]) {
      do {
        local_798[0] = 0;
        iVar9 = FUN_14031a2e0(local_778,uVar16,&local_790,local_798);
        if ((iVar9 == 0) &&
           (plVar5 = *(longlong **)(*(longlong *)(local_770 + 0xd0) + 0x50),
           plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 8))(plVar5[1],&local_790);
        }
        if (((int)uVar16 == 0) || ((int)uVar17 < (int)local_738)) {
          uVar17 = (ulonglong)local_738;
        }
        uVar8 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar8;
      } while ((int)uVar8 < (int)param_2[0x90]);
    }
    (**(code **)(*(longlong *)(lVar4 + 0x18) + 8))(local_778);
    FUN_1402f4b60(uVar17);
    *(undefined2 *)(param_2 + 0x1c) = extraout_var;
  }
  *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)((longlong)param_2 + 0x6e);
  *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x106);
  *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x42);
  if (lVar10 != 0) {
    plVar5 = *(longlong **)(lVar11 + 0x40);
    local_784 = 0x10003;
    local_788 = 0x756e6963;
    local_790 = param_2;
    uVar8 = FUN_1402ef870(plVar5[3],0,&local_790,0);
    uVar18 = (ulonglong)uVar8;
    if (((uVar8 == 0) || ((uVar8 & 0xff) == 0xa3)) || ((uVar8 & 0xff) == 7)) {
      iVar9 = param_2[0x78];
      uVar18 = 0;
      if (iVar9 == 1) {
        local_788 = 0x41444243;
        local_784 = 0x20007;
        lVar10 = plVar5[2];
      }
      else if (iVar9 == 2) {
        local_788 = 0x41444f42;
        local_784 = 7;
        lVar10 = *plVar5;
      }
      else if (iVar9 == 3) {
        local_788 = 0x6c617431;
        local_784 = 0x30007;
        lVar10 = plVar5[3];
      }
      else {
        if (iVar9 != 4) {
          return 0;
        }
        local_788 = 0x41444245;
        local_784 = 0x10007;
        lVar10 = plVar5[1];
      }
      if (lVar10 != 0) {
        uVar8 = FUN_1402ef870(lVar10,0,&local_790,0);
        uVar18 = (ulonglong)uVar8;
      }
    }
  }
  return uVar18;
}

