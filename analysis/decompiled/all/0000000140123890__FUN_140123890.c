// Function: FUN_140123890
// Addr: 140123890
// Size: 2026 bytes


int FUN_140123890(longlong *param_1,undefined8 param_2)

{
  LPVOID *ppv;
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  HRESULT HVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  IID local_80;
  IID local_70;
  longlong *local_60;
  longlong *local_58 [3];
  
  local_res10 = param_2;
  ShowWindow((HWND)param_1[0xe],0);
  param_1[10] = 0;
  if ((ulonglong)param_1[0xb] < 8) {
    plVar10 = param_1 + 8;
  }
  else {
    plVar10 = (longlong *)param_1[8];
  }
  plVar8 = param_1 + 0x14;
  *(undefined2 *)plVar10 = 0;
  plVar10 = (longlong *)*plVar8;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x68))(plVar10,0,0,0);
  }
  ppv = (LPVOID *)(param_1 + 0x11);
  if (*ppv != (longlong *)0x0) {
    (**(code **)(*(longlong *)*ppv + 0x10))();
    *ppv = (LPVOID)0x0;
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
    param_1[0x12] = 0;
  }
  if ((longlong *)*plVar8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar8 + 0x10))();
    *plVar8 = 0;
  }
  plVar10 = param_1 + 0x13;
  if ((longlong *)*plVar10 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar10 + 0x10))();
    *plVar10 = 0;
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
    param_1[0x17] = 0;
  }
  plVar11 = (longlong *)param_1[0x15];
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x10))();
    param_1[0x15] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x16];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  HVar6 = CoCreateInstance((IID *)&DAT_14042c340,(LPUNKNOWN)0x0,1,(IID *)&DAT_14048a248,ppv);
  if (((((HVar6 < 0) ||
        (HVar6 = (*(code *)**(undefined8 **)*ppv)(*ppv,&DAT_14048a238,param_1 + 0x12), HVar6 < 0))
       || (HVar6 = (*(code *)**(undefined8 **)*ppv)(*ppv,&DAT_14048a268,plVar8), HVar6 < 0)) ||
      ((HVar6 = (*(code *)**(undefined8 **)*ppv)(*ppv,&DAT_14048a258,plVar10), HVar6 < 0 ||
       (HVar6 = (*(code *)**(undefined8 **)*ppv)(*ppv,&DAT_14048a228,param_1 + 0x17), HVar6 < 0))))
     || (HVar6 = (**(code **)(*(longlong *)*plVar8 + 0x68))
                           ((longlong *)*plVar8,param_1[0xe],0x8002,0), HVar6 < 0))
  goto LAB_140123f9e;
  *(undefined4 *)(param_1 + 0xf) = 3;
  bVar3 = false;
  local_58[0] = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  plVar11 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  plVar10 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  HVar6 = (*(code *)**(undefined8 **)*ppv)(*ppv,&DAT_14048a208,local_58);
  plVar8 = plVar10;
  plVar12 = plVar11;
  bVar4 = false;
  if (-1 < HVar6) {
    plVar2 = *ppv;
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      HVar6 = (**(code **)(*plVar2 + 0x70))(plVar2,local_res10,0,&local_90);
      plVar12 = (longlong *)0x0;
      bVar4 = false;
      if (-1 < HVar6) {
LAB_140123c85:
        plVar8 = (longlong *)FUN_1402ecff0(0x60,&PTR_140426e20);
        if (plVar8 == (longlong *)0x0) {
          HVar6 = -0x7fffbffb;
        }
        else {
          *(undefined4 *)((longlong)plVar8 + 0x24) = 0x3f800000;
          *plVar8 = (longlong)&PTR_FUN_14048a1a0;
          *(undefined4 *)(plVar8 + 5) = 0x3f800000;
          plVar8[1] = 0;
          plVar8[2] = 0;
          plVar8[3] = 0;
          *(undefined1 *)(plVar8 + 4) = 0;
          *(undefined8 *)((longlong)plVar8 + 0x2c) = 0x3f800000;
          plVar8[7] = 0;
          plVar8[8] = 0;
          plVar8[9] = 0;
          plVar8[10] = 0xf;
          *(undefined1 *)(plVar8 + 7) = 0;
          *(undefined4 *)(plVar8 + 0xb) = 0x3f800000;
          param_1[0x16] = (longlong)plVar8;
          HVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,*ppv,param_1[0xe]);
          if (-1 < HVar6) {
            if (*(char *)((longlong)param_1 + 0x34) != '\0') {
              plVar8 = *ppv;
              local_a8 = (longlong *)0x0;
              HVar6 = CoCreateInstance((IID *)&DAT_14042c350,(LPUNKNOWN)0x0,1,(IID *)&DAT_14048a180,
                                       &local_a8);
              if ((-1 < HVar6) &&
                 (HVar6 = (**(code **)(*plVar8 + 0x18))(plVar8,local_a8,L"Audio Renderer"),
                 plVar8 = local_a8, -1 < HVar6)) {
                (**(code **)(*local_a8 + 8))(local_a8);
                plVar11 = plVar8;
              }
              if (local_a8 != (longlong *)0x0) {
                (**(code **)(*local_a8 + 0x10))();
                local_a8 = (longlong *)0x0;
              }
              if (HVar6 < 0) goto LAB_140123e73;
            }
            HVar6 = (**(code **)(*local_90 + 0x50))(local_90,&local_88);
            if (-1 < HVar6) {
              iVar7 = (**(code **)(*local_88 + 0x18))(local_88,1,&local_60,0);
              while (iVar7 == 0) {
                if (bVar3) {
                  iVar7 = (**(code **)(*local_58[0] + 0xa0))(local_58[0],local_60,1,0);
                }
                else {
                  iVar7 = (**(code **)(*local_58[0] + 0x60))(local_58[0],local_60);
                }
                (**(code **)(*local_60 + 0x10))();
                if (-1 < iVar7) {
                  bVar3 = true;
                }
                iVar7 = (**(code **)(*local_88 + 0x18))(local_88,1,&local_60);
              }
              HVar6 = (**(code **)(*(longlong *)param_1[0x16] + 0x18))
                                ((longlong *)param_1[0x16],param_1[0x11]);
              if ((-1 < HVar6) && (plVar11 != (longlong *)0x0)) {
                local_res8[0] = 0;
                HVar6 = FUN_1401251e0(param_1[0x11],plVar11,local_res8);
              }
            }
            goto LAB_140123e73;
          }
          puVar1 = (undefined8 *)param_1[0x16];
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
        }
        param_1[0x16] = 0;
        goto LAB_140123e73;
      }
    }
    else {
      local_80.Data1 = 0xb98d13e7;
      local_80.Data2 = 0x55db;
      local_80.Data3 = 0x4385;
      local_80.Data4[0] = 0xa3;
      local_80.Data4[1] = '=';
      local_80.Data4[2] = '\t';
      local_80.Data4[3] = 0xfd;
      local_80.Data4[4] = '\x1b';
      local_80.Data4[5] = 0xa2;
      local_80.Data4[6] = 'c';
      local_80.Data4[7] = '8';
      local_a0 = (longlong *)0x0;
      local_res18 = (longlong *)0x0;
      HVar6 = CoCreateInstance(&local_80,(LPUNKNOWN)0x0,1,(IID *)&DAT_14048a180,&local_res18);
      if ((-1 < HVar6) &&
         (HVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,local_res18,L"LAV Splitter Source"),
         plVar8 = local_res18, -1 < HVar6)) {
        local_a0 = local_res18;
        (**(code **)(*local_res18 + 8))(local_res18);
        plVar10 = plVar8;
      }
      if (local_res18 != (longlong *)0x0) {
        (**(code **)(*local_res18 + 0x10))();
        local_res18 = (longlong *)0x0;
      }
      plVar8 = plVar10;
      bVar4 = bVar3;
      if ((((-1 < HVar6) &&
           (HVar6 = (**(code **)*plVar10)(plVar10,&DAT_14042c3a0,&local_98), -1 < HVar6)) &&
          (HVar6 = (**(code **)(*local_98 + 0x18))(local_98,local_res10,0), -1 < HVar6)) &&
         (HVar6 = (**(code **)*local_98)(local_98,&DAT_14042c390,&local_90), -1 < HVar6)) {
        plVar8 = *ppv;
        local_res20 = (longlong *)0x0;
        local_70.Data1 = 0xee30215d;
        local_70.Data2 = 0x164f;
        local_70.Data3 = 0x4a92;
        local_70.Data4[0] = 0xa4;
        local_70.Data4[1] = 0xeb;
        local_70.Data4[2] = 0x9d;
        local_70.Data4[3] = 'L';
        local_70.Data4[4] = '\x13';
        local_70.Data4[5] = '9';
        local_70.Data4[6] = '\x0f';
        local_70.Data4[7] = 0x9f;
        HVar6 = CoCreateInstance(&local_70,(LPUNKNOWN)0x0,1,(IID *)&DAT_14048a180,&local_res20);
        plVar10 = (longlong *)0x0;
        if ((-1 < HVar6) &&
           (HVar6 = (**(code **)(*plVar8 + 0x18))(plVar8,local_res20,L"LAV Video Decoder"),
           plVar8 = local_res20, -1 < HVar6)) {
          (**(code **)(*local_res20 + 8))(local_res20);
          plVar10 = plVar8;
        }
        if (local_res20 != (longlong *)0x0) {
          (**(code **)(*local_res20 + 0x10))();
          local_res20 = (longlong *)0x0;
        }
        if (-1 < HVar6) {
          if ((longlong *)param_1[0x15] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
            param_1[0x15] = 0;
          }
          (**(code **)*plVar10)(plVar10,&DAT_14048a218,param_1 + 0x15);
          goto LAB_140123c85;
        }
LAB_140123e73:
        plVar8 = local_a0;
        plVar12 = plVar11;
        bVar4 = bVar3;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          plVar8 = local_a0;
        }
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
    local_98 = (longlong *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x10))();
    local_90 = (longlong *)0x0;
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
    local_88 = (longlong *)0x0;
  }
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (-1 < HVar6) {
    if (!bVar4) {
      HVar6 = -0x7ffbfde8;
    }
    if (-1 < HVar6) {
      (**(code **)(*(longlong *)param_1[0x16] + 0x20))
                ((longlong *)param_1[0x16],(longlong)param_1 + 0x24);
      (**(code **)(*param_1 + 0x70))(param_1,*(undefined1 *)((longlong)param_1 + 0x35));
      (**(code **)(*param_1 + 0x30))(param_1,*(undefined4 *)((longlong)param_1 + 0x2c));
      (**(code **)(*param_1 + 0x38))(param_1,(int)param_1[6]);
      (**(code **)(*param_1 + 0xa8))(param_1,*(undefined8 *)((longlong)param_1 + 0x1c));
      (**(code **)(*param_1 + 8))(param_1);
      uVar5 = local_res10;
      uVar9 = FUN_1402d6aa0(local_res10);
      FUN_140016ae0(param_1 + 8,uVar5,uVar9);
      (**(code **)(*param_1 + 0x48))(param_1);
    }
  }
LAB_140123f9e:
  plVar10 = param_1 + 0x14;
  if (HVar6 < 0) {
    plVar8 = (longlong *)*plVar10;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x68))(plVar8,0,0,0);
    }
    plVar8 = (longlong *)param_1[0x11];
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))();
      param_1[0x11] = 0;
    }
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
      param_1[0x12] = 0;
    }
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x10))();
      *plVar10 = 0;
    }
    plVar10 = (longlong *)param_1[0x13];
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))();
      param_1[0x13] = 0;
    }
    if ((longlong *)param_1[0x17] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
      param_1[0x17] = 0;
    }
    plVar10 = (longlong *)param_1[0x15];
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))();
      param_1[0x15] = 0;
    }
    puVar1 = (undefined8 *)param_1[0x16];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  return HVar6;
}

