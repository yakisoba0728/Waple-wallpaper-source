// Function: FUN_1403173e0
// Addr: 1403173e0
// Size: 2147 bytes


uint FUN_1403173e0(longlong param_1,undefined4 param_2,uint param_3,undefined4 *param_4,uint param_5
                  )

{
  undefined4 uVar1;
  longlong lVar2;
  size_t sVar3;
  uint *puVar4;
  ulonglong uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  uVar5 = (ulonglong)param_3;
  if ((int)param_5 < 0) {
    param_5 = 0;
  }
  uVar8 = 0;
  switch(param_2) {
  case 0:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x261);
    }
    break;
  case 1:
    uVar8 = uVar7;
    if (((param_3 < 4) && (uVar8 = 4, param_4 != (undefined4 *)0x0)) && (3 < param_5)) {
      uVar1 = 0;
      if (param_3 == 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x264);
      }
      else {
        if (param_3 == 1) {
          *param_4 = *(undefined4 *)(param_1 + 0x268);
          break;
        }
        if (param_3 == 2) {
          *param_4 = *(undefined4 *)(param_1 + 0x26c);
          break;
        }
        if (param_3 == 3) {
          *param_4 = *(undefined4 *)(param_1 + 0x270);
          break;
        }
      }
      *param_4 = uVar1;
    }
    break;
  case 2:
    uVar8 = uVar7;
    if (((param_3 < 4) && (uVar8 = 4, param_4 != (undefined4 *)0x0)) && (3 < param_5)) {
      uVar1 = 0;
      if (param_3 == 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x27c);
      }
      else {
        if (param_3 == 1) {
          *param_4 = *(undefined4 *)(param_1 + 0x280);
          break;
        }
        if (param_3 == 2) {
          *param_4 = *(undefined4 *)(param_1 + 0x284);
          break;
        }
        if (param_3 == 3) {
          *param_4 = *(undefined4 *)(param_1 + 0x288);
          break;
        }
      }
      *param_4 = uVar1;
    }
    break;
  case 3:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x260);
    }
    break;
  case 4:
    pcVar6 = *(char **)(param_1 + 0x1d8);
    uVar8 = uVar7;
    if (pcVar6 != (char *)0x0) {
      sVar3 = strlen(pcVar6);
      uVar8 = (int)sVar3 + 1;
      if ((param_4 != (undefined4 *)0x0) && (uVar8 <= param_5)) {
        FUN_1404210f0(param_4,pcVar6,uVar8);
      }
    }
    break;
  case 5:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x114);
    }
    break;
  case 6:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x240);
    }
    break;
  case 7:
    uVar8 = uVar7;
    if (*(uint *)(param_1 + 0x240) <= param_3) break;
    lVar2 = *(longlong *)(param_1 + 0x248);
    goto LAB_1403175eb;
  case 8:
    uVar8 = uVar7;
    if (param_3 < *(uint *)(param_1 + 0x240)) {
      uVar7 = *(uint *)(*(longlong *)(param_1 + 600) + uVar5 * 4);
      uVar8 = uVar7 + 1;
      if ((param_4 != (undefined4 *)0x0) && (uVar8 <= param_5)) {
        FUN_1404210f0(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x250) + uVar5 * 8),uVar7);
        *(undefined1 *)((ulonglong)uVar7 + (longlong)param_4) = 0;
      }
    }
    break;
  case 9:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x1e0);
    }
    break;
  case 10:
    uVar8 = uVar7;
    if ((*(int *)(param_1 + 0x1e0) != 1) || (*(uint *)(param_1 + 0x1e8) <= param_3)) break;
    lVar2 = *(longlong *)(param_1 + 0x200);
LAB_1403175eb:
    pcVar6 = *(char **)(lVar2 + uVar5 * 8);
    goto LAB_1403175ef;
  case 0xb:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x220);
    }
    break;
  case 0xc:
    if (*(longlong *)(param_1 + 0x238) == 0) {
      uVar8 = uVar7;
      if (*(uint *)(param_1 + 0x220) <= param_3) break;
    }
    else {
      puVar4 = (uint *)FUN_1402f7790(uVar5);
      uVar8 = uVar7;
      if (puVar4 == (uint *)0x0) break;
      uVar5 = (ulonglong)*puVar4;
    }
    uVar8 = uVar7;
    if (*(longlong *)(param_1 + 0x228) != 0) {
      uVar7 = *(uint *)(*(longlong *)(param_1 + 0x230) + uVar5 * 4);
      uVar8 = uVar7 + 1;
      if ((param_4 != (undefined4 *)0x0) && (uVar8 <= param_5)) {
        FUN_1404210f0(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x228) + uVar5 * 8));
        *(undefined1 *)((ulonglong)uVar7 + (longlong)param_4) = 0;
      }
    }
    break;
  case 0xd:
    uVar8 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x18c);
    }
    break;
  case 0xe:
    uVar8 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x18e);
    }
    break;
  case 0xf:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11c);
    }
    break;
  case 0x10:
    uVar8 = uVar7;
    if (((param_3 < *(byte *)(param_1 + 0x11c)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x120 + uVar5 * 2);
    }
    break;
  case 0x11:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x188);
    }
    break;
  case 0x12:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11d);
    }
    break;
  case 0x13:
    uVar8 = uVar7;
    if (((param_3 < *(byte *)(param_1 + 0x11d)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x13c + uVar5 * 2);
    }
    break;
  case 0x14:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11e);
    }
    break;
  case 0x15:
    uVar8 = uVar7;
    if (((param_3 < *(byte *)(param_1 + 0x11e)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x150 + uVar5 * 2);
    }
    break;
  case 0x16:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x11f);
    }
    break;
  case 0x17:
    uVar8 = uVar7;
    if (((param_3 < *(byte *)(param_1 + 0x11f)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x16c + uVar5 * 2);
    }
    break;
  case 0x18:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x180);
    }
    break;
  case 0x19:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x184);
    }
    break;
  case 0x1a:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 400);
    }
    break;
  case 0x1b:
    uVar8 = uVar7;
    if (((param_3 < *(byte *)(param_1 + 400)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x194 + uVar5 * 2);
    }
    break;
  case 0x1c:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x191);
    }
    break;
  case 0x1d:
    uVar8 = uVar7;
    if (((param_3 < *(byte *)(param_1 + 0x191)) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) &&
       (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1ae + uVar5 * 2);
    }
    break;
  case 0x1e:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x192);
    }
    break;
  case 0x1f:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x193);
    }
    break;
  case 0x20:
    uVar8 = uVar7;
    if (((param_3 < 2) && (uVar8 = 2, param_4 != (undefined4 *)0x0)) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x1d4 + uVar5 * 2);
    }
    break;
  case 0x21:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x118);
    }
    break;
  case 0x22:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x1d0);
    }
    break;
  case 0x23:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x1cc);
    }
    break;
  case 0x24:
    pcVar6 = *(char **)(param_1 + 0xd8);
    goto joined_r0x000140317c0d;
  case 0x25:
    pcVar6 = *(char **)(param_1 + 0xe0);
    goto joined_r0x000140317c0d;
  case 0x26:
    pcVar6 = *(char **)(param_1 + 0xe8);
    goto joined_r0x000140317c0d;
  case 0x27:
    pcVar6 = *(char **)(param_1 + 0xf0);
    goto joined_r0x000140317c0d;
  case 0x28:
    pcVar6 = *(char **)(param_1 + 0xf8);
joined_r0x000140317c0d:
    uVar8 = uVar7;
    if (pcVar6 != (char *)0x0) {
LAB_1403175ef:
      sVar3 = strlen(pcVar6);
      uVar8 = (int)sVar3 + 1;
      if ((param_4 != (undefined4 *)0x0) && (uVar8 <= param_5)) {
        FUN_1404210f0(param_4,pcVar6,uVar8);
      }
    }
    break;
  case 0x29:
    uVar8 = 1;
    if ((param_4 != (undefined4 *)0x0) && (param_5 != 0)) {
      *(undefined1 *)param_4 = *(undefined1 *)(param_1 + 0x104);
    }
    break;
  case 0x2a:
    uVar8 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x106);
    }
    break;
  case 0x2b:
    uVar8 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x108);
    }
    break;
  case 0x2c:
    uVar8 = 2;
    if ((param_4 != (undefined4 *)0x0) && (1 < param_5)) {
      *(undefined2 *)param_4 = *(undefined2 *)(param_1 + 0x110);
    }
    break;
  case 0x2d:
    uVar8 = 4;
    if ((param_4 != (undefined4 *)0x0) && (3 < param_5)) {
      *param_4 = *(undefined4 *)(param_1 + 0x100);
    }
  }
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  return uVar8;
}

