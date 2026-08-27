// Function: FUN_1403d7c70
// Addr: 1403d7c70
// Size: 808 bytes


void FUN_1403d7c70(longlong *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 local_res8 [2];
  longlong local_res10;
  
  lVar9 = param_1[3];
  local_res10 = *(longlong *)(lVar9 + 0x70);
  uVar3 = *(uint *)(lVar9 + 0x60);
  if ((*(uint *)((longlong)param_1 + 0x2c) & 0xfffffffd) == 5) {
    uVar11 = 0;
    lVar9 = *(longlong *)(lVar9 + 0x10);
    uVar12 = *(uint *)(*param_1 + 0xac);
    if (uVar3 != 0) {
      lVar13 = 0;
      do {
        iVar6 = (**(code **)(lVar9 + 0x30))
                          (lVar9,*(undefined4 *)(local_res10 + lVar13 * 0x14),
                           *(undefined8 *)(lVar9 + 0x70));
        if (iVar6 == *(int *)(local_res10 + lVar13 * 0x14)) {
LAB_1403d7d35:
          puVar2 = (uint *)(local_res10 + 4 + lVar13 * 0x14);
          *puVar2 = *puVar2 | uVar12;
        }
        else {
          lVar4 = param_1[1];
          local_res8[0] = 0;
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x90) + 0x10);
          uVar8 = 0;
          if (lVar5 != 0) {
            uVar8 = *(undefined8 *)(lVar5 + 0x10);
          }
          iVar7 = (**(code **)(*(longlong *)(lVar4 + 0x90) + 0x30))
                            (lVar4,*(undefined8 *)(lVar4 + 0x98),iVar6,local_res8,uVar8);
          if (iVar7 == 0) goto LAB_1403d7d35;
          *(int *)(local_res10 + lVar13 * 0x14) = iVar6;
        }
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 1;
      } while (uVar11 < uVar3);
    }
  }
  if ((((*(uint *)((longlong)param_1 + 0x2c) & 0xfffffffe) == 6) &&
      ((*(byte *)(*param_1 + 0xb4) & 4) == 0)) && (uVar14 = 0, lVar9 = local_res10, uVar3 != 0)) {
    do {
      uVar12 = *(uint *)(lVar9 + uVar14 * 0x14);
      puVar1 = (undefined4 *)(lVar9 + uVar14 * 0x14);
      uVar11 = uVar12 >> 8;
      if (uVar11 == 0x20) {
        if (uVar12 == 0x2013) {
          uVar10 = 0xfe32;
        }
        else if (uVar12 == 0x2014) {
          uVar10 = 0xfe31;
        }
        else if (uVar12 == 0x2025) {
          uVar10 = 0xfe30;
        }
        else {
          if (uVar12 != 0x2026) goto switchD_1403d7de7_caseD_ff02;
          uVar10 = 0xfe19;
        }
LAB_1403d7f3c:
        lVar9 = param_1[1];
        local_res8[0] = 0;
        lVar13 = *(longlong *)(*(longlong *)(lVar9 + 0x90) + 0x10);
        uVar8 = 0;
        if (lVar13 != 0) {
          uVar8 = *(undefined8 *)(lVar13 + 0x10);
        }
        iVar6 = (**(code **)(*(longlong *)(lVar9 + 0x90) + 0x30))
                          (lVar9,*(undefined8 *)(lVar9 + 0x98),uVar10,local_res8,uVar8);
        lVar9 = local_res10;
        if (iVar6 != 0) {
          *puVar1 = uVar10;
        }
      }
      else {
        if (uVar11 == 0x30) {
          switch(uVar12) {
          case 0x3001:
            uVar10 = 0xfe11;
            break;
          case 0x3002:
            uVar10 = 0xfe12;
            break;
          default:
            goto switchD_1403d7de7_caseD_ff02;
          case 0x3008:
            uVar10 = 0xfe3f;
            break;
          case 0x3009:
            uVar10 = 0xfe40;
            break;
          case 0x300a:
            uVar10 = 0xfe3d;
            break;
          case 0x300b:
            uVar10 = 0xfe3e;
            break;
          case 0x300c:
            uVar10 = 0xfe41;
            break;
          case 0x300d:
            uVar10 = 0xfe42;
            break;
          case 0x300e:
            uVar10 = 0xfe43;
            break;
          case 0x300f:
            uVar10 = 0xfe44;
            break;
          case 0x3010:
            uVar10 = 0xfe3b;
            break;
          case 0x3011:
            uVar10 = 0xfe3c;
            break;
          case 0x3014:
            uVar10 = 0xfe39;
            break;
          case 0x3015:
            uVar10 = 0xfe3a;
            break;
          case 0x3016:
            uVar10 = 0xfe17;
            break;
          case 0x3017:
            uVar10 = 0xfe18;
          }
          goto LAB_1403d7f3c;
        }
        if (uVar11 == 0xfe) {
          if (uVar12 == 0xfe4f) {
            uVar10 = 0xfe34;
            goto LAB_1403d7f3c;
          }
        }
        else if (uVar11 == 0xff) {
          switch(uVar12) {
          case 0xff01:
            uVar10 = 0xfe15;
            break;
          default:
            goto switchD_1403d7de7_caseD_ff02;
          case 0xff08:
            uVar10 = 0xfe35;
            break;
          case 0xff09:
            uVar10 = 0xfe36;
            break;
          case 0xff0c:
            uVar10 = 0xfe10;
            break;
          case 0xff1a:
            uVar10 = 0xfe13;
            break;
          case 0xff1b:
            uVar10 = 0xfe14;
            break;
          case 0xff1f:
            uVar10 = 0xfe16;
            break;
          case 0xff3b:
            uVar10 = 0xfe47;
            break;
          case 0xff3d:
            uVar10 = 0xfe48;
            break;
          case 0xff3f:
            uVar10 = 0xfe33;
            break;
          case 0xff5b:
            uVar10 = 0xfe37;
            break;
          case 0xff5d:
            uVar10 = 0xfe38;
          }
          goto LAB_1403d7f3c;
        }
      }
switchD_1403d7de7_caseD_ff02:
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while (uVar12 < uVar3);
  }
  return;
}

