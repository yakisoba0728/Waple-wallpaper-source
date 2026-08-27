// Function: FUN_1403f45d0
// Addr: 1403f45d0
// Size: 1017 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403f45d0(uint param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined1 uVar7;
  double *pdVar8;
  uint uVar9;
  longlong *plVar10;
  undefined2 local_5b;
  undefined1 local_59;
  undefined4 local_54;
  
  uVar3 = *param_3;
  iVar4 = *(int *)(param_2 + 0x102c);
  plVar10 = (longlong *)&DAT_1404e4f20;
  if (0x100 < param_1) {
    switch(param_1) {
    case 0x101:
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x108:
    case 0x114:
    case 0x117:
    case 0x11f:
    case 0x120:
    case 0x121:
    case 0x123:
switchD_1403f4626_caseD_5:
      *(undefined4 *)(param_2 + 0x1c) = 0;
      break;
    default:
switchD_1403f4626_caseD_6:
      puVar2 = (undefined1 *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x102c) = *(undefined4 *)(param_2 + 0x14);
      if (param_1 == 0x11) {
        if (*(int *)(param_2 + 0x1c) == 0) {
          *puVar2 = 1;
          pdVar8 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        else {
          uVar6 = *(int *)(param_2 + 0x1c) - 1;
          *(uint *)(param_2 + 0x1c) = uVar6;
          pdVar8 = (double *)(puVar2 + ((ulonglong)uVar6 + 1) * 8);
        }
        param_3[6] = (int)*pdVar8;
LAB_1403f48e2:
        *(undefined4 *)(param_2 + 0x1c) = 0;
      }
      else {
        if (param_1 == 0x107) goto LAB_1403f48e2;
        if (param_1 == 0x124) {
          if (*(int *)(param_2 + 0x1c) == 0) {
            *puVar2 = 1;
            DAT_1404e4f20 = DAT_14045dd10;
            param_3[7] = (int)DAT_14045dd10;
          }
          else {
            uVar6 = *(int *)(param_2 + 0x1c) - 1;
            *(uint *)(param_2 + 0x1c) = uVar6;
            param_3[7] = (int)*(double *)(puVar2 + ((ulonglong)uVar6 + 1) * 8);
          }
          goto LAB_1403f48e2;
        }
        FUN_1403f4a60(param_1,param_2);
      }
      if (*(int *)(param_2 + 0x1c) != 0) {
        return;
      }
      break;
    case 0x115:
    case 0x116:
    case 0x126:
      goto switchD_1403f4626_caseD_0;
    case 0x11e:
      lVar1 = param_2 + 0x18;
      uVar6 = FUN_1403f0ff0(lVar1);
      param_3[0x14] = uVar6;
      uVar6 = FUN_1403f0ff0(lVar1);
      param_3[0x12] = uVar6;
      uVar6 = FUN_1403f0ff0(lVar1);
      param_3[0x11] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      break;
    case 0x122:
      uVar6 = FUN_1403f0ff0(param_2 + 0x18);
      param_3[0x15] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      break;
    case 0x125:
      uVar6 = FUN_1403f0d00(param_2 + 0x18);
      param_3[0x18] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
    }
    goto LAB_1403f48ee;
  }
  if (param_1 != 0x100) {
    switch(param_1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      goto switchD_1403f4626_caseD_0;
    case 5:
    case 0xd:
    case 0xe:
      goto switchD_1403f4626_caseD_5;
    default:
      goto switchD_1403f4626_caseD_6;
    case 0xf:
      uVar6 = FUN_1403f0d00(param_2 + 0x18);
      param_3[0x17] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      uVar6 = param_3[0x17];
      break;
    case 0x10:
      uVar6 = FUN_1403f0d00(param_2 + 0x18);
      param_3[0x16] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      uVar6 = param_3[0x16];
      break;
    case 0x12:
      uVar6 = FUN_1403f0d00(param_2 + 0x18);
      param_3[0x19] = uVar6;
      uVar6 = FUN_1403f0ff0(param_2 + 0x18);
      param_3[0x1a] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      goto LAB_1403f48ee;
    }
    if (uVar6 == 0) {
      return;
    }
    goto LAB_1403f48ee;
  }
switchD_1403f4626_caseD_0:
  puVar2 = (undefined1 *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x1c) == 0) {
    *puVar2 = 1;
    pdVar8 = &DAT_1404e4f20;
    DAT_1404e4f20 = DAT_14045dd10;
  }
  else {
    uVar6 = *(int *)(param_2 + 0x1c) - 1;
    *(uint *)(param_2 + 0x1c) = uVar6;
    pdVar8 = (double *)(puVar2 + ((ulonglong)uVar6 + 1) * 8);
  }
  uVar6 = (int)*pdVar8;
  if ((int)*pdVar8 < 0) {
    *puVar2 = 1;
    uVar6 = 0;
  }
  if (param_1 < 5) {
    if (param_1 == 4) {
      param_3[0xd] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      goto LAB_1403f48ee;
    }
    if (param_1 != 0) {
      if (param_1 == 1) {
        param_3[9] = uVar6;
        *(undefined4 *)(param_2 + 0x1c) = 0;
        goto LAB_1403f48ee;
      }
      if (param_1 == 2) {
        param_3[0xb] = uVar6;
        *(undefined4 *)(param_2 + 0x1c) = 0;
        goto LAB_1403f48ee;
      }
      if (param_1 == 3) {
        param_3[0xc] = uVar6;
        *(undefined4 *)(param_2 + 0x1c) = 0;
        goto LAB_1403f48ee;
      }
    }
  }
  else {
    if (param_1 == 0x100) {
      param_3[10] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      goto LAB_1403f48ee;
    }
    if (param_1 == 0x115) {
      param_3[0xe] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      goto LAB_1403f48ee;
    }
    if (param_1 == 0x116) {
      param_3[0x10] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      goto LAB_1403f48ee;
    }
    if (param_1 == 0x126) {
      param_3[0xf] = uVar6;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      goto LAB_1403f48ee;
    }
  }
  param_3[8] = uVar6;
  *(undefined4 *)(param_2 + 0x1c) = 0;
LAB_1403f48ee:
  if ((*(uint *)(param_2 + 0x14) <= *(uint *)(param_2 + 0x10)) &&
     (*(char *)(param_2 + 0x18) == '\0')) {
    if (((int)param_3[3] < (int)param_3[2]) ||
       (cVar5 = FUN_1403a4a30(param_3 + 2,param_3[3] + 1,0), cVar5 != '\0')) {
      plVar10 = (longlong *)(*(longlong *)(param_3 + 4) + (ulonglong)param_3[3] * 0x18);
      param_3[3] = param_3[3] + 1;
      *(undefined2 *)((longlong)plVar10 + 0xd) = local_5b;
      *(undefined1 *)((longlong)plVar10 + 0xf) = local_59;
      *(undefined4 *)((longlong)plVar10 + 0x14) = local_54;
      *plVar10 = 0;
      *(undefined1 *)((longlong)plVar10 + 0xc) = 0;
      *(uint *)(plVar10 + 2) = ~uVar3 + iVar4;
    }
    else {
      DAT_1404e4f20 = DAT_14045dd10;
      _DAT_1404e4f28 = DAT_14045dd18;
      _DAT_1404e4f30 = DAT_14045dd20;
    }
    *(uint *)(plVar10 + 1) = param_1;
    uVar3 = *param_3;
    uVar6 = 0;
    if (uVar3 <= *(uint *)(param_2 + 0x10)) {
      uVar6 = *(int *)(param_2 + 0x10) - uVar3;
    }
    uVar9 = *(int *)(param_2 + 0x14) - uVar3;
    *plVar10 = (ulonglong)uVar3 + *(longlong *)(param_2 + 8);
    uVar7 = (char)uVar9;
    if (uVar6 <= uVar9) {
      uVar7 = (char)uVar6;
    }
    *(undefined1 *)((longlong)plVar10 + 0xc) = uVar7;
    *param_3 = *(uint *)(param_2 + 0x14);
  }
  return;
}

