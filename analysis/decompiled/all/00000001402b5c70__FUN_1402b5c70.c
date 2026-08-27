// Function: FUN_1402b5c70
// Addr: 1402b5c70
// Size: 3533 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1402b5c70(_Locinfo *param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte bVar5;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *ptVar6;
  _Collvec *p_Var7;
  undefined8 uVar8;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *ptVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 local_res10 [8];
  undefined1 local_58 [8];
  _Collvec local_50;
  
  bVar5 = FUN_1400e6fa0(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e91c0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e91c0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e91c0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_14028af20(0x20);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        FUN_140293ad0(param_3,0);
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined ***)ptVar6 = std::collate<char>::vftable;
        p_Var7 = _Getcoll(&local_50);
        uVar1 = *(undefined4 *)&p_Var7->field_0x4;
        uVar2 = *(undefined4 *)&p_Var7->_LocaleName;
        uVar3 = *(undefined4 *)((longlong)&p_Var7->_LocaleName + 4);
        *(uint *)(ptVar6 + 0x10) = p_Var7->_Page;
        *(undefined4 *)(ptVar6 + 0x14) = uVar1;
        *(undefined4 *)(ptVar6 + 0x18) = uVar2;
        *(undefined4 *)(ptVar6 + 0x1c) = uVar3;
        FUN_140293ad0(param_3,ptVar6);
      }
    }
    else {
      if (DAT_1404e91c0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e91c0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e91c0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      FUN_1402914b0(local_58,0);
      ptVar6 = DAT_1404e8f70;
      local_50._0_8_ = DAT_1404e8f70;
      if (DAT_1404e91c0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e91c0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e91c0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar12 = DAT_1404e91c0;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e91c0 * 8;
      if (DAT_1404e91c0 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1402b5ed4;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1402b5ed4:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402b5eed:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_1402b5e30;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar12 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402b5eed;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1400e6fa0(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_1402916b0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(ptVar9);
          DAT_1404e8f70 = ptVar6;
        }
      }
LAB_1402b5e30:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,ptVar9);
    }
  }
  ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e42d8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42d8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42d8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      local_50._0_8_ = FUN_14028af20(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined ***)local_50._0_8_ = std::messages<char>::vftable;
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                 local_50._0_8_;
      }
    }
    else {
      if (DAT_1404e42d8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42d8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42d8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      FUN_1402914b0(local_58,0);
      ptVar9 = DAT_1404e4310;
      local_50._0_8_ = DAT_1404e4310;
      if (DAT_1404e42d8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42d8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42d8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar12 = DAT_1404e42d8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e42d8 * 8;
      if (DAT_1404e42d8 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar6 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1402b61d1;
      }
      else {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1402b61d1:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402b61ea:
          if (ptVar6 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_1402b601e;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar12 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar6 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402b61ea;
          }
        }
        ptVar6 = ptVar9;
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1402b33e0(&local_50,param_4);
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          FUN_1402916b0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(ptVar6);
          DAT_1404e4310 = ptVar6;
        }
      }
LAB_1402b601e:
      FUN_140291550(local_58);
    }
    FUN_140293ad0(param_3,ptVar6);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e42e0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42e0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42e0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e42e0;
      local_50._0_8_ = FUN_14028af20(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined ***)local_50._0_8_ =
             std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      FUN_140293ad0(param_3,local_50._0_8_,uVar12);
      if (DAT_1404e42e8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42e8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42e8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e42e8;
      local_50._0_8_ = FUN_14028af20(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined ***)local_50._0_8_ =
             std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      FUN_140293ad0(param_3,local_50._0_8_,uVar12);
      if (DAT_1404e42f0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42f0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42f0 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e42f0;
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_14028af20(0x78);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined ***)ptVar6 = std::_Mpunct<char>::vftable;
        ptVar6[0x44] = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>)0x0;
        FUN_1402b5ab0(ptVar6,param_1,0);
        *(undefined ***)ptVar6 = std::moneypunct<char,0>::vftable;
      }
      FUN_140293ad0(param_3,ptVar6,lVar11);
      if (DAT_1404e42f8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42f8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42f8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_14028af20(0x78);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined ***)ptVar6 = std::_Mpunct<char>::vftable;
        ptVar6[0x44] = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>)0x1;
        FUN_1402b5ab0(ptVar6,param_1,0);
        *(undefined ***)ptVar6 = std::moneypunct<char,1>::vftable;
      }
      FUN_140293ad0(param_3,ptVar6);
    }
    else {
      if (DAT_1404e42e0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42e0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42e0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e42e0;
      FUN_1402914b0(local_58,0);
      ptVar6 = DAT_1404e4318;
      local_50._0_8_ = DAT_1404e4318;
      if (DAT_1404e42e0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42e0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42e0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e42e0;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e42e0 * 8;
      if (DAT_1404e42e0 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1402b667a;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1402b667a:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402b6693:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_1402b63bc;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402b6693;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1402b3570(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_1402916b0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(ptVar9);
          DAT_1404e4318 = ptVar6;
        }
      }
LAB_1402b63bc:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,ptVar9,uVar12);
      if (DAT_1404e42e8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42e8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42e8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e42e8;
      FUN_1402914b0(local_58,0);
      ptVar6 = DAT_1404e4320;
      local_50._0_8_ = DAT_1404e4320;
      if (DAT_1404e42e8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42e8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42e8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e42e8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e42e8 * 8;
      if (DAT_1404e42e8 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1402b66e9;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1402b66e9:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402b6702:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_1402b64a2;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402b6702;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1402b3700(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_1402916b0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(ptVar9);
          DAT_1404e4320 = ptVar6;
        }
      }
LAB_1402b64a2:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,ptVar9,uVar12);
      if (DAT_1404e42f0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42f0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42f0 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e42f0;
      uVar8 = FUN_1402b30e0(param_4);
      FUN_140293ad0(param_3,uVar8,lVar11);
      if (DAT_1404e42f8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e42f8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e42f8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar8 = FUN_1402b2fc0(param_4);
      FUN_140293ad0(param_3,uVar8);
    }
  }
  if ((param_2 & 0x10) == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_1404e4300 == 0) {
      FUN_1402914b0(local_res10,0);
      if (DAT_1404e4300 == 0) {
        DAT_1404e3c90 = DAT_1404e3c90 + 1;
        DAT_1404e4300 = (ulonglong)DAT_1404e3c90;
      }
      FUN_140291550(local_res10);
    }
    uVar12 = DAT_1404e4300;
    local_50._0_8_ = FUN_14028af20(0x58);
    uVar8 = 0;
    if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_ !=
        (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      uVar8 = std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
              time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                        ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                         local_50._0_8_,param_1,0);
    }
    FUN_140293ad0(param_3,uVar8,uVar12);
    if (DAT_1404e4308 == 0) {
      FUN_1402914b0(local_res10,0);
      if (DAT_1404e4308 == 0) {
        DAT_1404e3c90 = DAT_1404e3c90 + 1;
        DAT_1404e4308 = (ulonglong)DAT_1404e3c90;
      }
      FUN_140291550(local_res10);
    }
    uVar12 = DAT_1404e4308;
    local_50._0_8_ = FUN_14028af20(0x18);
    if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_ ==
        (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
    }
    else {
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_1402b3250(local_50._0_8_,param_1,0);
    }
    goto LAB_1402b6925;
  }
  if (DAT_1404e4300 == 0) {
    FUN_1402914b0(local_res10,0);
    if (DAT_1404e4300 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e4300 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550(local_res10);
  }
  uVar12 = DAT_1404e4300;
  FUN_1402914b0(local_58,0);
  ptVar6 = DAT_1404e4338;
  local_50._0_8_ = DAT_1404e4338;
  if (DAT_1404e4300 == 0) {
    FUN_1402914b0(local_res10,0);
    if (DAT_1404e4300 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e4300 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550();
  }
  uVar4 = DAT_1404e4300;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_1404e4300 * 8;
  if (DAT_1404e4300 < *(ulonglong *)(lVar10 + 0x18)) {
    ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
              (lVar11 + *(longlong *)(lVar10 + 0x10));
    if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
    goto LAB_1402b6947;
  }
  else {
    ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1402b6947:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402b6960:
      if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
      goto LAB_1402b6830;
    }
    else {
      lVar10 = FUN_1402916f0();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_1402b6960;
      }
    }
    ptVar9 = ptVar6;
    if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      lVar11 = FUN_1402b3c10(&local_50,param_4);
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_140292650();
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      FUN_1402916b0(local_50._0_8_);
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(ptVar9);
      DAT_1404e4338 = ptVar6;
    }
  }
LAB_1402b6830:
  FUN_140291550(local_58);
  FUN_140293ad0(param_3,ptVar9,uVar12);
  if (DAT_1404e4308 == 0) {
    FUN_1402914b0(local_res10,0);
    if (DAT_1404e4308 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e4308 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550(local_res10);
  }
  uVar12 = DAT_1404e4308;
  FUN_1402914b0(local_58,0);
  ptVar6 = DAT_1404e4340;
  local_50._0_8_ = DAT_1404e4340;
  if (DAT_1404e4308 == 0) {
    FUN_1402914b0(local_res10,0);
    if (DAT_1404e4308 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e4308 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550();
  }
  uVar4 = DAT_1404e4308;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_1404e4308 * 8;
  if (DAT_1404e4308 < *(ulonglong *)(lVar10 + 0x18)) {
    ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
              (lVar11 + *(longlong *)(lVar10 + 0x10));
    if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
    goto LAB_1402b69b6;
  }
  else {
    ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1402b69b6:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402b69cf:
      if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
      goto LAB_1402b6916;
    }
    else {
      lVar10 = FUN_1402916f0();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_1402b69cf;
      }
    }
    ptVar9 = ptVar6;
    if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      lVar11 = FUN_1402b3db0(&local_50,param_4);
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_140292650();
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      FUN_1402916b0(local_50._0_8_);
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(ptVar9);
      DAT_1404e4340 = ptVar6;
    }
  }
LAB_1402b6916:
  FUN_140291550(local_58);
LAB_1402b6925:
  FUN_140293ad0(param_3,ptVar9,uVar12);
  return;
}

