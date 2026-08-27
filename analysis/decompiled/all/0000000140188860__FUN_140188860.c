// Function: FUN_140188860
// Addr: 140188860
// Size: 2365 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140188860(undefined8 *param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *local_res8;
  ulonglong local_res10;
  longlong local_res18;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  float local_78 [2];
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong lStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  puVar15 = auStack_98;
  *param_1 = &PTR_FUN_14048eb48;
  param_1[9] = &PTR_LAB_14048ea50;
  param_1[10] = &PTR_FUN_14048ea08;
  plVar10 = (longlong *)FUN_14014cf90(param_1[0x1b] + 0x1520,"_alias_lightCookie",0);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x58))(plVar10,0);
  }
  plVar10 = (longlong *)param_1[0x2c];
  for (plVar14 = (longlong *)param_1[0x2b]; plVar14 != plVar10; plVar14 = plVar14 + 1) {
    puVar2 = (undefined8 *)*plVar14;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x89];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar13 = param_1[0x84];
  if (lVar13 != 0) {
    lVar3 = param_1[0x1b];
    *(int *)(lVar13 + 0x2c) = *(int *)(lVar13 + 0x2c) + -1;
    if (*(int *)(lVar13 + 0x2c) < 1) {
      FUN_1401ab5f0(lVar3 + 0x16c0);
    }
  }
  lVar13 = param_1[0x85];
  if (lVar13 != 0) {
    lVar3 = param_1[0x1b];
    *(int *)(lVar13 + 0x2c) = *(int *)(lVar13 + 0x2c) + -1;
    if (*(int *)(lVar13 + 0x2c) < 1) {
      FUN_1401ab5f0(lVar3 + 0x16c0);
    }
  }
  lVar13 = param_1[0x86];
  if (lVar13 != 0) {
    lVar3 = param_1[0x1b];
    *(int *)(lVar13 + 0x2c) = *(int *)(lVar13 + 0x2c) + -1;
    if (*(int *)(lVar13 + 0x2c) < 1) {
      FUN_1401ab5f0(lVar3 + 0x16c0);
    }
  }
  lVar13 = param_1[0x87];
  if (lVar13 != 0) {
    lVar3 = param_1[0x1b];
    *(int *)(lVar13 + 0x2c) = *(int *)(lVar13 + 0x2c) + -1;
    if (*(int *)(lVar13 + 0x2c) < 1) {
      FUN_1401ab5f0(lVar3 + 0x16c0);
    }
  }
  lVar13 = param_1[0x88];
  if (lVar13 != 0) {
    lVar3 = param_1[0x1b];
    *(int *)(lVar13 + 0x2c) = *(int *)(lVar13 + 0x2c) + -1;
    if (*(int *)(lVar13 + 0x2c) < 1) {
      FUN_1401ab5f0(lVar3 + 0x16c0);
    }
  }
  FUN_140176f70(param_1[0x1b] + 0x1708,param_1,0);
  if (param_1[0x44] != 0) {
    local_78[0] = *(float *)(param_1 + 0x42);
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    local_70 = (undefined8 *)FUN_14028af20(0x18);
    *local_70 = local_70;
    local_70[1] = local_70;
    local_48 = param_1[0x48];
    local_40 = param_1[0x49];
    local_60 = 0;
    local_58 = 0;
    lStack_50 = 0;
    FUN_140037600(&local_60,(longlong)(param_1[0x46] - param_1[0x45]) >> 3,local_70);
    puVar2 = (undefined8 *)param_1[0x43];
    local_res10 = 0xcbf29ce484222325;
    local_res18 = 0x100000001b3;
    for (puVar4 = (undefined8 *)*puVar2; puVar4 != puVar2; puVar4 = (undefined8 *)*puVar4) {
      uVar17 = (((((((((ulonglong)*(byte *)(puVar4 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)puVar4 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)puVar4 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)puVar4 + 0x13)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)puVar4 + 0x14)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)puVar4 + 0x15)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)puVar4 + 0x16)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)puVar4 + 0x17)) * 0x100000001b3;
      puVar11 = *(undefined8 **)(local_60 + 8 + (local_48 & uVar17) * 0x10);
      puVar16 = local_70;
      if (puVar11 == local_70) {
LAB_140188b57:
        if (local_68 == 0xaaaaaaaaaaaaaaa) goto LAB_140189191;
        puVar11 = (undefined8 *)FUN_14028af20(0x18);
        puVar11[2] = puVar4[2];
        if (local_78[0] < (float)(local_68 + 1) / (float)local_40) {
          FUN_1401a2820(local_78);
          puVar5 = *(undefined8 **)(local_60 + 8 + (local_48 & uVar17) * 0x10);
          puVar16 = local_70;
          if (puVar5 != local_70) {
            lVar13 = puVar5[2];
            puVar16 = puVar5;
            while (puVar11[2] != lVar13) {
              if (puVar16 == *(undefined8 **)(local_60 + (local_48 & uVar17) * 0x10))
              goto LAB_140188c26;
              puVar16 = (undefined8 *)puVar16[1];
              lVar13 = puVar16[2];
            }
            puVar16 = (undefined8 *)*puVar16;
          }
        }
LAB_140188c26:
        puVar5 = (undefined8 *)puVar16[1];
        local_68 = local_68 + 1;
        *puVar11 = puVar16;
        puVar11[1] = puVar5;
        *puVar5 = puVar11;
        puVar16[1] = puVar11;
        uVar17 = local_48 & uVar17;
        puVar6 = *(undefined8 **)(local_60 + uVar17 * 0x10);
        if (puVar6 == local_70) {
          *(undefined8 **)(local_60 + uVar17 * 0x10) = puVar11;
LAB_140188c7d:
          *(undefined8 **)(local_60 + 8 + uVar17 * 0x10) = puVar11;
        }
        else if (puVar6 == puVar16) {
          *(undefined8 **)(local_60 + uVar17 * 0x10) = puVar11;
        }
        else if (*(undefined8 **)(local_60 + 8 + uVar17 * 0x10) == puVar5) goto LAB_140188c7d;
      }
      else {
        lVar13 = puVar11[2];
        puVar16 = puVar11;
        while (puVar4[2] != lVar13) {
          if (puVar16 == *(undefined8 **)(local_60 + (local_48 & uVar17) * 0x10))
          goto LAB_140188b57;
          puVar16 = (undefined8 *)puVar16[1];
          lVar13 = puVar16[2];
        }
      }
    }
    FUN_140077f50(param_1 + 0x42);
    puVar4 = local_70;
    for (puVar2 = (undefined8 *)*local_70; puVar2 != puVar4; puVar2 = (undefined8 *)*puVar2) {
      puVar11 = (undefined8 *)puVar2[2];
      puVar1 = (ulonglong *)param_1[0x2b];
      do {
        puVar9 = puVar1;
        local_res8 = puVar11;
        if (puVar9 == (ulonglong *)param_1[0x2c]) goto LAB_140188d13;
        puVar1 = puVar9 + 1;
      } while ((undefined8 *)*puVar9 != puVar11);
      FUN_1404210f0(puVar9,puVar1,(longlong)param_1[0x2c] - (longlong)puVar1);
      param_1[0x2c] = param_1[0x2c] + -8;
LAB_140188d13:
      puVar1 = (ulonglong *)param_1[0x39];
      do {
        puVar9 = puVar1;
        if (puVar9 == (ulonglong *)param_1[0x3a]) goto LAB_140188d49;
        puVar1 = puVar9 + 1;
      } while ((undefined8 *)*puVar9 != puVar11);
      FUN_1404210f0(puVar9,puVar1,(longlong)param_1[0x3a] - (longlong)puVar1);
      param_1[0x3a] = param_1[0x3a] + -8;
LAB_140188d49:
      puVar1 = (ulonglong *)param_1[0x2e];
      do {
        puVar9 = puVar1;
        if (puVar9 == (ulonglong *)param_1[0x2f]) goto LAB_140188ec9;
        puVar1 = puVar9 + 1;
      } while ((undefined8 *)*puVar9 != puVar11);
      FUN_1404210f0(puVar9,puVar1,(longlong)param_1[0x2f] - (longlong)puVar1);
      param_1[0x2f] = param_1[0x2f] + -8;
      lVar13 = param_1[0x34];
      plVar10 = (longlong *)param_1[0x32];
      uVar17 = param_1[0x37] &
               (((((((((ulonglong)puVar11 & 0xff ^ local_res10) * local_res18 ^
                     (longlong)puVar11 >> 8 & 0xffU) * 0x100000001b3 ^
                    (longlong)puVar11 >> 0x10 & 0xffU) * 0x100000001b3 ^
                   (longlong)puVar11 >> 0x18 & 0xffU) * 0x100000001b3 ^
                  (longlong)puVar11 >> 0x20 & 0xffU) * 0x100000001b3 ^
                 (longlong)puVar11 >> 0x28 & 0xffU) * 0x100000001b3 ^
                (longlong)puVar11 >> 0x30 & 0xffU) * 0x100000001b3 ^
               (longlong)puVar11 >> 0x38 & 0xffU) * 0x100000001b3;
      plVar14 = *(longlong **)(lVar13 + 8 + uVar17 * 0x10);
      if (plVar14 == plVar10) {
LAB_140188e61:
        plVar12 = (longlong *)0x0;
      }
      else {
        puVar16 = (undefined8 *)plVar14[2];
        plVar12 = plVar14;
        while (puVar11 != puVar16) {
          if (plVar12 == *(longlong **)(lVar13 + uVar17 * 0x10)) goto LAB_140188e61;
          plVar12 = (longlong *)plVar12[1];
          puVar16 = (undefined8 *)plVar12[2];
        }
      }
      if (plVar12 != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar13 + uVar17 * 0x10);
        if (plVar14 == plVar12) {
          if (plVar7 == plVar12) {
            *(longlong **)(lVar13 + uVar17 * 0x10) = plVar10;
            *(longlong **)(lVar13 + 8 + uVar17 * 0x10) = plVar10;
          }
          else {
            *(longlong *)(lVar13 + 8 + uVar17 * 0x10) = plVar12[1];
          }
        }
        else if (plVar7 == plVar12) {
          *(longlong *)(lVar13 + uVar17 * 0x10) = *plVar12;
        }
        lVar13 = *plVar12;
        param_1[0x33] = param_1[0x33] + -1;
        *(longlong *)plVar12[1] = lVar13;
        *(longlong *)(lVar13 + 8) = plVar12[1];
        thunk_FUN_14028af80(plVar12,0x18);
      }
LAB_140188ec9:
      puVar1 = (ulonglong *)param_1[0x3c];
      do {
        puVar9 = puVar1;
        if (puVar9 == (ulonglong *)param_1[0x3d]) goto LAB_140188f0a;
        puVar1 = puVar9 + 1;
      } while ((undefined8 *)*puVar9 != puVar11);
      FUN_1404210f0(puVar9,puVar1,param_1[0x3d] - (longlong)puVar1);
      param_1[0x3d] = param_1[0x3d] + -8;
LAB_140188f0a:
      puVar1 = (ulonglong *)param_1[0x3f];
      do {
        puVar9 = puVar1;
        if (puVar9 == (ulonglong *)param_1[0x40]) goto LAB_140188f4a;
        puVar1 = puVar9 + 1;
      } while ((undefined8 *)*puVar9 != puVar11);
      FUN_1404210f0(puVar9,puVar1,param_1[0x40] - (longlong)puVar1);
      param_1[0x40] = param_1[0x40] + -8;
LAB_140188f4a:
      FUN_14019e2a0(param_1 + 0x50,&local_res8);
      FUN_14019e2a0(param_1 + 0x58,&local_res8);
      FUN_14019e2a0(param_1 + 0x42,&local_res8);
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)(puVar11,1);
      }
    }
    if (local_60 != 0) {
      uVar17 = (lStack_50 - local_60 >> 3) * 8;
      lVar13 = local_60;
      if (0xfff < uVar17) {
        lVar13 = *(longlong *)(local_60 + -8);
        if (0x1f < (local_60 - lVar13) - 8U) {
          pcVar8 = (code *)swi(0x29);
          (*pcVar8)(5);
          puVar15 = auStack_90;
LAB_140189191:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar15 + -8) = &UNK_14018919d;
          FUN_14028c2e0("unordered_map/set too long");
        }
        uVar17 = uVar17 + 0x27;
      }
      thunk_FUN_14028af80(lVar13,uVar17);
      local_58 = 0;
      lStack_50 = 0;
      local_60 = 0;
    }
    *(undefined8 *)local_70[1] = 0;
    puVar2 = (undefined8 *)*local_70;
    while (puVar2 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*puVar2;
      thunk_FUN_14028af80(puVar2,0x18);
      puVar2 = puVar4;
    }
    thunk_FUN_14028af80(local_70,0x18);
  }
  FUN_14017e790(param_1[0x1b]);
  FUN_1402d3dd0(param_1[0x69]);
  FUN_140186340(param_1[0x8e]);
  FUN_140186340(param_1[0x8f]);
  FUN_1401151e0(param_1 + 0x90);
  FUN_14019e970(param_1 + 0x81);
  FUN_14019e9f0(param_1 + 0x62);
  FUN_14000d9e0(param_1 + 0x5b);
  FUN_140049340(param_1 + 0x59);
  FUN_14000d9e0(param_1 + 0x53);
  FUN_140049340(param_1 + 0x51);
  FUN_14000d9e0(param_1 + 0x4d);
  FUN_14000d9e0(param_1 + 0x4a);
  FUN_14000d9e0(param_1 + 0x45);
  FUN_140049340(param_1 + 0x43);
  FUN_14000d9e0(param_1 + 0x3f);
  FUN_14000d9e0(param_1 + 0x3c);
  FUN_14000d9e0(param_1 + 0x39);
  FUN_14000d9e0(param_1 + 0x34);
  FUN_140049340(param_1 + 0x32);
  FUN_14000d9e0(param_1 + 0x2e);
  FUN_14000d9e0(param_1 + 0x2b);
  FUN_14000d9e0(param_1 + 0x16);
  FUN_14015a700(param_1 + 0x14);
  FUN_14000d9e0(param_1 + 0xe);
  FUN_14015a780(param_1 + 0xc);
  param_1[9] = &PTR_FUN_14048eb90;
  FUN_1401a3b60(param_1);
  return;
}

