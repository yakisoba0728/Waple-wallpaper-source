// Function: FUN_1402a68c0
// Addr: 1402a68c0
// Size: 5406 bytes


void FUN_1402a68c0(undefined8 param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined8 *puVar6;
  _Collvec *p_Var7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 local_res10 [8];
  undefined1 local_58 [4];
  uint local_54;
  undefined8 *local_50 [3];
  
  puVar8 = (undefined8 *)0x0;
  local_54 = param_2 & 2;
  if ((param_2 & 2) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e3ca0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e3ca0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e3ca0 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e3ca0;
      local_50[0] = (undefined8 *)FUN_14028af20(0x60);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_140014370(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_1404e3ca0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e3ca0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e3ca0 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e3ca0;
      puVar6 = (undefined8 *)FUN_14000f450(param_4);
    }
    FUN_140293ad0(param_3,puVar6,lVar11);
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e4188 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4188 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4188 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4188;
      local_50[0] = (undefined8 *)FUN_14028af20(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e90c8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e90c8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e90c8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e90c8;
      local_50[0] = (undefined8 *)FUN_14028af20(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e90d0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e90d0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e90d0 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e90d0;
      puVar6 = (undefined8 *)FUN_14028af20(0x30);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::numpunct<wchar_t>::vftable;
        FUN_140013500(puVar6,param_1,0);
        puVar8 = puVar6;
      }
      FUN_140293ad0(param_3,puVar8,lVar11);
    }
    else {
      if (DAT_1404e4188 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4188 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4188 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4188;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e4220;
      local_50[0] = DAT_1404e4220;
      if (DAT_1404e4188 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4188 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4188 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e4188;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e4188 * 8;
      if (DAT_1404e4188 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a6e3a;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a6e3a:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a6e53:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a6c2d;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a6e53;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14029fee0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e4220 = puVar8;
        }
      }
LAB_1402a6c2d:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e90c8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e90c8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e90c8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e90c8;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e5258;
      local_50[0] = DAT_1404e5258;
      if (DAT_1404e90c8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e90c8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e90c8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e90c8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e90c8 * 8;
      if (DAT_1404e90c8 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a6ea9;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a6ea9:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a6ec2:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a6d13;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a6ec2;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400127d0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e5258 = puVar8;
        }
      }
LAB_1402a6d13:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e90d0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e90d0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e90d0 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e90d0;
      uVar9 = FUN_1400118f0(param_4);
      FUN_140293ad0(param_3,uVar9,lVar11);
    }
  }
  puVar8 = (undefined8 *)0x0;
  bVar5 = FUN_14029e980(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e4190 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4190 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4190 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4190;
      puVar6 = (undefined8 *)FUN_14028af20(0x20);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::collate<wchar_t>::vftable;
        p_Var7 = _Getcoll((_Collvec *)local_50);
        uVar1 = *(undefined4 *)&p_Var7->field_0x4;
        uVar2 = *(undefined4 *)&p_Var7->_LocaleName;
        uVar3 = *(undefined4 *)((longlong)&p_Var7->_LocaleName + 4);
        *(uint *)(puVar6 + 2) = p_Var7->_Page;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
        *(undefined4 *)(puVar6 + 3) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
        puVar8 = puVar6;
      }
    }
    else {
      if (DAT_1404e4190 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4190 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4190 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4190;
      FUN_1402914b0(local_58,0);
      puVar6 = DAT_1404e4228;
      local_50[0] = DAT_1404e4228;
      if (DAT_1404e4190 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4190 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4190 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e4190;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e4190 * 8;
      if (DAT_1404e4190 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar8 == (undefined8 *)0x0) goto LAB_1402a7096;
      }
      else {
        puVar8 = (undefined8 *)0x0;
LAB_1402a7096:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a70af:
          if (puVar8 != (undefined8 *)0x0) goto LAB_1402a6ff0;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a70af;
          }
        }
        puVar8 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar11 = FUN_14029e980(local_50,param_4);
          puVar8 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar8);
          DAT_1404e4228 = puVar8;
        }
      }
LAB_1402a6ff0:
      FUN_140291550(local_58);
    }
    FUN_140293ad0(param_3,puVar8,uVar12);
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e4198 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4198 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4198 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4198;
      puVar6 = (undefined8 *)FUN_14028af20(0x10);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::messages<wchar_t>::vftable;
      }
    }
    else {
      if (DAT_1404e4198 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4198 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4198 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4198;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e4230;
      local_50[0] = DAT_1404e4230;
      if (DAT_1404e4198 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4198 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4198 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e4198;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e4198 * 8;
      if (DAT_1404e4198 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a7390;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a7390:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a73a9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a71dd;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a73a9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14029ee80(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e4230 = puVar8;
        }
      }
LAB_1402a71dd:
      FUN_140291550(local_58);
    }
    FUN_140293ad0(param_3,puVar6,uVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e41a0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41a0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41a0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41a0;
      local_50[0] = (undefined8 *)FUN_14028af20(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
      }
      FUN_140293ad0(param_3,local_50[0],uVar12);
      if (DAT_1404e41a8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41a8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41a8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41a8;
      local_50[0] = (undefined8 *)FUN_14028af20(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
      }
      FUN_140293ad0(param_3,local_50[0],uVar12);
      if (DAT_1404e41b0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41b0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41b0 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e41b0;
      puVar8 = (undefined8 *)FUN_14028af20(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<wchar_t>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 0;
        FUN_1402a4790(puVar8,param_1,0);
        *puVar8 = std::moneypunct<wchar_t,0>::vftable;
      }
      FUN_140293ad0(param_3,puVar8,lVar11);
      if (DAT_1404e41b8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41b8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41b8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e41b8;
      puVar8 = (undefined8 *)FUN_14028af20(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<wchar_t>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 1;
        FUN_1402a4790(puVar8,param_1,0);
        *puVar8 = std::moneypunct<wchar_t,1>::vftable;
      }
    }
    else {
      if (DAT_1404e41a0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41a0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41a0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41a0;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e4238;
      local_50[0] = DAT_1404e4238;
      if (DAT_1404e41a0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41a0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41a0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e41a0;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e41a0 * 8;
      if (DAT_1404e41a0 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a7831;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a7831:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a784a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a7573;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a784a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14029f1a0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e4238 = puVar8;
        }
      }
LAB_1402a7573:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e41a8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41a8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41a8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41a8;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e4240;
      local_50[0] = DAT_1404e4240;
      if (DAT_1404e41a8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41a8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41a8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e41a8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e41a8 * 8;
      if (DAT_1404e41a8 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a78a0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a78a0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a78b9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a7659;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a78b9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14029f4c0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e4240 = puVar8;
        }
      }
LAB_1402a7659:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e41b0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41b0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41b0 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e41b0;
      uVar9 = FUN_14029d610(param_4);
      FUN_140293ad0(param_3,uVar9,lVar11);
      if (DAT_1404e41b8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41b8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41b8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e41b8;
      puVar8 = (undefined8 *)FUN_14029d4f0(param_4);
    }
    FUN_140293ad0(param_3,puVar8,lVar11);
  }
  if ((param_2 & 0x10) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e41c0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41c0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41c0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41c0;
      local_50[0] = (undefined8 *)FUN_14028af20(0x58);
      uVar9 = 0;
      if (local_50[0] != (undefined8 *)0x0) {
        uVar9 = time_get<>(local_50[0],param_1,0);
      }
      FUN_140293ad0(param_3,uVar9,uVar12);
      if (DAT_1404e4180 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4180 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4180 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4180;
      local_50[0] = (undefined8 *)FUN_14028af20(0x18);
      if (local_50[0] == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)FUN_14029dc10(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_1404e41c0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41c0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41c0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41c0;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e4258;
      local_50[0] = DAT_1404e4258;
      if (DAT_1404e41c0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41c0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41c0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e41c0;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e41c0 * 8;
      if (DAT_1404e41c0 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a7b71;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a7b71:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a7b8a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a79e7;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a7b8a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1402a0550(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e4258 = puVar8;
        }
      }
LAB_1402a79e7:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e4180 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4180 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4180 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4180;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e4260;
      local_50[0] = DAT_1404e4260;
      if (DAT_1404e4180 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4180 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4180 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e4180;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e4180 * 8;
      if (DAT_1404e4180 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a7be0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a7be0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a7bf9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a7acd;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a7bf9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1402a0880(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e4260 = puVar8;
        }
      }
LAB_1402a7acd:
      FUN_140291550(local_58);
    }
    FUN_140293ad0(param_3,puVar6,uVar12);
  }
  if (local_54 == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_1404e3cd0 == 0) {
      FUN_1402914b0(local_res10,0);
      if (DAT_1404e3cd0 == 0) {
        DAT_1404e3c90 = DAT_1404e3c90 + 1;
        DAT_1404e3cd0 = (ulonglong)DAT_1404e3c90;
      }
      FUN_140291550(local_res10);
    }
    uVar12 = DAT_1404e3cd0;
    local_50[0] = (undefined8 *)FUN_14028af20(0x40);
    if (local_50[0] == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FUN_14029da30(local_50[0],param_1,0);
    }
    goto LAB_1402a7d2e;
  }
  if (DAT_1404e3cd0 == 0) {
    FUN_1402914b0(local_res10,0);
    if (DAT_1404e3cd0 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e3cd0 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550(local_res10);
  }
  uVar12 = DAT_1404e3cd0;
  FUN_1402914b0(&local_54,0);
  puVar8 = DAT_1404e4268;
  local_50[0] = DAT_1404e4268;
  if (DAT_1404e3cd0 == 0) {
    FUN_1402914b0(local_res10,0);
    if (DAT_1404e3cd0 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e3cd0 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550();
  }
  uVar4 = DAT_1404e3cd0;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_1404e3cd0 * 8;
  if (DAT_1404e3cd0 < *(ulonglong *)(lVar10 + 0x18)) {
    puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
    if (puVar6 == (undefined8 *)0x0) goto LAB_1402a7d50;
  }
  else {
    puVar6 = (undefined8 *)0x0;
LAB_1402a7d50:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a7d69:
      if (puVar6 != (undefined8 *)0x0) goto LAB_1402a7d1f;
    }
    else {
      lVar10 = FUN_1402916f0();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_1402a7d69;
      }
    }
    puVar6 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      lVar11 = FUN_14029e610(local_50,param_4);
      puVar6 = local_50[0];
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_140292650();
      }
      puVar8 = local_50[0];
      FUN_1402916b0(local_50[0]);
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
      DAT_1404e4268 = puVar8;
    }
  }
LAB_1402a7d1f:
  FUN_140291550(&local_54);
LAB_1402a7d2e:
  FUN_140293ad0(param_3,puVar6,uVar12);
  return;
}

