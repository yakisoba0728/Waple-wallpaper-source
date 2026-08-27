// Function: FUN_1400f1970
// Addr: 1400f1970
// Size: 474 bytes


int FUN_1400f1970(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 undefined8 *param_5,IMFAsyncCallback *param_6,IUnknown *param_7)

{
  _func_5158 *p_Var1;
  int iVar2;
  IUnknown *punkObject;
  longlong *local_res18 [2];
  longlong *local_38;
  IMFAsyncResult *local_30;
  longlong *local_28 [2];
  
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_3 == (longlong *)0x0) {
    return -0x7fff0001;
  }
  local_28[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_res18[0] = (longlong *)0x0;
  param_5._0_4_ = 2;
  iVar2 = MFCreateSourceResolver(local_28);
  punkObject = (IUnknown *)0x0;
  if (-1 < iVar2) {
    (**(code **)(*param_3 + 0x38))(param_3,0);
    iVar2 = (**(code **)(*local_28[0] + 0x20))
                      (local_28[0],param_3,param_2,0x11,0,&param_5,&local_38);
    if (-1 < iVar2) {
      iVar2 = (**(code **)*local_38)(local_38,&DAT_1404872e8,local_res18);
      punkObject = (IUnknown *)0x0;
      if (-1 < iVar2) {
        punkObject = (IUnknown *)FUN_14028af20(0x18);
        punkObject[2].lpVtbl = (IUnknownVtbl *)0x0;
        punkObject->lpVtbl = (IUnknownVtbl *)&PTR_FUN_1404872f8;
        *(undefined4 *)&punkObject[1].lpVtbl = 1;
        (**(code **)*local_res18[0])(local_res18[0],&DAT_1404872d8);
        local_30 = (IMFAsyncResult *)0x0;
        iVar2 = MFCreateAsyncResult(punkObject,param_6,param_7,&local_30);
        if (-1 < iVar2) {
          iVar2 = MFInvokeCallback(local_30);
          (*local_30->lpVtbl->Release)(local_30);
        }
      }
    }
  }
  if (local_res18[0] != (longlong *)0x0) {
    (**(code **)(*local_res18[0] + 0x10))();
    local_res18[0] = (longlong *)0x0;
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
  }
  if (punkObject != (IUnknown *)0x0) {
    p_Var1 = punkObject->lpVtbl->Release;
    if (p_Var1 == FUN_1400f1690) {
      FUN_1400f1690();
    }
    else {
      (*p_Var1)(punkObject);
    }
  }
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  return iVar2;
}

