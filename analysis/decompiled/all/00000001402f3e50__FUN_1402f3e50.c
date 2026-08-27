// Function: FUN_1402f3e50
// Addr: 1402f3e50
// Size: 1172 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1402f3e50(undefined8 param_1,longlong *param_2,uint param_3,int *param_4,int *param_5)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  uint local_88;
  int local_84;
  int local_80;
  uint *local_78;
  longlong *local_70;
  int *local_68;
  byte local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  byte local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  byte local_58;
  char local_57;
  char local_56;
  char local_55;
  byte local_54;
  char local_53;
  char local_52;
  char local_51;
  byte local_50;
  char local_4f;
  char local_4e;
  char local_4d;
  byte local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  byte local_48;
  char local_47;
  char local_46;
  char local_45;
  byte local_44;
  char local_43;
  char local_42;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  puVar1 = (uint *)(param_2 + 1);
  uVar9 = (ulonglong)param_3;
  local_78 = puVar1;
  local_70 = param_2;
  local_68 = param_4;
  if ((code *)param_2[4] == (code *)0x0) {
    bVar12 = *puVar1 < param_3;
  }
  else {
    iVar5 = (*(code *)param_2[4])(param_2,uVar9,0,0);
    bVar12 = iVar5 != 0;
  }
  if ((-(uint)bVar12 & 0x55) != 0) {
    return (ulonglong)(-(uint)bVar12 & 0x55);
  }
  *(uint *)((longlong)param_2 + 0xc) = param_3;
  if (param_3 < *puVar1) {
    if ((code *)param_2[4] == (code *)0x0) {
      uVar6 = *puVar1 - param_3;
      if (0x10 < uVar6) {
        uVar6 = 0x10;
      }
      FUN_1404210f0(&local_60,uVar9 + *param_2,uVar6);
    }
    else {
      uVar6 = (*(code *)param_2[4])(param_2,uVar9,&local_60,0x10);
    }
    *(uint *)((longlong)param_2 + 0xc) = param_3 + uVar6;
    if (uVar6 < 0x10) {
      return (ulonglong)(-(uint)(uVar6 < 0x10) & 0x55);
    }
    if ((((local_60 < 0x80) && (local_5c < 0x80)) && (local_58 < 0x80)) && (local_54 < 0x80)) {
      iVar5 = CONCAT31(CONCAT21(CONCAT11(local_60,local_5f),local_5e),local_5d);
      *param_5 = iVar5;
      local_80 = CONCAT31(CONCAT21(CONCAT11(local_5c,local_5b),local_5a),local_59);
      if (local_80 != 0) {
        iVar10 = CONCAT31(CONCAT21(CONCAT11(local_58,local_57),local_56),local_55);
        iVar11 = CONCAT31(CONCAT21(CONCAT11(local_54,local_53),local_52),local_51);
        if (iVar5 < local_80) {
          iVar7 = local_80 - iVar10;
          bVar13 = SBORROW4(iVar5,iVar7);
          iVar2 = iVar5 - iVar7;
          bVar12 = iVar5 == iVar7;
        }
        else {
          iVar7 = iVar5 - iVar11;
          bVar13 = SBORROW4(local_80,iVar7);
          iVar2 = local_80 - iVar7;
          bVar12 = local_80 == iVar7;
        }
        if (((bVar12 || bVar13 != iVar2 < 0) && (iVar5 <= 0x7fffffff - iVar10)) &&
           ((local_80 <= 0x7fffffff - iVar11 &&
            (((int)param_3 <= (0x7fffffff - iVar10) - iVar5 &&
             ((int)param_3 <= (0x7fffffff - iVar11) - local_80)))))) {
          if ((iVar5 + param_3 + iVar10 <= *puVar1) && (iVar11 + local_80 + param_3 <= *puVar1)) {
            local_80 = local_80 + param_3;
            *param_5 = iVar5 + param_3;
            uVar9 = FUN_1402f5c50(param_2,local_80);
            if ((int)uVar9 != 0) {
              return uVar9;
            }
            uVar6 = *(uint *)((longlong)param_2 + 0xc);
            local_41 = local_51 + '\x01';
            if (*puVar1 <= uVar6) goto LAB_1402f3ecf;
            if ((code *)param_2[4] == (code *)0x0) {
              uVar8 = *puVar1 - uVar6;
              if (0x10 < uVar8) {
                uVar8 = 0x10;
              }
              FUN_1404210f0(&local_50,(ulonglong)uVar6 + *param_2,uVar8);
            }
            else {
              uVar8 = (*(code *)param_2[4])(param_2,(ulonglong)uVar6,&local_50,0x10);
            }
            plVar3 = local_70;
            local_84 = uVar6 + uVar8;
            *(int *)((longlong)param_2 + 0xc) = local_84;
            if (uVar8 < 0x10) {
              return (ulonglong)(-(uint)(uVar8 < 0x10) & 0x55);
            }
            if ((local_41 == '\0' &&
                 (local_42 == '\0' &&
                 (local_43 == '\0' &&
                 (local_44 == 0 &&
                 (local_45 == '\0' &&
                 (local_46 == '\0' &&
                 (local_47 == '\0' &&
                 (local_48 == 0 &&
                 (local_49 == '\0' &&
                 (local_4a == '\0' &&
                 (local_4b == '\0' &&
                 (local_4c == 0 &&
                 (local_4d == '\0' && (local_4e == '\0' && (local_4f == '\0' && local_50 == 0)))))))
                 )))))))) ||
               (local_41 == local_51 &&
                (local_42 == local_52 &&
                (local_43 == local_53 &&
                (local_44 == local_54 &&
                (local_45 == local_55 &&
                (local_46 == local_56 &&
                (local_47 == local_57 &&
                (local_48 == local_58 &&
                (local_49 == local_59 &&
                (local_4a == local_5a &&
                (local_4b == local_5b &&
                (local_4c == local_5c &&
                (local_4d == local_5d &&
                (local_4e == local_5e && (local_4f == local_5f && local_50 == local_60))))))))))))))
               )) {
              uVar6 = local_84 + 8;
              if ((code *)local_70[4] == (code *)0x0) {
                bVar12 = *local_78 < uVar6;
              }
              else {
                iVar5 = (*(code *)local_70[4])(local_70,uVar6,0,0);
                bVar12 = iVar5 != 0;
              }
              local_88 = -(uint)bVar12 & 0x55;
              if (local_88 == 0) {
                *(uint *)((longlong)plVar3 + 0xc) = uVar6;
              }
              sVar4 = FUN_1402f5ac0(plVar3,&local_88);
              if (local_88 != 0) {
                return (ulonglong)local_88;
              }
              if (-1 < sVar4) {
                iVar5 = local_80 + sVar4;
                uVar9 = FUN_1402f5c50(plVar3,iVar5);
                if ((int)uVar9 != 0) {
                  return uVar9;
                }
                *local_68 = iVar5;
                return 0;
              }
            }
          }
        }
      }
    }
    uVar9 = 2;
  }
  else {
LAB_1402f3ecf:
    uVar9 = 0x55;
  }
  return uVar9;
}

