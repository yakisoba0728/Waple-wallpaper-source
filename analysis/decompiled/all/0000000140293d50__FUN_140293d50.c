// Function: FUN_140293d50
// Addr: 140293d50
// Size: 2133 bytes


longlong FUN_140293d50(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined1 local_58 [32];
  
  if ((param_2 & 2) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e3ca8 == 0) {
        FUN_1402914b0(local_68,0);
        if (DAT_1404e3ca8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e3ca8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_68);
      }
      lVar12 = DAT_1404e3ca8;
      puVar6 = (undefined8 *)FUN_14028af20(0x30);
      local_60 = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::ctype<char>::vftable;
        puVar7 = (undefined4 *)FUN_140291c50(local_58);
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        uVar8 = *(undefined8 *)(puVar7 + 4);
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined4 *)(puVar6 + 2) = *puVar7;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
        *(undefined4 *)(puVar6 + 3) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
        puVar6[4] = uVar8;
        puVar6[5] = uVar4;
      }
      thunk_FUN_140293ad0(param_3,puVar6,lVar12);
    }
    else {
      if (DAT_1404e3ca8 == 0) {
        FUN_1402914b0(local_68,0);
        if (DAT_1404e3ca8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e3ca8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_68);
      }
      lVar12 = DAT_1404e3ca8;
      uVar8 = FUN_140013d40(param_4);
      thunk_FUN_140293ad0(param_3,uVar8,lVar12);
    }
  }
  puVar6 = (undefined8 *)0x0;
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e91b8 == 0) {
        FUN_1402914b0(local_68,0);
        if (DAT_1404e91b8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e91b8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_68);
      }
      uVar13 = DAT_1404e91b8;
      local_60 = (undefined8 *)FUN_14028af20(0x10);
      puVar9 = puVar6;
      if (local_60 != (undefined8 *)0x0) {
        *(undefined4 *)(local_60 + 1) = 0;
        *local_60 = std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
                    vftable;
        puVar9 = local_60;
      }
      thunk_FUN_140293ad0(param_3,puVar9,uVar13);
      if (DAT_1404e90b8 == 0) {
        FUN_1402914b0(local_68,0);
        if (DAT_1404e90b8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e90b8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_68);
      }
      uVar13 = DAT_1404e90b8;
      local_60 = (undefined8 *)FUN_14028af20(0x10);
      puVar9 = puVar6;
      if (local_60 != (undefined8 *)0x0) {
        *(undefined4 *)(local_60 + 1) = 0;
        *local_60 = std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::
                    vftable;
        puVar9 = local_60;
      }
      thunk_FUN_140293ad0(param_3,puVar9,uVar13);
      if (DAT_1404e90d8 == 0) {
        FUN_1402914b0(local_68,0);
        if (DAT_1404e90d8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e90d8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_68);
      }
      lVar12 = DAT_1404e90d8;
      local_60 = (undefined8 *)FUN_14028af20(0x30);
      if (local_60 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_1400397c0(local_60,param_1,0,0);
      }
    }
    else {
      if (DAT_1404e91b8 == 0) {
        FUN_1402914b0(local_68,0);
        if (DAT_1404e91b8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e91b8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_68);
      }
      uVar13 = DAT_1404e91b8;
      FUN_1402914b0(local_64,0);
      puVar6 = DAT_1404e8f60;
      local_60 = DAT_1404e8f60;
      if (DAT_1404e91b8 == 0) {
        FUN_1402914b0(local_68,0);
        if (DAT_1404e91b8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e91b8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar5 = DAT_1404e91b8;
      lVar11 = *(longlong *)(param_4 + 8);
      lVar12 = DAT_1404e91b8 * 8;
      if (DAT_1404e91b8 < *(ulonglong *)(lVar11 + 0x18)) {
        puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
        if (puVar9 == (undefined8 *)0x0) goto LAB_1402942af;
      }
      else {
        puVar9 = (undefined8 *)0x0;
LAB_1402942af:
        if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_1402942c8:
          if (puVar9 != (undefined8 *)0x0) goto LAB_1402940ca;
        }
        else {
          lVar11 = FUN_1402916f0();
          if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
            puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
            goto LAB_1402942c8;
          }
        }
        puVar9 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar12 = FUN_140097320(&local_60,param_4);
          puVar9 = local_60;
          if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar6 = local_60;
          FUN_1402916b0(local_60);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9);
          DAT_1404e8f60 = puVar6;
        }
      }
LAB_1402940ca:
      FUN_140291550(local_64);
      thunk_FUN_140293ad0(param_3,puVar9,uVar13);
      if (DAT_1404e90b8 == 0) {
        FUN_1402914b0(local_64,0);
        if (DAT_1404e90b8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e90b8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_64);
      }
      uVar13 = DAT_1404e90b8;
      FUN_1402914b0(local_68,0);
      puVar6 = DAT_1404e8f00;
      local_60 = DAT_1404e8f00;
      if (DAT_1404e90b8 == 0) {
        FUN_1402914b0(local_64,0);
        if (DAT_1404e90b8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e90b8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar5 = DAT_1404e90b8;
      lVar11 = *(longlong *)(param_4 + 8);
      lVar12 = DAT_1404e90b8 * 8;
      if (DAT_1404e90b8 < *(ulonglong *)(lVar11 + 0x18)) {
        puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
        if (puVar9 == (undefined8 *)0x0) goto LAB_14029431e;
      }
      else {
        puVar9 = (undefined8 *)0x0;
LAB_14029431e:
        if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_140294337:
          if (puVar9 != (undefined8 *)0x0) goto LAB_1402941b0;
        }
        else {
          lVar11 = FUN_1402916f0();
          if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
            puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
            goto LAB_140294337;
          }
        }
        puVar9 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar12 = FUN_140037ec0(&local_60,param_4);
          puVar9 = local_60;
          if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar6 = local_60;
          FUN_1402916b0(local_60);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9);
          DAT_1404e8f00 = puVar6;
        }
      }
LAB_1402941b0:
      FUN_140291550(local_68);
      thunk_FUN_140293ad0(param_3,puVar9,uVar13);
      if (DAT_1404e90d8 == 0) {
        FUN_1402914b0(local_64,0);
        if (DAT_1404e90d8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e90d8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_64);
      }
      lVar12 = DAT_1404e90d8;
      puVar6 = (undefined8 *)FUN_140035d70(param_4);
    }
    thunk_FUN_140293ad0(param_3,puVar6,lVar12);
  }
  if ((param_2 & 2) == 0) goto LAB_140294472;
  if (param_4 == 0) {
    if (DAT_1404e90c0 == 0) {
      FUN_1402914b0(local_64,0);
      if (DAT_1404e90c0 == 0) {
        DAT_1404e3c90 = DAT_1404e3c90 + 1;
        DAT_1404e90c0 = (ulonglong)DAT_1404e3c90;
      }
      FUN_140291550(local_64);
    }
    uVar13 = DAT_1404e90c0;
    puVar9 = (undefined8 *)FUN_14028af20(0x10);
    local_60 = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 0;
      *puVar9 = std::codecvt<char,char,_Mbstatet>::vftable;
    }
  }
  else {
    if (DAT_1404e90c0 == 0) {
      FUN_1402914b0(local_64,0);
      if (DAT_1404e90c0 == 0) {
        DAT_1404e3c90 = DAT_1404e3c90 + 1;
        DAT_1404e90c0 = (ulonglong)DAT_1404e3c90;
      }
      FUN_140291550(local_64);
    }
    uVar13 = DAT_1404e90c0;
    FUN_1402914b0(local_68,0);
    puVar6 = DAT_1404e8f48;
    local_60 = DAT_1404e8f48;
    if (DAT_1404e90c0 == 0) {
      FUN_1402914b0(local_64,0);
      if (DAT_1404e90c0 == 0) {
        DAT_1404e3c90 = DAT_1404e3c90 + 1;
        DAT_1404e90c0 = (ulonglong)DAT_1404e3c90;
      }
      FUN_140291550();
    }
    uVar5 = DAT_1404e90c0;
    lVar11 = *(longlong *)(param_4 + 8);
    lVar12 = DAT_1404e90c0 * 8;
    if (DAT_1404e90c0 < *(ulonglong *)(lVar11 + 0x18)) {
      puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
      if (puVar9 == (undefined8 *)0x0) goto LAB_14029452d;
    }
    else {
      puVar9 = (undefined8 *)0x0;
LAB_14029452d:
      if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_140294546:
        if (puVar9 != (undefined8 *)0x0) goto LAB_14029445b;
      }
      else {
        lVar11 = FUN_1402916f0();
        if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
          puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
          goto LAB_140294546;
        }
      }
      puVar9 = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        lVar12 = FUN_14004f020(&local_60,param_4);
        puVar9 = local_60;
        if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_140292650();
        }
        puVar6 = local_60;
        FUN_1402916b0(local_60);
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar9);
        DAT_1404e8f48 = puVar6;
      }
    }
LAB_14029445b:
    FUN_140291550(local_68);
  }
  thunk_FUN_140293ad0(param_3,puVar9,uVar13);
LAB_140294472:
  FUN_1402b5c70(param_1,param_2,param_3,param_4);
  FUN_1402a68c0(param_1,param_2,param_3,param_4);
  FUN_1402a5390(param_1,param_2,param_3,param_4);
  *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | param_2;
  lVar12 = *(longlong *)(param_1 + 0x58);
  if (lVar12 == 0) {
    lVar12 = param_1 + 0x60;
  }
  if (*(longlong *)(param_3 + 0x28) != lVar12) {
    if (*(longlong *)(param_3 + 0x28) != 0) {
      thunk_FUN_1402d9040();
    }
    *(undefined8 *)(param_3 + 0x28) = 0;
    if (lVar12 != 0) {
      lVar11 = -1;
      do {
        lVar10 = lVar11;
        lVar11 = lVar10 + 1;
      } while (*(char *)(lVar12 + lVar11) != '\0');
      lVar10 = lVar10 + 2;
      lVar11 = _malloc_base(lVar10);
      if (lVar11 != 0) {
        FUN_1404210f0(lVar11,lVar12,lVar10);
      }
      *(longlong *)(param_3 + 0x28) = lVar11;
    }
  }
  return param_3;
}

