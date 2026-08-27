// Function: FUN_14004a790
// Addr: 14004a790
// Size: 167 bytes


void FUN_14004a790(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((param_1[0x10] != 0) && (*(undefined8 **)param_1[3] == param_1 + 0xe)) {
    lVar1 = param_1[0x11];
    uVar2 = param_1[0x12];
    *(longlong *)param_1[3] = lVar1;
    *(longlong *)param_1[7] = lVar1;
    *(int *)param_1[10] = (int)uVar2 - (int)lVar1;
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    FUN_14004c3c0(param_1);
  }
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    thunk_FUN_14028af80(lVar1,0x10);
    return;
  }
  return;
}

