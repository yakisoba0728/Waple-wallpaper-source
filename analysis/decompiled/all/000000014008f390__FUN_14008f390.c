// Function: FUN_14008f390
// Addr: 14008f390
// Size: 437 bytes


bool FUN_14008f390(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_38;
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_30 = (local_30 >> 8 & 0xfffffe) << 8;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  cVar3 = FUN_14008f570(0,param_2,&local_38);
  lVar5 = local_38;
  uVar1 = local_30;
  if (cVar3 != '\0') {
    uVar4 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    plVar2 = *(longlong **)
              (*(longlong *)
                (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar4 >> 1) * 8)
              + (ulonglong)((uint)uVar4 & 1) * 8);
    uVar1 = *(uint *)(plVar2 + 1);
    *(uint *)(plVar2 + 1) = local_30;
    lVar5 = *plVar2;
    *plVar2 = local_38;
    uVar4 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    *(longlong *)
     (*(longlong *)
       (*(longlong *)
         (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar4 >> 1) * 8) +
       (ulonglong)((uint)uVar4 & 1) * 8) + 0x18) =
         *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x70);
    uVar4 = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20) + -1;
    *(longlong *)
     (*(longlong *)
       (*(longlong *)
         (*(longlong *)(param_1 + 8) + (*(longlong *)(param_1 + 0x10) - 1U & uVar4 >> 1) * 8) +
       (ulonglong)((uint)uVar4 & 1) * 8) + 0x20) =
         *(longlong *)(param_2 + 0x10) - *(longlong *)(param_1 + 0x70);
  }
  switch(uVar1 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((uVar1 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(lVar5);
    }
    break;
  case 6:
  case 7:
    if (lVar5 != 0) {
      FUN_140088e40(lVar5);
      thunk_FUN_14028af80(lVar5,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  lVar5 = local_28;
  if (local_28 != 0) {
    FUN_140017240(local_28 + 0x40);
    FUN_140017240(lVar5 + 0x20);
    FUN_140017240(lVar5);
    thunk_FUN_14028af80(lVar5,0x60);
  }
  return cVar3 != '\0';
}

