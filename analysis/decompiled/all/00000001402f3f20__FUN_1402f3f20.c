// Function: FUN_1402f3f20
// Addr: 1402f3f20
// Size: 533 bytes


void FUN_1402f3f20(undefined8 param_1,longlong *param_2,uint param_3,int *param_4,int *param_5)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  uint uStack_88;
  int iStack_84;
  int iStack_80;
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
  byte bStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  byte bStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  byte bStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  byte bStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_a8;
  puVar1 = (uint *)(param_2 + 1);
  uVar10 = (ulonglong)param_3;
  local_78 = puVar1;
  local_70 = param_2;
  local_68 = param_4;
  if ((code *)param_2[4] == (code *)0x0) {
    bVar13 = *puVar1 < param_3;
  }
  else {
    iVar5 = (*(code *)param_2[4])(param_2,uVar10,0,0);
    bVar13 = iVar5 != 0;
  }
  if ((-bVar13 & 0x55U) == 0) {
    *(uint *)((longlong)param_2 + 0xc) = param_3;
    if (param_3 < *puVar1) {
      if ((code *)param_2[4] == (code *)0x0) {
        param_3 = *puVar1 - param_3;
        if (0x10 < param_3) {
          param_3 = 0x10;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(&local_60,uVar10 + *param_2,param_3);
      }
      uVar6 = (*(code *)param_2[4])(param_2,uVar10,&local_60,0x10);
      *(uint *)((longlong)param_2 + 0xc) = param_3 + uVar6;
      if ((((0xf < uVar6) && (local_60 < 0x80)) && (local_5c < 0x80)) &&
         ((local_58 < 0x80 && (local_54 < 0x80)))) {
        iVar9 = CONCAT31(CONCAT21(CONCAT11(local_60,local_5f),local_5e),local_5d);
        *param_5 = iVar9;
        iVar5 = CONCAT31(CONCAT21(CONCAT11(local_5c,local_5b),local_5a),local_59);
        if (iVar5 != 0) {
          iVar11 = CONCAT31(CONCAT21(CONCAT11(local_58,local_57),local_56),local_55);
          iVar12 = CONCAT31(CONCAT21(CONCAT11(local_54,local_53),local_52),local_51);
          if (iVar9 < iVar5) {
            iVar7 = iVar5 - iVar11;
            bVar14 = SBORROW4(iVar9,iVar7);
            iVar2 = iVar9 - iVar7;
            bVar13 = iVar9 == iVar7;
          }
          else {
            iVar7 = iVar9 - iVar12;
            bVar14 = SBORROW4(iVar5,iVar7);
            iVar2 = iVar5 - iVar7;
            bVar13 = iVar5 == iVar7;
          }
          if (((bVar13 || bVar14 != iVar2 < 0) && (iVar9 <= 0x7fffffff - iVar11)) &&
             ((iVar5 <= 0x7fffffff - iVar12 &&
              (((int)param_3 <= (0x7fffffff - iVar11) - iVar9 &&
               ((int)param_3 <= (0x7fffffff - iVar12) - iVar5)))))) {
            if ((iVar9 + param_3 + iVar11 <= *puVar1) && (iVar12 + iVar5 + param_3 <= *puVar1)) {
              iStack_80 = iVar5 + param_3;
              *param_5 = iVar9 + param_3;
              iVar5 = func_0x0001402f5d20(param_2,iStack_80);
              if (iVar5 == 0) {
                uVar6 = *(uint *)((longlong)param_2 + 0xc);
                cStack_41 = local_51 + '\x01';
                if (uVar6 < *puVar1) {
                  if ((code *)param_2[4] == (code *)0x0) {
                    uVar8 = *puVar1 - uVar6;
                    if (0x10 < uVar8) {
                      uVar8 = 0x10;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(&bStack_50,(ulonglong)uVar6 + *param_2,uVar8);
                  }
                  uVar8 = (*(code *)param_2[4])(param_2,(ulonglong)uVar6,&bStack_50,0x10);
                  plVar3 = local_70;
                  iStack_84 = uVar6 + uVar8;
                  *(int *)((longlong)param_2 + 0xc) = iStack_84;
                  if (0xf < uVar8) {
                    if ((cStack_41 == '\0' &&
                         (cStack_42 == '\0' &&
                         (cStack_43 == '\0' &&
                         (bStack_44 == 0 &&
                         (cStack_45 == '\0' &&
                         (cStack_46 == '\0' &&
                         (cStack_47 == '\0' &&
                         (bStack_48 == 0 &&
                         (cStack_49 == '\0' &&
                         (cStack_4a == '\0' &&
                         (cStack_4b == '\0' &&
                         (bStack_4c == 0 &&
                         (cStack_4d == '\0' &&
                         (cStack_4e == '\0' && (cStack_4f == '\0' && bStack_50 == 0)))))))))))))))
                       || (cStack_41 == local_51 &&
                           (cStack_42 == local_52 &&
                           (cStack_43 == local_53 &&
                           (bStack_44 == local_54 &&
                           (cStack_45 == local_55 &&
                           (cStack_46 == local_56 &&
                           (cStack_47 == local_57 &&
                           (bStack_48 == local_58 &&
                           (cStack_49 == local_59 &&
                           (cStack_4a == local_5a &&
                           (cStack_4b == local_5b &&
                           (bStack_4c == local_5c &&
                           (cStack_4d == local_5d &&
                           (cStack_4e == local_5e &&
                           (cStack_4f == local_5f && bStack_50 == local_60)))))))))))))))) {
                      uVar6 = iStack_84 + 8;
                      if ((code *)local_70[4] == (code *)0x0) {
                        bVar13 = *local_78 < uVar6;
                      }
                      else {
                        iVar5 = (*(code *)local_70[4])(local_70,uVar6,0,0);
                        bVar13 = iVar5 != 0;
                      }
                      uStack_88 = -(uint)bVar13 & 0x55;
                      if (uStack_88 == 0) {
                        *(uint *)((longlong)plVar3 + 0xc) = uVar6;
                      }
                      sVar4 = FUN_1402f5b90(plVar3,&uStack_88);
                      if ((uStack_88 == 0) && (-1 < sVar4)) {
                        iVar9 = iStack_80 + sVar4;
                        iVar5 = func_0x0001402f5d20(plVar3,iVar9);
                        if (iVar5 == 0) {
                          *local_68 = iVar9;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x0001402ed2f0(local_40 ^ (ulonglong)auStack_a8);
  return;
}

