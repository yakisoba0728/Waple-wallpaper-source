// Function: FUN_14012e560
// Addr: 14012e560
// Size: 345 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012e560(void)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint local_30;
  
  if ((DAT_1404e8df8 >> 4 & 1) != 0) {
    DAT_1404e8df8 = DAT_1404e8df8 & 0xffffffef;
    FUN_140085520(&DAT_1404e7ef8,&DAT_1404e7f20);
    local_30 = CONCAT31(local_30._1_3_,7);
    plVar3 = (longlong *)FUN_14028af20(0x10);
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar4 = FUN_14028af20(0x58);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar4;
    *(undefined2 *)(lVar4 + 0x18) = 0x101;
    *plVar3 = lVar4;
    lVar4 = DAT_1404e7f30;
    plVar1 = DAT_1404e7f20;
    uVar2 = local_30 & 0xfffffeff;
    _DAT_1404e7f40 = 0;
    DAT_1404e7f30 = 0;
    uRam00000001404e7f38 = 0;
    switch(DAT_1404e7f28 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((DAT_1404e7f28 >> 8 & 1) != 0) {
        DAT_1404e7f20 = plVar3;
        DAT_1404e7f28 = uVar2;
        thunk_FUN_1402d9040(plVar1);
        plVar3 = DAT_1404e7f20;
        uVar2 = DAT_1404e7f28;
      }
      break;
    case 6:
    case 7:
      if (DAT_1404e7f20 != (longlong *)0x0) {
        DAT_1404e7f20 = plVar3;
        DAT_1404e7f28 = uVar2;
        FUN_140088e40(plVar1);
        thunk_FUN_14028af80(plVar1,0x10);
        plVar3 = DAT_1404e7f20;
        uVar2 = DAT_1404e7f28;
      }
      break;
    default:
      DAT_1404e7f20 = plVar3;
      DAT_1404e7f28 = uVar2;
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      plVar3 = DAT_1404e7f20;
      uVar2 = DAT_1404e7f28;
    }
    DAT_1404e7f28 = uVar2;
    DAT_1404e7f20 = plVar3;
    if (lVar4 != 0) {
      FUN_140017240(lVar4 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
  }
  return;
}

