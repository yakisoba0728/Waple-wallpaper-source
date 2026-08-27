// Function: FUN_140057770
// Addr: 140057770
// Size: 487 bytes


LRESULT FUN_140057770(HWND param_1,UINT param_2,WPARAM param_3,longlong *param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  LRESULT LVar5;
  undefined1 *puVar6;
  undefined1 auStackY_98 [8];
  undefined1 auStackY_90 [24];
  tagPAINTSTRUCT local_58;
  
  puVar6 = auStackY_98;
  switch(param_2) {
  case 1:
    lVar1 = *param_4;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    SetWindowLongPtrW(param_1,-0x15,lVar1);
    return 0;
  case 2:
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x000140057950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LVar5 = DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
    return LVar5;
  case 0xf:
    BeginPaint(param_1,&local_58);
    EndPaint(param_1,&local_58);
    return 0;
  case 0x14:
    return 1;
  case 0x46:
    param_4[1] = 0;
    return 0;
  case 0x47:
    SetWindowPos(param_1,(HWND)0x0,0,0,0,0,0x4013);
    return 0;
  }
  plVar3 = (longlong *)GetWindowLongPtrW(param_1,-0x15);
  if ((longlong *)plVar3[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar3[1] + 0x10))();
    plVar3[1] = 0;
  }
  if ((longlong *)*plVar3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar3 + 0x10))();
    *plVar3 = 0;
  }
  SetWindowLongPtrW(param_1,-0x15,0);
  if ((HGDIOBJ)plVar3[0xc] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)plVar3[0xc]);
  }
  plVar3[0xc] = 0;
  lVar1 = plVar3[8];
  if (lVar1 != 0) {
    lVar4 = lVar1;
    puVar6 = auStackY_98;
    if ((0xfff < (ulonglong)(plVar3[10] - lVar1)) &&
       (lVar4 = *(longlong *)(lVar1 + -8), puVar6 = auStackY_98, 0x1f < (lVar1 - lVar4) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar4 = (*pcVar2)(5);
      puVar6 = auStackY_90;
    }
    *(undefined8 *)(puVar6 + -8) = 0x140057909;
    thunk_FUN_14028af80(lVar4);
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
  }
  *(undefined8 *)(puVar6 + -8) = 0x140057922;
  thunk_FUN_14028af80(plVar3,0x68);
  return 0;
}

