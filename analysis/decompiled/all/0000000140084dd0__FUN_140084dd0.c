// Function: FUN_140084dd0
// Addr: 140084dd0
// Size: 242 bytes


undefined8 * FUN_140084dd0(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(char *)(param_1 + 1) = (char)param_2;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffeff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  switch(param_2) {
  case 0:
    break;
  case 1:
  case 2:
  case 3:
    *param_1 = 0;
    return param_1;
  case 4:
    *param_1 = &DAT_140478898;
    return param_1;
  case 5:
    *(undefined1 *)param_1 = 0;
    return param_1;
  case 6:
  case 7:
    plVar1 = (longlong *)FUN_14028af20(0x10);
    *plVar1 = 0;
    plVar1[1] = 0;
    lVar2 = FUN_14028af20(0x58);
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
    *plVar1 = lVar2;
    *param_1 = plVar1;
    return param_1;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x18b);
  }
  return param_1;
}

