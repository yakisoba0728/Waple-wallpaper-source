// Function: FUN_1402a5390
// Addr: 1402a5390
// Size: 5406 bytes


void FUN_1402a5390(undefined8 param_1,uint param_2,undefined8 param_3,longlong param_4)

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
      if (DAT_1404e3cb8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e3cb8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e3cb8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e3cb8;
      local_50[0] = (undefined8 *)FUN_14028af20(0x60);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_14029da90(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_1404e3cb8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e3cb8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e3cb8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e3cb8;
      puVar6 = (undefined8 *)FUN_14029d190(param_4);
    }
    FUN_140293ad0(param_3,puVar6,lVar11);
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e41c8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41c8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41c8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41c8;
      local_50[0] = (undefined8 *)FUN_14028af20(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e41d0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41d0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41d0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41d0;
      local_50[0] = (undefined8 *)FUN_14028af20(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e41d8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41d8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41d8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e41d8;
      puVar6 = (undefined8 *)FUN_14028af20(0x30);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::numpunct<unsigned_short>::vftable;
        FUN_1402a4950(puVar6,param_1,0);
        puVar8 = puVar6;
      }
      FUN_140293ad0(param_3,puVar8,lVar11);
    }
    else {
      if (DAT_1404e41c8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41c8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41c8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41c8;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e4278;
      local_50[0] = DAT_1404e4278;
      if (DAT_1404e41c8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41c8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41c8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e41c8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e41c8 * 8;
      if (DAT_1404e41c8 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a590a;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a590a:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a5923:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a56fd;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a5923;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14029fd50(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e4278 = puVar8;
        }
      }
LAB_1402a56fd:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e41d0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41d0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41d0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41d0;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e4280;
      local_50[0] = DAT_1404e4280;
      if (DAT_1404e41d0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41d0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41d0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e41d0;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e41d0 * 8;
      if (DAT_1404e41d0 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a5979;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a5979:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a5992:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a57e3;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a5992;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1402a0070(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e4280 = puVar8;
        }
      }
LAB_1402a57e3:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e41d8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41d8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41d8 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e41d8;
      uVar9 = FUN_14029d730(param_4);
      FUN_140293ad0(param_3,uVar9,lVar11);
    }
  }
  puVar8 = (undefined8 *)0x0;
  bVar5 = FUN_14029e7a0(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e41e0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41e0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41e0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41e0;
      puVar6 = (undefined8 *)FUN_14028af20(0x20);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::collate<unsigned_short>::vftable;
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
      if (DAT_1404e41e0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41e0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41e0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41e0;
      FUN_1402914b0(local_58,0);
      puVar6 = DAT_1404e4290;
      local_50[0] = DAT_1404e4290;
      if (DAT_1404e41e0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41e0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41e0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e41e0;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e41e0 * 8;
      if (DAT_1404e41e0 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar8 == (undefined8 *)0x0) goto LAB_1402a5b66;
      }
      else {
        puVar8 = (undefined8 *)0x0;
LAB_1402a5b66:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a5b7f:
          if (puVar8 != (undefined8 *)0x0) goto LAB_1402a5ac0;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a5b7f;
          }
        }
        puVar8 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar11 = FUN_14029e7a0(local_50,param_4);
          puVar8 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar8);
          DAT_1404e4290 = puVar8;
        }
      }
LAB_1402a5ac0:
      FUN_140291550(local_58);
    }
    FUN_140293ad0(param_3,puVar8,uVar12);
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e41e8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41e8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41e8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41e8;
      puVar6 = (undefined8 *)FUN_14028af20(0x10);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::messages<unsigned_short>::vftable;
      }
    }
    else {
      if (DAT_1404e41e8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41e8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41e8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41e8;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e4298;
      local_50[0] = DAT_1404e4298;
      if (DAT_1404e41e8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41e8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41e8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e41e8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e41e8 * 8;
      if (DAT_1404e41e8 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a5e60;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a5e60:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a5e79:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a5cad;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a5e79;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14029ecf0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e4298 = puVar8;
        }
      }
LAB_1402a5cad:
      FUN_140291550(local_58);
    }
    FUN_140293ad0(param_3,puVar6,uVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e41f0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41f0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41f0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41f0;
      local_50[0] = (undefined8 *)FUN_14028af20(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
      }
      FUN_140293ad0(param_3,local_50[0],uVar12);
      if (DAT_1404e41f8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41f8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41f8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41f8;
      local_50[0] = (undefined8 *)FUN_14028af20(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
      }
      FUN_140293ad0(param_3,local_50[0],uVar12);
      if (DAT_1404e4200 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4200 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4200 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e4200;
      puVar8 = (undefined8 *)FUN_14028af20(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<unsigned_short>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 0;
        FUN_1402a4550(puVar8,param_1,0);
        *puVar8 = std::moneypunct<unsigned_short,0>::vftable;
      }
      FUN_140293ad0(param_3,puVar8,lVar11);
      if (DAT_1404e4208 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4208 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4208 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e4208;
      puVar8 = (undefined8 *)FUN_14028af20(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<unsigned_short>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 1;
        FUN_1402a4550(puVar8,param_1,0);
        *puVar8 = std::moneypunct<unsigned_short,1>::vftable;
      }
    }
    else {
      if (DAT_1404e41f0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41f0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41f0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41f0;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e42a0;
      local_50[0] = DAT_1404e42a0;
      if (DAT_1404e41f0 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41f0 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41f0 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e41f0;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e41f0 * 8;
      if (DAT_1404e41f0 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a6301;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a6301:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a631a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a6043;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a631a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14029f010(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e42a0 = puVar8;
        }
      }
LAB_1402a6043:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e41f8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41f8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41f8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e41f8;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e42a8;
      local_50[0] = DAT_1404e42a8;
      if (DAT_1404e41f8 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e41f8 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e41f8 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e41f8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e41f8 * 8;
      if (DAT_1404e41f8 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a6370;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a6370:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a6389:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a6129;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a6389;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14029f330(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e42a8 = puVar8;
        }
      }
LAB_1402a6129:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e4200 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4200 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4200 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e4200;
      uVar9 = FUN_14029d3d0(param_4);
      FUN_140293ad0(param_3,uVar9,lVar11);
      if (DAT_1404e4208 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4208 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4208 = (longlong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      lVar11 = DAT_1404e4208;
      puVar8 = (undefined8 *)FUN_14029d2b0(param_4);
    }
    FUN_140293ad0(param_3,puVar8,lVar11);
  }
  if ((param_2 & 0x10) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e4210 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4210 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4210 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4210;
      local_50[0] = (undefined8 *)FUN_14028af20(0x58);
      uVar9 = 0;
      if (local_50[0] != (undefined8 *)0x0) {
        uVar9 = time_get<>(local_50[0],param_1,0);
      }
      FUN_140293ad0(param_3,uVar9,uVar12);
      if (DAT_1404e4218 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4218 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4218 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4218;
      local_50[0] = (undefined8 *)FUN_14028af20(0x18);
      if (local_50[0] == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)FUN_14029dba0(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_1404e4210 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4210 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4210 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4210;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e42c0;
      local_50[0] = DAT_1404e42c0;
      if (DAT_1404e4210 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4210 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4210 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e4210;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e4210 * 8;
      if (DAT_1404e4210 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a6641;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a6641:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a665a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a64b7;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a665a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1402a03b0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e42c0 = puVar8;
        }
      }
LAB_1402a64b7:
      FUN_140291550(local_58);
      FUN_140293ad0(param_3,puVar6,uVar12);
      if (DAT_1404e4218 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4218 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4218 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550(local_res10);
      }
      uVar12 = DAT_1404e4218;
      FUN_1402914b0(local_58,0);
      puVar8 = DAT_1404e42c8;
      local_50[0] = DAT_1404e42c8;
      if (DAT_1404e4218 == 0) {
        FUN_1402914b0(local_res10,0);
        if (DAT_1404e4218 == 0) {
          DAT_1404e3c90 = DAT_1404e3c90 + 1;
          DAT_1404e4218 = (ulonglong)DAT_1404e3c90;
        }
        FUN_140291550();
      }
      uVar4 = DAT_1404e4218;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1404e4218 * 8;
      if (DAT_1404e4218 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1402a66b0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1402a66b0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a66c9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1402a659d;
        }
        else {
          lVar10 = FUN_1402916f0();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1402a66c9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1402a06f0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_140292650();
          }
          puVar8 = local_50[0];
          FUN_1402916b0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
          DAT_1404e42c8 = puVar8;
        }
      }
LAB_1402a659d:
      FUN_140291550(local_58);
    }
    FUN_140293ad0(param_3,puVar6,uVar12);
  }
  if (local_54 == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_1404e3cb0 == 0) {
      FUN_1402914b0(local_res10,0);
      if (DAT_1404e3cb0 == 0) {
        DAT_1404e3c90 = DAT_1404e3c90 + 1;
        DAT_1404e3cb0 = (ulonglong)DAT_1404e3c90;
      }
      FUN_140291550(local_res10);
    }
    uVar12 = DAT_1404e3cb0;
    local_50[0] = (undefined8 *)FUN_14028af20(0x40);
    if (local_50[0] == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FUN_14029d9d0(local_50[0],param_1,0);
    }
    goto LAB_1402a67fe;
  }
  if (DAT_1404e3cb0 == 0) {
    FUN_1402914b0(local_res10,0);
    if (DAT_1404e3cb0 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e3cb0 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550(local_res10);
  }
  uVar12 = DAT_1404e3cb0;
  FUN_1402914b0(&local_54,0);
  puVar8 = DAT_1404e42d0;
  local_50[0] = DAT_1404e42d0;
  if (DAT_1404e3cb0 == 0) {
    FUN_1402914b0(local_res10,0);
    if (DAT_1404e3cb0 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e3cb0 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550();
  }
  uVar4 = DAT_1404e3cb0;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_1404e3cb0 * 8;
  if (DAT_1404e3cb0 < *(ulonglong *)(lVar10 + 0x18)) {
    puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
    if (puVar6 == (undefined8 *)0x0) goto LAB_1402a6820;
  }
  else {
    puVar6 = (undefined8 *)0x0;
LAB_1402a6820:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1402a6839:
      if (puVar6 != (undefined8 *)0x0) goto LAB_1402a67ef;
    }
    else {
      lVar10 = FUN_1402916f0();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_1402a6839;
      }
    }
    puVar6 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      lVar11 = FUN_14029e480(local_50,param_4);
      puVar6 = local_50[0];
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_140292650();
      }
      puVar8 = local_50[0];
      FUN_1402916b0(local_50[0]);
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(puVar6);
      DAT_1404e42d0 = puVar8;
    }
  }
LAB_1402a67ef:
  FUN_140291550(&local_54);
LAB_1402a67fe:
  FUN_140293ad0(param_3,puVar6,uVar12);
  return;
}

